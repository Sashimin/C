#include <stdio.h>

char getsignchar(int n) {
    if (n > 0) {
        return 'P';
    } else if (n < 0) {
        return 'N';
    } else {
        return 'Z';
    }
}

int main(void) {
    int i, arr[3] = {20, -20, 0};
    
    for (i = 0; i < 3; i++) {
        printf("%d = %c\n", arr[i], getsignchar(arr[i]));
    }

    return 0;
}
