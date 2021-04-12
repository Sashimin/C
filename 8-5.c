#include <stdio.h>

void drawrect(int h, int w, char c) {
    int i;
    for (; h > 0; h--) {
        for (i = 0; i < w; i++) {
            putchar(c);
        }
        putchar('\n');
    }
}

int main(void) {
    drawrect(4, 3, '@');
    drawrect(2, 4, '#');

    return 0;
}
