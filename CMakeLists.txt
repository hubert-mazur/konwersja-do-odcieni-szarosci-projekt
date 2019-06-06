project(myGreatProject)
cmake_minimum_required(VERSION 3.7.2)
#aux_source_directory(. SRC_LIST)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

#add_executable(${PROJECT_NAME} ${SRC_LIST})
include_directories(include)
file(GLOB SOURCES "sources/*.cpp" *.cpp)
add_executable(${PROJECT_NAME} main.cpp ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

