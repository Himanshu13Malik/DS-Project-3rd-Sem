include(FetchContent)

# Tell CMake where to download Raylib from, and exactly which version to use
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 6.2.0       
    GIT_PROGRESS ON
)
FetchContent_MakeAvailable(raylib)

add_executable(SnakeGame 
    src/main.cpp 
    src/food.cpp 
    src/movement.cpp
)

# Link Raylib to your game
target_link_libraries(SnakeGame PRIVATE raylib)
