#include "Window.h"

void Window::init()
{
	window = SDL_CreateWindow("Yaefe", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED, 
		800, 800,
		SDL_WINDOW_OPENGL | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_RESIZABLE);
}

void Window::render()
{

}

void Window::exit()
{
	if (window) {
		SDL_DestroyWindow(window);
		window = nullptr;
	}
}


