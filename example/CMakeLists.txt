cmake_minimum_required(VERSION 2.8)

project (Calculator-in-Travis-ver-2.0_example)
set(SOURCES main.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} Calculator-in-Travis-ver-2.0)
