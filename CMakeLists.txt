cmake_minimum_required(VERSION 3.24)
project(OperatingSystemTEP C)

set(CMAKE_C_STANDARD 17)

add_executable(OperatingSystemTEP main.c core/h/SystemInstance.h ParseArgs.c ParseArgs.h core/h/ParseArgsError.h core/SystemInstance.c core/SystemInstance.c core/h/LinkedList.h)
