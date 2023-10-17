cmake_minimum_required(VERSION 3.26)
project(box_physics_poc)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    box_physics_poc 
        src/main.cpp
        src/game.cpp
        src/game.h
)

# Box2D
target_link_libraries(box_physics_poc box2d)