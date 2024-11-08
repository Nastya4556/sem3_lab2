cmake_minimum_required(VERSION 3.29)
project(untitled1 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(untitled1
        main.cpp
        ShakerSortTest.cpp
        ShellSortTestPattern.h
        ShellSortTest.h
        ShellSortTest.cpp
        Person.h
        StringComparator.cpp
        Test.h
        Test.cpp
        ComparatorForPerson.cpp
        ComparatorForPerson.h
)

target_link_libraries(untitled1 PRIVATE Qt6::Core Qt6::Widgets)