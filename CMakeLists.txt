cmake_minimum_required(VERSION 3.15)
project(ITC313-TP3)

set(CMAKE_CXX_STANDARD 14)

set(SRCS
        main.cpp
        Encrypt.cpp
        Caesar.cpp
    )

set(HEADERS
        Encrypt.h
        Caesar.h
    )

add_executable(tp3 ${SRCS} ${HEADERS})