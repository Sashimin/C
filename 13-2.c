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

#define MAZE_HEIGHT 20
#define MAZE_WIDTH 20

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

int isWall(int x, int y, char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
    return maze[y][x] == CHAR_WALL;
}

int setWall(int x, int y, char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
    if (isWall(x, y, maze)) {
        return 0;
    } else {
        maze[y][x] = CHAR_WALL;
        return 1;
    }
}

void setWallRandom(int x, int y, int range, char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
    int r, flag;

    do {
        r = rand() % range;
        switch (r) {
            case 0:
                flag = setWall(x - 1, y, maze);
                break;
            case 1:
                flag = setWall(x + 1, y, maze);
                break;
            case 2:
                flag = setWall(x, y + 1, maze);
                break;
            case 3: //  一番上の柱だけ
                flag = setWall(x, y - 1, maze);
                break;
        }
        // printf("(x, y) = (%d, %d) RAND=%d FLAG=%d\n", x, y, r, flag);
    } while (!flag);
}

int main(void) {
    char maze[MAZE_HEIGHT][MAZE_WIDTH];
    int i, j, r;

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

    srand((unsigned)time(NULL));

    for (i = 2; i < MAZE_HEIGHT - 2; i += 2) {
        for (j = 2; j < MAZE_WIDTH - 2; j += 2) {
            if (i == 2) {
                setWallRandom(j, i, 4, maze);
            } else {
                setWallRandom(j, i, 3, maze);
            }
        }
    }

    showmaze(maze);

    return 0;
}

