cmake_minimum_required(VERSION 4.1)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")

project(pyssoier_ans_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

set(CMAKE_CXX_MODULE_STD ON)

if (MSVC)
    add_compile_options(/W4 /WX)
else ()
    add_compile_options(
            -Wall -Wextra -Wpedantic -Werror
            -Wshadow
            -Wold-style-cast
            -Wunused
            -Wconversion
            -Wsign-conversion
            -Wnull-dereference
            -Wdouble-promotion
            -Wformat=2
            -Wimplicit-fallthrough
            -Wmisleading-indentation
            -Wnon-virtual-dtor
            -Woverloaded-virtual
    )
endif ()

file(GLOB_RECURSE ALL_SOURCES "src/**/*.cpp")

foreach (SRC ${ALL_SOURCES})
    cmake_path(GET SRC STEM EXE_NAME)

    add_executable(${EXE_NAME} ${SRC})

    set_target_properties(${EXE_NAME} PROPERTIES
            CXX_SCAN_FOR_MODULES ON
    )

    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        target_compile_options(${EXE_NAME} PRIVATE -stdlib=libc++)
        target_link_options(${EXE_NAME} PRIVATE -stdlib=libc++)
    endif ()
endforeach ()