cmake_minimum_required(VERSION 3.5)

project(H1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H1
    main.cpp
    ali.cpp
    ali.h
)

include(GNUInstallDirs)
install(TARGETS H1
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
