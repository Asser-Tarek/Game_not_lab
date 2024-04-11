# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Break_out_autogen"
  "CMakeFiles/Break_out_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Break_out_autogen.dir/ParseCache.txt"
  )
endif()
