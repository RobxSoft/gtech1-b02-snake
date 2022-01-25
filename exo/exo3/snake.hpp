#include <SDL2/SDL.h>

class Snake {
    public:
        int Init(const char *WindowName, int Width, int Height);
        void CheckKeys();
        void Draw();
        void Grid();
        int GetRenderer();

        ~Snake();

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;

        int doOnce;

        int score;
        int X;
        int Y;
        int directionX;
        int directionY;
        int closeRequest;
        int speed;
};