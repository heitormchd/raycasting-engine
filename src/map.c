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
}

void DrawMap(const Map *map){
    int offSetX = GetScreenWidth() / 2 - MAP_WIDTH * GRID_SIZE / 2;
    int offSetY = GetScreenHeight() / 2 - MAP_HEIGHT * GRID_SIZE / 2;

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