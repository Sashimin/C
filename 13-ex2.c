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

#define MAZE_HEIGHT 25
#define MAZE_WIDTH 37

#define CHAR_WALL '#'
#define CHAR_ROAD ' '
#define CHAR_START 'S'
#define CHAR_GOAL 'G'
#define CHAR_VISITED '*'

#define EMPTY 0
#define VISITED 1
#define ABOLISHED 2

#define ANSI_RESET "\x1b[0m"
#define ANSI_RED "\x1b[31m"
#define ANSI_YELLOW "\x1b[33m"
#define ANSI_CLEAR "\033[2J"

struct point {
    int x;
    int y;
};

void showmaze(char maze[MAZE_HEIGHT][MAZE_WIDTH], int memo[MAZE_HEIGHT][MAZE_WIDTH]) {
    int i, j;

    printf(ANSI_CLEAR);

    for (i = 0; i < MAZE_HEIGHT; i++) {
        for (j = 0; j < MAZE_WIDTH; j++) {
            if (memo[i][j] == VISITED) {
                printf(ANSI_RED);
                putchar(CHAR_VISITED);
                printf(ANSI_RESET);
            } else if (maze[i][j] == CHAR_START || maze[i][j] == CHAR_GOAL) {
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

int canDig(struct point p, char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
    int i, roadCount = 0;
    int direction[4][2] = {
        {-2, 0},
        {0, 1},
        {2, 0},
        {0, -2}
    }

    for (i = 0; i < 4; i++) {
        int nx = p.x + direction[i][0];
        int ny = p.y + direction[i][1];
        if (nx < 0 || ny < 0 || nx >= MAZE_WIDTH || ny >= MAZE_HEIGHT) {
            continue;
        }

        if (!isWall(nx, ny)) {
            return 1;
        }
    }

    return 0;
}

int main(void) {
    char maze[MAZE_HEIGHT][MAZE_WIDTH];
    int memo[MAZE_HEIGHT][MAZE_WIDTH] = {EMPTY};
    struct point p = {1, 1};
    int i, j, r;

    for (i = 0; i < MAZE_HEIGHT; i++) {
        for (j = 0; j < MAZE_WIDTH; j++) {
            maze[i][j] = CHAR_WALL;
        }
    }

    // 穴掘り法
    srand((unsigned)time(NULL));

    int direction[4][2] = {
        {-2, 0},
        {0, 2},
        {2, 0},
        {0, -2}
    };

    int _direction[4][2] = {
        {-1, 0},
        {0, 1},
        {1, 0},
        {0, -1}
    }

    struct point last;

    do {
        r = rand() % 4;
        struct point new = {p.x + direction[r][0], p.y + direction[r][1]};
        if (canDig(p, maze)) {
            last = p;
             
        }
    } while(1);
    
    showmaze(maze, memo); 


    return 0;
}
