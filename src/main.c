#include "raylib.h"
#include "config.h"
#include "raycasting.h"

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raycasting Engine");
    SetTargetFPS(MAXIMUM_FPS);

    // init raycasting

    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(WHITE);
            // draw raycasting
        EndDrawing();
        
        // update raycasting

    }

    CloseWindow();
    return 0;
}