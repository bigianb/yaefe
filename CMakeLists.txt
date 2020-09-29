cmake_minimum_required(VERSION 3.5)

project(Yaefe)

set(PROJECT_NAME "Yaefe")
set(PROJECT_Version 0.10)

execute_process(COMMAND git describe RESULT_VARIABLE GIT_DESCRIBE_RESULT OUTPUT_VARIABLE GIT_TAG OUTPUT_STRIP_TRAILING_WHITESPACE)
if(GIT_DESCRIBE_RESULT EQUAL 0)
	message("Building for ${GIT_TAG}.")
	set(PROJECT_Version ${GIT_TAG})
else()
	message("Warning: Failed to obtain Git tag.")
endif()

add_definitions(-DYAEFE_VERSION="${PROJECT_Version}")
set(PROJECT_LIBS)

find_package(SDL2 CONFIG REQUIRED)
find_package(OpenGL REQUIRED)

#include(PrecompiledHeader)
add_subdirectory(source)
