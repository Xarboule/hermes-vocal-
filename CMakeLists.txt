cmake_minimum_required (VERSION 2.6)
project (Hermes-vocal++)
# The version number.
 
# configure a header file to pass some of the CMake settings
# to the source code
#configure_file (
#	"${PROJECT_SOURCE_DIR}/serverConfig.h.in"
#	"${PROJECT_BINARY_DIR}/ServerConfig.h"
#  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}"
	"${PROJECT_BINARY_DIR}/core")

set(SERVER_SOURCE_FILES
	server.cpp
	core/Skill.hpp
	core/Skill.cpp
	core/core.hpp
	core/core.cpp)


set(CLIENT_SOURCE_FILES
	client.cpp)

# add the executable
add_executable(server ${SERVER_SOURCE_FILES})

add_executable(client ${CLIENT_SOURCE_FILES})


