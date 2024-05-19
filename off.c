#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // // 1
    // int x;
    // for (x = 0; x < 10; x++) {
    //     if (x > 5) continue;
    //     if (x > 8) break;
    //     printf("Hello World!\n");
    // }

    // // 2
    // int i = 0;
    // while (i < 10) {
    //     printf("%d\n", i);
    //     i += 3;
    // }

    // // 3
    // int x, y;
    // for (x = 0; x < 3; x++) {
    //     for (y = 2; y >= 0; y--) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int i = 0;
    // while (i < 10) {
    //     printf("%d의 값\n", i);
    //     i++;
    // }

    // char x;
    // int y;
    // printf("기호입력");
    // scanf("%c", &x);
    // printf("기호몇개");
    // scanf("%d", &y);
    // for (int z = 0; z < y; z++) {
    //     printf("%c", x);
    // }
    // print("\n");

    // int x, y = 0;
    // printf("정수입력");
    // scanf("%d", &x);
    // while (x != 0) {
    //     y += (x % 10);
    //     x /= 10;
    // }
    // printf("%d\n", y);

    // int x;
    // printf("양수입력");
    // scanf("%d", &x);
    // if (x % 5 == 0) {
    //     printf("5의 배수가 입력되었습니다.\n");
    // }

    // int i, result = 0;
    // for (i = 1; i <= 100; i++) {
    //     if ((i % 5) == 0 || (i % 8) == 0) {
    //         result += i;
    //     }
    // }
    // printf("5와 8의 배수의 합계는 %d\n", result);
    // printf("\n");

    int rand1, rand2, input;
    srand(time(NULL));
    rand1 = rand() % 100;
    rand2 = rand() % 100;
    printf("%d + %d = ", rand1, rand2);
    scanf("%d", &input);
    if (input == (rand1 + rand2)) {
        printf("맞았습니다.\n");
    } else {
        printf("틀렸습니다.\n");
    }
    return 0;
}