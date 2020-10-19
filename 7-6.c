#include <stdio.h>
#include <time.h>

void showtime(void) {
    time_t timer;
    struct tm *date;
    timer = time(0);
    date = localtime(&timer);
    puts(asctime(date));
}

signed main(void) {
    showtime();
}
