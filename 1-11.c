#include <stdio.h>

int main(void){
    double da, db;
    printf("実数daを入力してください: ");
    scanf("%lf", &da);
    printf("実数dbを入力してください: ");
    scanf("%lf", &db);
    printf("da + db: %.2f\n", da + db);
    printf("da - db: %.2f\n", da - db);
    printf("da * db: %.2f\n", da * db);
    printf("da / db: %.2f\n", da / db);

    return 0;
} 
