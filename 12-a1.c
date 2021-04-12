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

int main(void) {
    time_t csec = time(NULL);
    struct tm *timeinfo = localtime(&csec);

    int year = timeinfo->tm_year + 1900;
    int month = timeinfo->tm_mon + 1;
    int day = timeinfo->tm_mday;
    int hour = timeinfo->tm_hour;
    int min = timeinfo->tm_min;
    int sec = timeinfo->tm_sec;

    printf("現在%d年%d月%d日の%02d時%02d分%02d秒です。\n", year, month, day, hour, min, sec);

    return 0;
}

