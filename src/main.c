#include "raylib.h"
#include "config.h"
#include "raycasting.h"

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raycasting Engine");
    SetTargetFPS(MAXIMUM_FPS);

    Raycasting test;
    InitRaycasting(&test);

    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(WHITE);
            DrawRaycasting(&test);
        EndDrawing();
        
        // update raycasting

    }

    CloseWindow();
    return 0;
}