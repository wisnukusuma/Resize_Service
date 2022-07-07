cmake_minimum_required(VERSION 3.5)
project(ResizeService)
find_package(OpenCV REQUIRED)
add_subdirectory(external/drogon)
add_subdirectory(external/base64)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(ResizeService src/main.cpp )
target_include_directories(${PROJECT_NAME} 
PUBLIC external/drogon/lib/include
PUBLIC external/base64
)
target_link_directories(${PROJECT_NAME} 
PRIVATE external/drogon
PRIVATE external/base64)
target_link_libraries(ResizeService ${OpenCV_LIBS} drogon base64)
