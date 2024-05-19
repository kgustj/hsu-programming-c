
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1
void func1() {
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 10, 30, 31};
    for (int i = 0; i < 12; i++) {
        printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
    }
    printf("\n");
}

// 2
void func2() {
    int x[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        x[i] = 1 + rand() % 100;
    }
    int max = x[0], min = x[0];
    for (int i = 0; i < 10; i++) {
        if (x[i] > max) max = x[i];
        if (x[i] < min) min = x[i];
    }
    printf("최댓값은 %d입니다.\n", max);
    printf("최솟값은 %d입니다.\n", min);
    printf("\n");
}

// 3
int array_equal(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}
void func3() {
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    if (array_equal(a, b, len) == 1) {
        printf("2개의 배열은 같음\n");
    } else {
        printf("2개의 배열은 다름\n");
    }
    printf("\n");
}

// 4
void array_copy(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}
void func4() {
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int len = sizeof(a) / sizeof(a[0]);
    array_copy(a, b, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("배열이 복사되었음\n");
    printf("\n");
}

// 5
void func5() {
    int freq[10] = {0};
    srand(time(NULL));
    // 난수를 100번 생성하여 빈도 기록
    for (int i = 0; i < 100; i++) {
        ++freq[rand() % 10];
    }
    // 최대 빈도 찾기
    int max = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > max) max = freq[i];
    }
    // 최대 빈도를 가진 숫자들 출력
    printf("가장 많이 나온 수: ");
    for (int i = 0; i < 10; i++) {
        if (freq[i] == max) printf("%d ", i);
    }
    printf("\n\n");
}

// 6
void func6() {
    int check[46] = {0};
    srand(time(NULL));
    printf("로또 번호는 다음과 같습니다.\n");
    for (int i = 0; i < 6; i++) {
        int number = 1 + rand() % 45;
        if (check[number] == 0) {
            printf("%d ", number);
            check[number] = 1;
        } else {
            i--;
        }
    }
    printf("\n\n");
}

// 7
void func7() {
    int row = 3, col = 5;
    int table[3][5] = {
        {12, 56, 32, 16, 98},
        {99, 56, 34, 41, 3},
        {65, 3, 87, 78, 21},
    };
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += table[i][j];
        }
        printf("%d행의 합계: %d\n", i, sum);
    }
    for (int i = 0; i < col; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += table[j][i];
        }
        printf("%d열의 합계: %d\n", i, sum);
    }
    printf("\n");
}

// 10
void func10() {
    int row = 5, col = 3;
    int table[5][3];
    srand(time(NULL));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            table[i][j] = rand() % 101; // 0부터 100 사이의 랜덤한 값으로 초기화
        }
    }
    for (int i = 0; i < row; i++) {
        int max = table[i][0], min = table[i][0];
        for (int j = 0; j < col; j++) {
            if (max < table[i][j]) max = table[i][j];
            if (min > table[i][j]) min = table[i][j];
        }
        printf("시험 #%d의 최고점수: %d\n", i, max);
        printf("시험 #%d의 최저점수: %d\n", i, min);
    }
    printf("\n");
}

// 12
void func12() {
    int inv[100] = {0};
    int loc[10] = {0};
    int x;
    srand(time(NULL));
    for (int i = 1; i <= 10; i++) {
        int index = rand() % 100;
        if (inv[index] == 0) {
            inv[index] = i;
            loc[i - 1] = index;
        }
    }
    printf("상품 번호를 입력하시오: ");
    scanf("%d", &x);
    printf("상품 %d번은 선반 %d에 있습니다.\n", x, loc[x - 1]);
    printf("\n");
}

int main(void) {
    // func1();
    // func2();
    // func3();
    // func4();
    // func5();
    // func6();
    // func7();
    // func10();
    func12();
    return 0;
}
