#ifndef _SNAKE_H__
#define _SNAKE_H__

#include <time.h>
#include <stdio.h>
#include <SDL2/SDL.h>

#define WINDOW_WIDTH
#define WINDOW_HEIGHT 300
#define TILE_SIZE 20
#define GRID_WIDTH (WINDOW_WIDTH / TILE_SIZE)
#define GRID_HEIGHT (WINDOW_HEIGHT / TILE_SIZE)

typedef enum { UP, DOWN, LEFT, RIGHT } Direction;

typedef struct {
	int x, y;
} Position; 

typedef struct {
	Position body[GRID_WIDTH * GRID_HEIGHT];
	int length;
	Direction direction; 
} Snake; 

typedef struct {
	Position position;
} Food; 

extern Snake snake;
extern Food food; 

int initGame(SDL_Renderer* renderer);
void initSnake();
void placeFood();
void updateSnake();
int checkCollisions();
void renderGame(SDL_Renderer* renderer);
void cleanupGame();
void changeDirection(Direction newDirection);


