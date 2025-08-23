#include "raycasting.h"

void InitRaycasting(Raycasting *raycasting){
    InitMap(&raycasting->map);
    // initialize player
    // ...
}

void DrawRaycasting(const Raycasting *raycasting){
    DrawMap(&raycasting->map);
    // draw player
    // ...
}

void UpdateRaycasting(Raycasting *raycasting){
    // update raycasting state
}