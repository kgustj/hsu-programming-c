#include <stdio.h>

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
};

int main(void) {
    func1();

    return 0;
}