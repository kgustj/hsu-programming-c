#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 1
void get_frac(double f, int *pi, double *pd) {
    *pi = (int)f;
    *pd = f - *pi;
}
void func1() {
    int integer;
    double decimal, input;
    printf("실수를 입력하시오: ");
    scanf("%lf", &input);
    get_frac(input, &integer, &decimal);
    printf("정수부는 %d입니다.\n", integer);
    printf("소수부는 %.2lf입니다.\n", decimal);
    printf("\n");
};

// 2
void func2() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        printf("정수를 입력하시오: ");
        scanf("%d", &arr[i]);
    }
    printf("====================\n");
    printf("주소\t\t값\n");
    printf("====================\n");
    for (int i = 0; i < 3; i++) {
        printf("%08X\t%03d\n", (unsigned int)(uintptr_t)&arr[i], arr[i]);
    }
    printf("\n");
};

// 3
void array_fill(int a[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100000;
    }
}
void func3() {
    int a[5];
    array_fill(a, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("\n");
}

int my_strlen(char *p) {
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}
void func4() {
    char str[100];
    // 입력 버퍼가 없을 떄까지 getchar() 실행
    while (getchar() != '\n') {
    }
    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = my_strlen(str);
    printf("문자열의 길이: %d\n", len);
    printf("\n");
}

void array_print(int *a, int size) {
    printf("a[] = { ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", a[i]);
    }
    printf("}\n");
}
void func6() {
    int a[] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};
    int size = sizeof(a) / sizeof(a[0]);
    array_print(a, size);
    printf("\n");
}

void func7() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    printf("a[] = ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int *p = a + len - 1;
    printf("a[] = ");
    for (int i = 0; i < len; i++) {
        printf("%d ", *p);
        p--;
    }
    printf("\n");
    printf("\n");
}

double *get_max(double *a, int size) {
    double *max = a;
    for (int i = 1; i < size; i++) {
        if (*max < a[i]) max = &a[i];
    }
    return max;
}
void func8() {
    double a[] = {1.23, 3.14, 9.16, 100.90};
    int size = sizeof(a) / sizeof(a[0]);
    printf("a[] = ");
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", a[i]);
    }
    printf("\n");
    double *max = get_max(a, size);
    printf("최댓값은 %.2lf 입니다.\n", *max);
    printf("\n");
}

void convert(double *grades, double *scores, int size) {
    for (int i = 0; i < size; i++) {
        scores[i] = grades[i] * (100.0 / 4.3);
    }
}
void func9() {
    double grades[] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    int size = sizeof(grades) / sizeof(grades[0]);
    double scores[size];
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", grades[i]);
    }
    printf("\n");
    convert(grades, scores, size);
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", scores[i]);
    }
    printf("\n\n");
}

void array_copy(int *a, int *b, int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }
}
void func10() {
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int size = sizeof(a) / sizeof(a[0]);
    int b[size];
    printf("a[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    array_copy(a, b, size);
    printf("b[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("\n");
}

void array_add(int *a, int *b, int *c, int size) {
    for (int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
}
void func11() {
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {4, 5, 6, 0, 0, 0, 0, 0, 0, 0};
    int size = sizeof(a) / sizeof(a[0]);
    int c[size];
    array_add(a, b, c, size);
    printf("a[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\nb[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\nc[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    printf("\n");
}

int array_sum(int *a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}
void func12() {
    int a[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int size = sizeof(a) / sizeof(a[0]);
    printf("a[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    int sum = array_sum(a, size);
    printf("월급의 합: %d\n\n", sum);
}

int main(void) {
    func1();
    func2();
    func3();
    func4();
    func6();
    func7();
    func8();
    func9();
    func10();
    func11();
    func12();
    return 0;
}