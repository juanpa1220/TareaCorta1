cmake_minimum_required(VERSION 3.10)
project(TareaCorta1)

set(CMAKE_CXX_STANDARD 11)

add_executable(TareaCorta1 main.cpp)


set(CMAKE_MODULE_PATH "/Users/juanpablomartinezbrenes/Downloads/SFML-2.4.2-osx-clang/cmake/Modules" ${CMAKE_MODULE_PATH})

include(FindPkgConfig)
find_package(SFML REQUIRED system window graphics network audio)
include_directories(${SFML_INCLUDE_DIR})
if(WIN32)
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} -lmingw32 -lm -ldinput8 -ldxguid -ldxerr8 -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lversion -luuid)
else()
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES}  )
endif()
