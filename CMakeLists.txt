cmake_minimum_required(VERSION 3.16)

project(Wrapper)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(PROJECT_LIBDEPS_DIR "/home/evan/src/work/libdeps/local")

# 指定依赖python的路径及库版本
set(PYTHON_INCLUDE /usr/include/python3.6)
set(PYTHON_LIB /lib/x86_64-linux-gnu/libpython3.6m.so)

include_directories(${PROJECT_LIBDEPS_DIR}/include ${PYTHON_INCLUDE})
link_directories(${PROJECT_LIBDEPS_DIR}/lib)

file(GLOB_RECURSE SRCS ./src/*.cpp)
add_library(${PROJECT_NAME} SHARED ${SRCS})

target_link_libraries(${PROJECT_NAME}  ${PYTHON_LIB} libboost_python36.so)