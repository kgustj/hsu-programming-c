#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 1
    float salary, time; // 변수 지정
    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%f", &salary); // float형으로 입력
    time = 1000000000 / (salary * 10000); // 연산
    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2f\n", time);
    printf("\n");

    // 2
    float mile, meter; // 변수 지정
    printf("마일을 입력하시오: ");
    scanf("%f", &mile); // float형으로 입력
    meter = mile * 1609; // 연산
    printf("%.1f 마일은 %.2f미터입니다.\n", mile, meter);
    printf("\n");

    // 3
    float base, height, area; // 변수 지정
    printf("삼각형의 밑변: ");
    scanf("%f", &base); // float형으로 입력
    printf("삼각형의 높이: ");
    scanf("%f", &height); // float형으로 입력
    area = 0.5 * base * height; // 연산
    printf("삼각형의 넓이: %.2f\n", area);
    printf("\n");

    // 4
    float f, c; // 변수 지정
    printf("화씨값을 입력하시오: ");
    scanf("%f", &f); // float형으로 입력
    c = (5.0 / 9.0) * (f - 32.0); // 연산
    printf("섭씨값은 %.2f도 입니다.\n", c);
    printf("\n");

    // 5
    float x, result; // 변수 지정
    printf("실수를 입력하시오: ");
    scanf("%f", &x); // float형으로 입력
    result = 3 * x * x + 7 * x + 11; // 연산
    printf("다항식의 값은: %.2f\n", result);
    printf("\n");

    // 6
    double earth, moon; // 변수 지정
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &earth); // double형으로 입력
    moon = earth * 0.17; // 연산
    printf("달에서의 몸무게는 %.2lfkg입니다.\n", moon);

    return 0;
}