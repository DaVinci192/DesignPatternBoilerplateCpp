cmake_minimum_required(VERSION 3.20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
project(designpatterns)
if(USE_CONAN)
	set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
endif()
file(GLOB SOURCES
    src/builder/example/suitcase.hpp
    src/builder/example/suitcase.cpp
    src/builder/example/suitcaseBuilder.hpp
    src/builder/example/suitcaseBuilder.cpp
    src/builder/example/suitcaseOriginBuilder.hpp
    src/builder/example/suitcaseDestinationBuilder.hpp
    src/builder/example/suitcaseSpecificationBuilder.hpp
    src/factory/example/dessert.hpp
    src/factory/example/dessertFactory.hpp
    src/factory/example/mealFactory.hpp

)
list(APPEND SOURCES "src/main.cpp")
add_executable(designpatterns ${SOURCES})