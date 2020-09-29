#pragma once
#include "SDL.h"

class Window
{
public:
    Window(){
        window = nullptr;
    }
    
	void init();
	void render();
	void exit();

private:
	SDL_Window* window;
};

