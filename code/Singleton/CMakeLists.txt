cmake_minimum_required(VERSION 3.0.0)
project(Singleton VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB CPP_SOURCE "${PROJECT_SOURCE_DIR}/*.cpp")
add_executable(Singleton ${CPP_SOURCE})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
