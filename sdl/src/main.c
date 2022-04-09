#include <stdio.h>
// Подключение типа данных bool
#include <stdbool.h>
// Подключение SDL
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

int main(int argc, char ** argv) {

    bool quit = false;
    SDL_Event event;

    // Инициализация 
    SDL_Init(SDL_INIT_VIDEO);

    // Создание окна
    SDL_Window * screen = SDL_CreateWindow("SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

    // Игровой цикл
    while(!quit) {
        
        SDL_WaitEvent(&event);

        switch(event.type) {
            case SDL_QUIT: quit = true; break;
        }

    }

    // Разрушение данных
    SDL_DestroyWindow(screen);

    SDL_Quit();

    return 0;
}