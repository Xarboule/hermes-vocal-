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

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.66.0 COMPONENTS system REQUIRED)  
find_package (Threads)

if(Boost_FOUND)

	include_directories("${PROJECT_BINARY_DIR}"
		"${PROJECT_BINARY_DIR}/core"
		"${Boost_LIBRARIES}")

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
	target_link_libraries(server ${Boost_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
	add_executable(client ${CLIENT_SOURCE_FILES})
	target_link_libraries(client ${Boost_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})


endif()
