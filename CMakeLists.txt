cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME learn-qt)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
list(APPEND CMAKE_PREFIX_PATH "/opt/Qt5/5.14.1/gcc_64")

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

include_directories(${CMAKE_BINARY_DIR})
qt5_wrap_ui(SOURCES src/main_window.ui)
qt5_add_resources(SOURCES img/imag.qrc)
qt5_wrap_cpp(SOURCES src/main_window.h)
list(APPEND SOURCES
    src/main.cpp
    src/main_window.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
