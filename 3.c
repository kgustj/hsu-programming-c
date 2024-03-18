#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // 함수 시작
{
    // 1
    float data1; // 변수 지정
    printf("실수를 입력하시오: ");
    scanf("%f", &data1); // float형으로 입력
    printf("실수형식으로는 %f입니다.\n", data1);
    printf("지수형식으로는 %e입니다.\n", data1);
    printf("\n");

    // 2
    int data2; // 변수 지정
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &data2); // 16진수로 입력
    printf("8진수로는 %#o입니다.\n", data2);
    printf("10진수로는 %d입니다.\n", data2);
    printf("16진수로는 %#x입니다.\n", data2);
    printf("\n");

    // 3
    int x = 10, y = 20, tmp; // 변수 지정
    printf("x=%d, y=%d\n", x, y);
    tmp = x; // x -> tmp
    x = y; // y -> x
    y = tmp; // tmp -> y
    printf("x=%d, y=%d\n", x, y);
    printf("\n");

    // 4
    double length, width, height, volume; // 변수 지정
    printf("상자의 가로 세로 높이를 한번에 입력:");
    scanf("%lf %lf %lf", &length, &width, &height); // double형으로 입력
    volume = length * width * height; // 연산
    printf("상자의 부피는 %lf입니다.\n", volume);
    printf("\n");

    // 5
    const double SQMETER_PER_PYEONG = 3.3058; // 상수 정의
    double pyeong, sqm; // 변수 지정
    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong); // double형으로 입력
    sqm = SQMETER_PER_PYEONG * pyeong; // 연산
    printf("%lf평방미터입니다.", sqm);
    printf("\n");

    // 8
    int ascii; // 변수 지정
    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ascii); // int형으로 입력
    printf("문자: %c입니다.\n", ascii);

    return 0;
}