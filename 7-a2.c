#include <stdio.h>

int getloc(int v[], int len, int val) {
    while (len >= 0) {
        if (val == v[--len]) {
		    return len;
		}
	}

    return -1;
}

int main(void) {
    int i, f, x[5] = {1, 3, 5, 7, 9};
	printf("探す値は？ : ");
	scanf("%d", &f);
	i = getloc(x, 5, f);
	if (i == -1) {
		puts("見つかりませんでした.");
	} else {
	    printf("%dは%d番目の要素にあります.\n", f, i);
	}

	return 0;
}
