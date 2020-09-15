
add_executable (yaefe main.cpp Window.cpp Window.h)
target_link_libraries(yaefe SDL2::SDL2 SDL2::SDL2main opengl32.lib)

