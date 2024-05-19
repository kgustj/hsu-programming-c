#include <stdio.h>

int count = 3;
int printOpenBox() {
    printf("종이 상자를 엽니다. %d\n", count);
    count -= 1;

    if (count == 0) {
        printf("+++ 반지를 넣고 반환합니다. ^---^ +++\n");
        return 0;
    }

    printOpenBox();
    printf("종이 상자를 닫습니다.\n");
    return 0;
}

int main(void) {
    printOpenBox();
    return 0;
}

// int funcRange(int start, int end) {
//     int sum = 0;
//     for (int i = start; i <= end; i++) {
//         sum += i;
//         printf("%d", sum);
//     }
//     printf("\n");
//     return sum;
// }

// int main() {
//     int x = 2, y = 5, result;
//     result = funcRange(x, y);
//     printf("%d ~ %d : %d\n", x, y, result);
//     return 0;
// }