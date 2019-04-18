cmake_minimum_required(VERSION 3.13)

project(libtestparser VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE proj_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_library(TestParser STATIC ${proj_sources})

#target_include_directories(TestParser
#        PUBLIC
#            $<INSTALL_INTERFACE:include>
#            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#        PRIVATE
#            ${CMAKE_CURRENT_SOURCE_DIR}/src)

#target_include_directories(test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#
#install(TARGETS test DESTINATION lib)
#install(FILES test.h DESTINATION include)