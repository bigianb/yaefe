#include <iostream>
#include "SDL.h"

#include "Window.h"

int main(int argc, char **argv)
{
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}
	Window window;

	window.init();

	bool done = false;
	while (!done) {
		unsigned int tick = SDL_GetTicks();
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				done = true;
			}
			else if (event.type == SDL_KEYDOWN) {
				if (event.key.keysym.sym == SDLK_ESCAPE) {
					done = true;
				}
			}
		}
		window.render();
	}

	window.exit();

	SDL_Quit();
	return 0;
}



