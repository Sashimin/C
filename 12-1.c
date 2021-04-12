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

struct student {
    char dept[64];
    int grade;
    int number;
    char name[64];
};

int main(void) {
    struct student s1 = {"HI", 2, 12, "Taro"};
    struct student s2 = {"TE", 4, 25, "Jiro"};

    printf("%s-%d No.%d %s\n", s1.dept, s1.grade, s1.number, s1.name);
    printf("%s-%d No.%d %s\n", s2.dept, s2.grade, s2.number, s2.name);

    return 0;
}

