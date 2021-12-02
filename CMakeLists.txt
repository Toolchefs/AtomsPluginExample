# CMakeList.txt : CMake project for AtomsAvoidance, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.17)

project ("AtomsPluginExample")


if (MSVC)
cmake_policy(SET CMP0091 NEW)
endif()

enable_language(CXX)
set(CMAKE_CXX_STANDARD 14)

add_definitions(-DUSE_ATOMSPLUGINEXAMPLE)
add_definitions(-DBUILD_ATOMSPLUGINEXAMPLE)
add_definitions(-DTBB_USE_DEBUG=0)
add_definitions(-D__TBB_LIB_NAME=tbb)
add_definitions(-DNOMINMAX)
add_definitions(-DBOOST_ALL_NO_LIB)

if (UNIX)
add_definitions(-DLINUX)
add_definitions(-DPIC)
add_definitions(-D_FILE_OFFSET_BITS=64)
add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0)
add_compile_options(-std=c++14 -ffloat-store -fvisibility=hidden -fPIC)
endif()


if(DEFINED ATOMS_MAYA_FOLDER)
include_directories(${ATOMS_MAYA_FOLDER}/include)
link_directories(${ATOMS_MAYA_FOLDER}/lib/${MAYA_MAJOR_VERSION})
endif()

if(DEFINED ATOMS_HOUDINI_FOLDER)
include_directories(${ATOMS_HOUDINI_FOLDER}/include)
link_directories(${ATOMS_HOUDINI_FOLDER}/lib)
endif()

include_directories(include)


set(SOURCES
    "include/Globals.h"
   "src/PluginMain.cpp" 
   "include/AgentBehaviourExample.h" 
   "src/AgentBehaviourExample.cpp")

add_library(${PROJECT_NAME} SHARED ${SOURCES})

if (MSVC)
set_property(TARGET ${PROJECT_NAME} PROPERTY
             MSVC_RUNTIME_LIBRARY MultiThreadedDLL)
endif()

set_target_properties(${PROJECT_NAME}
        PROPERTIES
        INSTALL_RPATH_USE_LINK_PATH True)

target_link_libraries(${PROJECT_NAME}
        PUBLIC Atoms AtomsCore AtomsGraph AtomsUtils AtomsMath
        )

install(TARGETS ${PROJECT_NAME} DESTINATION plugins)
