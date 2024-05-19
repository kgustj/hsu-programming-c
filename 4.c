#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void) {
    // 1
    int data1, data2; // 변수 지정
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &data1, &data2); // int형으로 입력
    printf("몫: %d\n", data1 / data2); // 출력
    printf("나머지 %d\n", data1 % data2); // 출력
    printf("\n");

    // 2
    double data3, data4; // 변수 지정
    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &data3, &data4); // double형으로 입력
    printf("%.2lf %.2lf %.2lf %.2lf\n", data3 + data4, //
           data3 - data4, data3 * data4, data3 / data4); // 출력
    printf("\n");

    // 3
    int data5, data6, data7, max; // 변수 지정
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &data5, &data6, &data7); // int형으로 입력
    max = data5 >= data6 ? data5 : data6; // 연산
    max = max >= data7 ? max : data7; // 연산
    printf("최댓값은 %d입니다.\n", max); // 출력
    printf("\n");

    // 4
    double cm, inch, feet; // 변수 지정
    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm); // double형으로 입력
    inch = cm / 2.54; // 연산
    feet = inch / 12; // 연산
    printf("%.2lfcm는 %.2lf피트 %.2lf인치입니다.\n", cm, feet, inch); // 출력
    printf("\n");

    // 5
    int data8; // 변수 지정
    printf("정수를 입력하시오: ");
    scanf("%d", &data8); // int형으로 입력
    printf("십의 자리: %d\n", data8 / 10); // 출력
    printf("일의 자리: %d\n", data8 % 10); // 출력
    printf("\n");

    // 6
    printf("(1.0-0.9) == 0.1 은 %d 입니다.\n", (1.0 - 0.9) == 0.1);
    printf("(1.0-0.9) == 0.1 은 %d 입니다.\n", fabs(1.0 - 0.9) - 0.1 < 1e-9);
    printf("\n");

    // 7
    int data9, freq; // 변수 지정
    printf("정수를 입력하시오: ");
    scanf("%d", &data9); // int형으로 입력
    printf("2를 곱하고싶은 횟수: ");
    scanf("%d", &freq); // int형으로 입력
    printf("%d<<%d의 값: %d\n", data9, freq, data9 << freq); // 출력
    printf("\n");

    // 8
    const double pi = 3.1415; // 상수 선언
    double radius, surface, volume; // 변수 지정
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius); // double형으로 입력
    surface = 4.0 * pi * radius * radius; // 연산
    volume = 4.0 / 3.0 * pi * radius * radius * radius; // 연산
    printf("표면적은 %.2lf입니다.\n", surface); // 출력
    printf("체적은 %.2lf입니다.\n", volume); // 출력

    return 0;
}