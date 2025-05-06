# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\parking_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\parking_autogen.dir\\ParseCache.txt"
  "parking_autogen"
  )
endif()
