#include <SDL.h>

int main() {

    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, 640/2, 480/2);

    SDL_RenderPresent(renderer);

    bool isQuit = false;
    SDL_Event event;
    while (!isQuit) {
        if (SDL_PollEvent( & event)) {
            if (event.type == SDL_QUIT) {
                isQuit = true;
            }
        }
    }

    return 0;
}
