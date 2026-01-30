cmake_minimum_required(VERSION 4.1)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")

project(pyssoier_ans_cpp LANGUAGES CXX)

add_library(hardcore_settings INTERFACE)

target_compile_features(hardcore_settings INTERFACE cxx_std_23)

string(CONCAT IS_CLANG_OR_GCC "$<OR:" "$<CXX_COMPILER_ID:Clang>,"
        "$<CXX_COMPILER_ID:AppleClang>," "$<CXX_COMPILER_ID:GNU>" ">")

target_compile_options(
        hardcore_settings
        INTERFACE # MSVC
        $<$<CXX_COMPILER_ID:MSVC>:/W4
        /WX
        >
        # Clang/GCC
        $<$<BOOL:${IS_CLANG_OR_GCC}>:
        -Wall
        -Wextra
        -Wpedantic
        -Werror
        -Wshadow
        -Wold-style-cast
        -Wunused
        -Wconversion
        -Wsign-conversion
        -Wnull-dereference
        -Wdouble-promotion
        -Wformat=2
        -Wimplicit-fallthrough
        >)

set(LLVM_COMMON_FLAGS -stdlib=libc++ -flto=thin)

set(LLVM_LINK_ONLY_FLAGS -rtlib=compiler-rt)

target_compile_options(
        hardcore_settings
        INTERFACE $<$<CXX_COMPILER_ID:Clang,AppleClang>:${LLVM_COMMON_FLAGS}>)

target_link_options(
        hardcore_settings INTERFACE
        $<$<CXX_COMPILER_ID:Clang,AppleClang>:${LLVM_COMMON_FLAGS}
        ${LLVM_LINK_ONLY_FLAGS}>)

file(GLOB_RECURSE ALL_SOURCES CONFIGURE_DEPENDS "src/**/*.cpp")

foreach (src_file ${ALL_SOURCES})
    cmake_path(GET src_file STEM exe_name)

    add_executable(${exe_name} ${src_file})

    target_link_libraries(${exe_name} PRIVATE hardcore_settings)

    set_target_properties(
            ${exe_name}
            PROPERTIES CXX_STANDARD_REQUIRED ON
            CXX_STANDARD 26
            CXX_EXTENSIONS OFF
            CXX_MODULE_STD ON
            CXX_SCAN_FOR_MODULES ON)
endforeach ()
