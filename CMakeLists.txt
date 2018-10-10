cmake_minimum_required(VERSION 2.8)

project(cse455-hw1)

set(CMAKE_C_FLAGS   "-fdiagnostics-color=always -std=c11   -pthread -O2 -g -march=native -fPIC")
set(CMAKE_CXX_FLAGS "-fdiagnostics-color=always -std=c++2a -pthread -O2 -g -march=native -fPIC")

add_library(uwimg SHARED
     src/args.c
     src/args.h
     src/image.h
     src/load_image.c
     src/resize_image.c
     src/filter_image.c
     src/process_image.c
     src/stb_image.h
     src/stb_image_write.h
     )


link_libraries(uwimg m)


add_executable(main src/main.c src/test.c src/test.h)
