cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME learn-qt)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
list(APPEND CMAKE_PREFIX_PATH "/opt/Qt5/5.14.1/gcc_64")

find_package(Qt5 COMPONENTS Widgets REQUIRED)
qt5_add_resources(QT_RESOURCES src/main.qrc)
add_executable(${PROJECT_NAME}
        src/main.cpp
        ${QT_RESOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
