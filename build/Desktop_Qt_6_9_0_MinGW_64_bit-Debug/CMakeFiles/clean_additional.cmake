# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\parking-management-system-kaustuv_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\parking-management-system-kaustuv_autogen.dir\\ParseCache.txt"
  "parking-management-system-kaustuv_autogen"
  )
endif()
