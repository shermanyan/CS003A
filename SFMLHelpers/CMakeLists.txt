cmake_minimum_required(VERSION 3.23)
project(SFMLHelpers)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(SFMLHelpers main.cpp
        statesEnum.h
        States.cpp
        States.h
        Circle.cpp
        Circle.h
        Fonts.cpp
        Fonts.h
        FontsEnum.h
        TexturesEnum.h
        Textures.h
        Textures.cpp Position.cpp Position.h )

add_executable(clock
        clock.cpp)
add_executable(fallingobj fallingobj.cpp)

add_executable(scroll scrollobject.cpp)

target_link_libraries(SFMLHelpers sfml-graphics)
target_link_libraries(clock sfml-graphics)
target_link_libraries(fallingobj sfml-graphics)
target_link_libraries(scroll sfml-graphics)
