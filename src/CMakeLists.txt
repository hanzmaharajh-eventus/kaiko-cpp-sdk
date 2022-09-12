cmake_minimum_required(VERSION 3.15)
project(kaikosdk)

# check for enabling inclusion in other cmake-based project
if(EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake")
  include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
endif()

FILE(GLOB_RECURSE Sources ${PROJECT_SOURCE_DIR}/sdk/*.cc)
LIST(FILTER Sources EXCLUDE REGEX "\.grpc\.pb\.")
FILE(GLOB_RECURSE Headers ${PROJECT_SOURCE_DIR}/sdk/*.h)
LIST(FILTER Headers EXCLUDE REGEX "\.grpc\.pb\.")
add_library(kaikosdk SHARED ${Sources} )
target_include_directories(kaikosdk PUBLIC ${PROJECT_SOURCE_DIR}) #include headers on export
set_target_properties(kaikosdk PROPERTIES OUTPUT_NAME "kaikopbsdk")

set_target_properties(kaikosdk PROPERTIES LINKER_LANGUAGE CXX)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}"
  PREFIX "Header Files"
  FILES ${HSources})


include(GNUInstallDirs)

install(
    TARGETS kaikosdk
    LIBRARY COMPONENT devel
    LIBRARY COMPONENT libkaikopbsdk
    )
foreach(_file ${Headers})
          file(RELATIVE_PATH _file_rel_path "${CMAKE_CURRENT_LIST_DIR}" "${_file}" )
          get_filename_component(_file_rel_path "${_file_rel_path}"  DIRECTORY)
install(
    FILES ${_file}
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/kaikosdk/${_file_rel_path}"
    COMPONENT devel
    )
endforeach()

include(cpack.cmake)

# This must always be last!
include( CPack )

