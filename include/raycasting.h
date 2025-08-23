#ifndef RAYCASTING_H
#define RAYCASTING_H

#include "map.h"

typedef struct{
    Map map;
    // player
    // ...
} Raycasting;

void InitRaycasting(Raycasting *raycasting);
void DrawRaycasting(const Raycasting *raycasting);
void UpdateRaycasting(Raycasting *raycasting);

#endif