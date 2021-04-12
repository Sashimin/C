#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

#define MAZE_HEIGHT 11
#define MAZE_WIDTH 13

#define CHAR_WALL '#'
#define CHAR_ROAD ' '
#define CHAR_START 'S'
#define CHAR_GOAL 'G'

#define ANSI_RESET "\x1b[0m"
#define ANSI_YELLOW "\x1b[33m"

void showmaze(char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
    int i, j;
    for (i = 0; i < MAZE_HEIGHT; i++) {
        for (j = 0; j < MAZE_WIDTH; j++) {
            if (maze[i][j] == CHAR_START || maze[i][j] == CHAR_GOAL) {
                printf(ANSI_YELLOW);
                putchar(maze[i][j]);
                printf(ANSI_RESET);
            } else {
                putchar(maze[i][j]);
            }
        }
        printf("\n");
    }
}


int main(void) {
    char maze[MAZE_HEIGHT][MAZE_WIDTH];
    int i, j;

    for (i = 0; i < MAZE_HEIGHT; i++) {
        for (j = 0; j < MAZE_WIDTH; j++) {
            if (i == 0 || i == MAZE_HEIGHT - 1 || j == 0 || j == MAZE_WIDTH - 1) {
                maze[i][j] = CHAR_WALL;
            } else {
                if (~i & 1 && ~j & 1) {
                    maze[i][j] = CHAR_WALL;
                } else {
                    maze[i][j] = CHAR_ROAD;
                }
            }
        }
    }

    maze[1][1] = CHAR_START;
    maze[MAZE_HEIGHT - 2][MAZE_WIDTH - 2] = CHAR_GOAL;



    showmaze(maze);

    return 0;
}

