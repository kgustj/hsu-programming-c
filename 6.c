#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <unistd.h>

int main(void) {
    // 1
    int count;
    printf("카운터의 초기값을 입력하시오(단위: 초): ");
    scanf("%d", &count);
    for (; count > 0; count--) {
        printf("%d ", count);
        sleep(1);
    }
    printf("\n\a");
    printf("\n");

    // 2
    int sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        if ((i % 3) == 0) {
            sum2 += i;
        }
    }
    printf("1부터 100까지 모든 3의 배수의 합은 %d입니다.\n", sum2);
    printf("\n");

    // 3
    int sum3 = 0, input3 = 0;
    for (int i = 0; i < 3; i++) {
        printf("숫자를 입력하시오: ");
        scanf("%d", &input3);
        if (input3 >= 0) {
            sum3 += input3;
        } else {
            i--;
        }
    }
    printf("합계는 %d입니다.\n", sum3);
    printf("\n");

    // 4
    int input4;
    printf("정수를 입력하시오: ");
    scanf("%d", &input4);
    printf("약수: ");
    for (int i = 1; i <= input4; i++) {
        if (input4 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("\n");

    // 5
    double input5, output, power;
    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &input5);
    printf("거듭제곱 횟수를 입력하시오: ");
    scanf("%lf", &power);
    output = 1;
    for (int i = 0; i < power; i++) {
        output *= input5;
    }
    printf("결과값은 %.2lf\n", output);
    printf("\n");

    // 6
    int input6, result = 0;
    printf("n의 값을 입력하시오: ");
    scanf("%d", &input6);
    for (int i = 1; i <= input6; i++) {
        result += i * i;
        printf("%d ", result);
    }
    printf("결과값은 %d입니다.\n", result);

    // 7
    int input7;
    printf("정수를 입력하시오: ");
    scanf("%d", &input7);
    for (int y = 1; y <= input7; y++) {
        for (int x = 0; x < (input7 - y); x++) {
            printf(" ");
        }
        for (int x = 0; x < y; x++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 8
    int input8;
    printf("w정수를 입력하시오: ");
    scanf("%d", &input8);
    for (int y = 1; y <= input8; y++) {
        for (int x = 1; x <= y; x++) {
            printf("%d ", x);
        }
        printf("\n");
    }

    int input91, input92;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", input91, input92);

    // 10
    int result10;
    for (int i = 2; i <= 100; i++) {
        int flag = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) flag = 0;
        }
        if (flag == 1) printf("%d ", i);
    }
    printf("\n");
    printf("\n");

    // 11
    int input11, level = 100;
    while (1) {
        printf("현재 연료량: %d\n", level);
        if (level <= 0) {
            printf("연료가 소진되었습니다.\n");
            break;
        } else if (level < 20) {
            printf("(경고) 연료가 20리터 미만입니다\n");
        }
        printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
        scanf("%d", &input11);
        level += input11;
    }
    printf("\n");

    // 12
    int input12;
    while (1) {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &input12);
        if (input12 < 0) {
            break;
        }
        for (int i = 0; i < input12; i++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 13
    int sum13 = 0, i = 0;
    while (1) {
        if (sum13 + i < 10000) {
            i++;
            sum13 += i;
        } else {
            printf("1부터 %d까지의 합이 %d입니다.", i, sum13);
            break;
        }
    }
    printf("\n");

    // 14
    int input14, a = 0, b = 1, c = 0;
    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &input14);
    for (int i = 0; i <= input14; i++) {
        if (i % 3 == 0) {
            a = (i == 0) ? 0 : b + c;
            printf("%d, ", a);
        } else if (i % 3 == 1) {
            b = (i == 1) ? 1 : c + a;
            printf("%d, ", b);
        } else if (i % 3 == 2) {
            c = a + b;
            printf("%d, ", c);
        }
    }
    printf("\n");

    // 15
    int n, r, result15 = 1;
    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);
    for (int i = n; (n - r + 1) <= i; i--) {
        result15 *= i;
    }
    printf("순열의 값은 %d입니다.", result15);

    // 16
    int input16;
    printf("정수를 입력하시오: ");
    scanf("%d", &input16);
    do {
        printf("%d", input16 % 10);
        input16 /= 10;
    } while (input16 != 0);
    printf("\n");
    printf("\n");

    // 17
    char op;
    int n171, n172;
    printf("*****************\n");
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");
    printf("*****************\n");

    while (1) {
        printf("연산을 선택하시오: ");
        scanf(" %c", &op);
        if (op == 'A' || op == 'a') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n171, &n172);
            printf("%d\n\n", n171 + n172);
        } else if (op == 'S' || op == 's') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n171, &n172);
            printf("%d\n\n", n171 - n172);
        } else if (op == 'M' || op == 'm') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n171, &n172);
            printf("%d\n\n", n171 * n172);
        } else if (op == 'D' || op == 'd') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n171, &n172);
            printf("%d\n\n", n171 / n172);
        } else if (op == 'Q' || op == 'q') {
            break;
        }
    }
    printf("\n");

    return 0;
}