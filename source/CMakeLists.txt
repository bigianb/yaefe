
add_executable (yaefe main.cpp Window.cpp Window.h)
set_property(TARGET yaefe PROPERTY VS_DPI_AWARE "PerMonitor")
target_link_libraries(yaefe SDL2::SDL2 SDL2::SDL2main opengl32.lib)

