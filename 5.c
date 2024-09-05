#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // 1
    int x11, x12;
    printf("정수를 입력하시오: ");
    scanf("%d", &x11);
    printf("정수를 입력하시오: ");
    scanf("%d", &x12);
    if (x11 % x12 == 0) {
        printf("약수입니다.\n");
    } else {
        printf("약수가 아닙니다.\n");
    }
    printf("\n");

    // 2
    int x23, x24, x25;
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &x23, &x24, &x25);
    if (x23 <= x24 && x23 <= x25) {
        printf("제일 작은 정수는 %d입니다.\n", x23);
    } else if (x24 <= x23 && x24 <= x25) {
        printf("제일 작은 정수는 %d입니다.\n", x24);
    } else {
        printf("제일 작은 정수는 %d입니다.\n", x25);
    }
    printf("\n");

    // 3
    int user, com;
    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d", &user);
    // rand() 함수 시드 재설정
    srand(time(NULL));
    com = rand() % 3 + 1;
    if (com == 1) {
        printf("컴퓨터는 가위를 선택하였습니다.\n");
        if (user == 1) {
            printf("비겼습니다.\n");
        } else if (user == 2) {
            printf("사용자가 이겼습니다.\n");
        } else if (user == 3) {
            printf("컴퓨터가 이겼습니다.\n");
        }
    } else if (com == 2) {
        printf("컴퓨터는 바위를 선택하였습니다.\n");
        if (user == 1) {
            printf("컴퓨터가 이겼습니다.\n");
        } else if (user == 2) {
            printf("비겼습니다.\n");
        } else if (user == 3) {
            printf("사용자가 이겼습니다.\n");
        }
    } else if (com == 3) {
        printf("컴퓨터는 보를 선택하였습니다.\n");
        if (user == 1) {
            printf("사용자가 이겼습니다.\n");
        } else if (user == 2) {
            printf("컴퓨터가 이겼습니다.\n");
        } else if (user == 3) {
            printf("비겼습니다.\n");
        }
    }
    printf("\n");

    // 4
    int height4, age4;
    printf("키를 입력하시오(cm): ");
    scanf("%d", &height4);
    printf("나이를 입력하시오: ");
    scanf("%d", &age4);
    if (height4 >= 140 && age4 >= 11) {
        printf("타도 좋습니다.\n");
    } else {
        printf("죄송합니다.\n");
    }
    printf("\n");

    // 5
    int month;
    printf("월 번호를 입력하시오: ");
    scanf("%d", &month);
    switch (month) {
    case 1:
        printf("Jan\n");
        break;
    case 2:
        printf("Feb\n");
        break;
    case 3:
        printf("Mar\n");
        break;
    case 4:
        printf("Apr\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("Jun\n");
        break;
    case 7:
        printf("Jul\n");
        break;
    case 8:
        printf("Aug\n");
        break;
    case 9:
        printf("Sep\n");
        break;
    case 10:
        printf("Oct\n");
        break;
    case 11:
        printf("Nov\n");
        break;
    case 12:
        printf("Dec\n");
        break;
    default:
        printf("잘못 입력했습니다.\n");
    }
    printf("\n");

    // 6
    char x6;
    printf("문자를 입력하시오: ");
    // 입력 버퍼가 없을 떄까지 getchar() 실행
    while (getchar() != '\n') {
    }
    x6 = getchar();
    switch (x6) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("모음입니다.\n");
        break;
    default:
        printf("자음입니다.\n");
        break;
    }
    printf("\n");

    // 7
    double height, weight, std, brc;
    printf("키와 체중을 입력하시오: ");
    scanf("%lf %lf", &height, &weight);
    std = (height - 100.0) * 0.9;
    // 비만도 = ((체중 - 표준체중) / 표준체중) * 100
    brc = ((weight - std) / std) * 100;
    if (brc >= 10.0) {
        printf("과체중입니다.\n");
    } else if (brc <= -10.0) {
        printf("저체중입니다.\n");
    } else {
        printf("정상체중입니다.\n");
    }
    printf("\n");

    // 8
    int hour, age, cost;
    printf("현재 시간과 나이를 입력하시오(시간 나이): ");
    scanf("%d %d", &hour, &age);
    if (hour < 17) {
        if ((3 <= age && age <= 12) || 65 <= age) {
            cost = 25000;
        } else {
            cost = 34000;
        }
    } else if (17 <= hour && hour < 24) {
        cost = 10000;
    }
    printf("요금은 %d원 입니다.\n", cost);
    printf("\n");

    // 9
    double x9, output;
    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x9);
    if (x9 <= 0) {
        output = x9 * x9 - 9 * x9 + 2;
    } else {
        output = 7 * x9 + 2;
    }
    printf("f(x)의 값은 %.2lf입니다.\n", output);
    printf("\n");

    // 10
    int x, y;
    printf("x, y좌표를 입력하시오: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("1사분면입니다.\n");
    } else if (x < 0 && y > 0) {
        printf("2사분면입니다.\n");
    } else if (x < 0 && y < 0) {
        printf("3사분면입니다.\n");
    } else if (x > 0 && y < 0) {
        printf("4사분면입니다.\n");
    } else {
        printf("축 또는 원점입니다.\n");
    }
    printf("\n");

    // 11
    char x111;
    printf("문자를 입력하시오: ");
    // 입력 버퍼가 없을 떄까지 getchar() 실행
    while (getchar() != '\n') {
    }
    x111 = getchar();
    switch (x111) {
    case 'R':
    case 'r':
        printf("Rectangle\n");
        break;
    case 'T':
    case 't':
        printf("Triangle\n");
        break;
    case 'C':
    case 'c':
        printf("Circle\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }
    printf("\n");

    // 12
    int x121, lucky;
    printf("복권 번호를 입력하시오(0에서 99사이): ");
    scanf("%d", &x121);
    // rand() 함수 시드 재설정
    srand(time(NULL));
    lucky = rand() % 100;
    printf("당첨번호는 %d입니다.\n", lucky);
    if (x121 == lucky) {
        printf("상금은 100만원입니다.\n");
    } else if ((x121 / 10) == (lucky / 10)) {
        printf("상금은 50만원입니다.\n");
    } else if ((x121 % 10) == (lucky % 10)) {
        printf("상금은 50만원입니다.\n");
    } else {
        printf("상금은 없습니다.\n");
    }
    printf("\n");

    return 0;
}