cmake_minimum_required (VERSION 2.6)
project (Demo)

# add the binary tree to the search path for include files so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}")

# add the MathFunctions library
include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
add_subdirectory (MathFunctions)
set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)

# add the executable
add_executable (dmeo tutorial.cxx)
target_link_libraries (dmeo ${EXTRA_LIBS})

# add the install targets
install (TARGETS Tutorial DESTINATION bin)
# install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

