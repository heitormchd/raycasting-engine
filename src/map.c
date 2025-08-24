#include "map.h"
#include "config.h"
#include "raylib.h"

void InitMap(Map *map){
    int worldMap[MAP_HEIGHT][MAP_WIDTH] = {{1, 1, 1, 1, 1, 1, 1, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 0, 0, 0, 0, 0, 0, 1},
                                           {1, 1, 1, 1, 1, 1, 1, 1}};

    for (int y = 0; y < MAP_HEIGHT; y++){
        for (int x = 0; x < MAP_WIDTH; x++){
            map->grid[y][x] = worldMap[y][x];
        } 
    }

    map->pxWidth = MAP_WIDTH * GRID_SIZE;
    map->pxHeight = MAP_HEIGHT * GRID_SIZE;
}

void DrawMap(const Map *map){
    int offSetX = (GetScreenWidth() - map->pxWidth) / 2;
    int offSetY = (GetScreenHeight() - map->pxHeight) / 2;

    for (int y = 0; y < MAP_HEIGHT; y++){
        for (int x = 0; x < MAP_WIDTH; x++){
            if (map->grid[y][x] == 1){
                DrawRectangle(offSetX + GRID_SIZE * x, offSetY + GRID_SIZE * y, GRID_SIZE, GRID_SIZE, WALL_COLOR);
            } else{
                DrawRectangle(offSetX + GRID_SIZE * x, offSetY + GRID_SIZE * y, GRID_SIZE, GRID_SIZE, FLOOR_COLOR);
            }
        }
    }
}