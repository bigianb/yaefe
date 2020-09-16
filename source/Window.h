#pragma once
#include "SDL.h"

class Window
{
public:
	void init();
	void render();
	void exit();

private:
	SDL_Window* window = nullptr;
};

