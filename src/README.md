# Build RPM

    cd src
    mkdir build
    cd build
    cmake .. -DCPACK_PACKAGE_RELEASE=<release number>
    cpack -G RPM
