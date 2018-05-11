cmake_minimum_required(VERSION 2.8.4)
project(boostCmake)

set(CMAKE_CXX_STANDARD 11)
set(Boost_DEBUG 1)

find_package(Boost 1.54 REQUIRED COMPONENTS system filesystem regex  thread)
if(Boost_FOUND)
    MESSAGE("Boost_FOUND")
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARIES})
    MESSAGE(WARNING "Boost_INCLUDE_DIRS is ${Boost_INCLUDE_DIRS}")
    #add_executable(boostCmake  iniFileTest.cpp iniSectionTest.cpp)
    add_executable(boostCmake  iniSectionTest.cpp)
    MESSAGE(WARNING "Boost_LIBRARIES is ${Boost_LIBRARY_DIRS}")
    MESSAGE(WARNING "Boost_LIBRARIES is ${Boost_LIBRARIES}")
    target_link_libraries(boostCmake ${Boost_LIBRARIES} )

endif()





