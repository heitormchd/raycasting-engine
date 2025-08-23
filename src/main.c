#include "raylib.h"
#include "config.h"

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Test");
    SetTargetFPS(MAXIMUM_FPS);

    while (!WindowShouldClose()){
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}