cmake_minimum_required(VERSION 2.8.11)
project(VisionImage4)
find_package(OpenCV 3 REQUIRED)
add_executable(VisionImage4 src/VisionImage4.cpp)
target_link_libraries(VisionImage4 ${OpenCV_LIBS})
