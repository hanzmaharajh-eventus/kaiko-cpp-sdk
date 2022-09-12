#
# Packaging
# https://cmake.org/cmake/help/latest/module/CPack.html
#
set( CPACK_PACKAGE_NAME ${PROJECT_NAME} )
set( CPACK_PACKAGE_VENDOR "Kaiko" )
set( CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/kaikodata/kaiko-cpp-sdk" )
set( CPACK_PACKAGE_VERSION_MAJOR "1" )
set( CPACK_PACKAGE_VERSION_MINOR "6" )
set( CPACK_PACKAGE_VERSION_PATCH "0" )
set( CPACK_PACKAGE_VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH} )
set( CPACK_PACKAGE_INSTALL_DIRECTORY ${PROJECT_NAME} )

set( CPACK_COMPONENT_kaikosdk_DISPLAY_NAME "kaiko-cpp-sdk" )
set( CPACK_COMPONENT_kaikosdk_REQUIRED 1 )

set( CPACK_INCLUDE_TOPLEVEL_DIRECTORY 1 )
set( CPACK_PACKAGE_RELEASE 1 )

    if ( "${CPACK_PACKAGE_ARCHITECTURE}" STREQUAL "" )
        # Note: the architecture should default to the local architecture, but it
        # in fact comes up empty.  We call `uname -m` to ask the kernel instead.
        EXECUTE_PROCESS( COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE CPACK_PACKAGE_ARCHITECTURE )
    endif()


# RPM - https://cmake.org/cmake/help/latest/cpack_gen/rpm.html
set( CPACK_RPM_PACKAGE_RELEASE ${CPACK_PACKAGE_RELEASE} )
set( CPACK_RPM_PACKAGE_ARCHITECTURE ${CPACK_PACKAGE_ARCHITECTURE} )
set( CPACK_RPM_PACKAGE_URL ${CPACK_PACKAGE_HOMEPAGE_URL} )
set( CPACK_RPM_COMPONENT_INSTALL 1 )
set( CPACK_RPM_COMPRESSION_TYPE "xz" )
set( CPACK_RPM_PACKAGE_AUTOPROV 1 )


set( CPACK_RPM_DEVEL_PACKAGE_REQUIRES "protobuf-devel >= 3.19" )
set( CPACK_RPM_DEVEL_PACKAGE_ARCHITECTURE ${CPACK_RPM_PACKAGE_ARCHITECTURE} )
set( CPACK_RPM_DEVEL_PACKAGE_NAME "kaikosdk-devel" )
set( CPACK_RPM_DEVEL_FILE_NAME "RPM-DEFAULT" )


set( CPACK_RPM_LIBKAIKOPBSDK_PACKAGE_REQUIRES "libprotobuf >= 3.19" )
set( CPACK_RPM_LIBKAIKOPBSDK_PACKAGE_ARCHITECTURE ${CPACK_RPM_PACKAGE_ARCHITECTURE} )
set( CPACK_RPM_LIBKAIKOPBSDK_PACKAGE_NAME "libkaikopbsdk" )
set( CPACK_RPM_LIBKAIKOPBSDK_FILE_NAME "RPM-DEFAULT" )
