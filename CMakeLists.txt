cmake_minimum_required (VERSION 2.6)
project (Tutorial)

# version number
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

#configure header file
configure_file {
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
}

include_directories("${PROJECT_BINARY_DIR}")

# make math func optional?
option (USE_MYMATH 
  "Use tutorial privded math implementation" ON)

add_library(MathFunctions mysqrt.cpp)

if (USE_MYMATH)
  include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
  add_subdirectory (MathFunctions)
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

add_executable(Tutorial tutorial.cpp)
target_link_libraries (Tutorial ${EXTRA_LIBS})

install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

