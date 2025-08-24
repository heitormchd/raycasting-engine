#ifndef MAP_H
#define MAP_H

#define MAP_WIDTH  8
#define MAP_HEIGHT 8

typedef struct{
    int grid[MAP_HEIGHT][MAP_WIDTH];
    int pxWidth;
    int pxHeight;
} Map;

void InitMap(Map *map);
void DrawMap(const Map *map);

#endif