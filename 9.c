#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159265

// 8_1
int even(int n) { return n % 2 == 0 ? 1 : 0; }
int absolute(int n) { return n >= 0 ? n : -n; }
int sign(int n) { return n > 0 ? 1 : n < 0 ? -1 : 0; }
int func_8_1() {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    printf("even()의 결과: %d\n", even(n));
    printf("absolute()의 결과: %d\n", absolute(n));
    printf("sign()의 결과: %d\n", sign(n));
    printf("\n");
    return 0;
}

// 8_2
int is_multiple(int n, int m) { return n % m == 0 ? 1 : 0; }
int func_8_2() {
    int n, m;
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &m);
    if (is_multiple(n, m) == 1) printf("%d는 %d의 배수입니다.\n", n, m);
    else printf("%d는 %d의 배수가 아닙니다.\n", n, m);
    printf("\n");
    return 0;
}

// 8_3
double get_bigger(double a, double b) { return a >= b ? a : b; }
int func_8_3() {
    double n, m;
    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &n, &m);
    printf("큰 수는 %.2lf입니다.\n", get_bigger(n, m));
    printf("\n");
    return 0;
}

// 8_4
int check_alpha(char c) { return (c >= 'a' && c <= 'z') ? 1 : 0; }
int func_8_4() {
    char ch;
    printf("문자를 입력하시오: ");
    scanf(" %c", &ch);
    if (check_alpha(ch) == 1) printf("%c는 알파벳 문자입니다.\n", ch);
    else printf("%c는 알파벳 문자가 아닙니다.\n", ch);
    printf("\n");
    return 0;
}

// 8_5
double cal_area(double radius) { return PI * radius * radius; }
int func_8_5() {
    double n;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &n);
    printf("원의 면적은 %.2lf입니다.\n", cal_area(n));
    printf("\n");
    return 0;
}

// 8_8
double get_tax(int income) {
    if (income <= 1000) {
        return income * 0.08;
    } else {
        return 80 + (income - 1000) * 0.1;
    }
}
int func_8_8() {
    int n;
    printf("소득을 입력하시오(만원): ");
    scanf("%d", &n);
    printf("소득세는 %.2lf만원입니다.\n", get_tax(n));
    printf("\n");
    return 0;
}

// 8_10
int randint() {
    // rand() 함수 시드 재설정
    srand(time(NULL));
    return 10 + rand() % (90 - 10 + 1);
}
int func_8_10() {
    for (int i = 0; 0 < 10; i++) {
        printf("%d ", randint());
    }
    printf("\n");
    return 0;
}

// 8_11
int dice() { return 1 + rand() % (6 - 1 + 1); }
int func_8_11() {
    int u1 = dice();
    int u2 = dice();
    int u3 = dice();
    int c1 = dice();
    int c2 = dice();
    int c3 = dice();

    printf("사용자 주사위=(%d, %d, %d)=%d\n", u1, u2, u3, u1 + u2 + u3);
    printf("컴퓨터 주사위=(%d, %d, %d)=%d\n", c1, c2, c3, c1 + c2 + c3);
    if (u1 + u2 + u3 > c1 + c2 + c3) {
        printf("사용자 승리\n");
    } else if (u1 + u2 + u3 < c1 + c2 + c3) {
        printf("사용자 패배\n");
    } else {
        printf("무승부\n");
    }
    printf("\n");
    return 0;
}

// 8_16
static int balance = 0;
void deposit() {
    int amount;
    printf("입금 금액을 입력하시오: ");
    scanf("%d", &amount);
    balance += amount;
}
void withdrawal() {
    int amount;
    printf("출금 금액을 입력하시오: ");
    scanf("%d", &amount);
    balance -= amount;
}
void func_8_16() {
    int menu;
    while (1) {
        printf("********** Welcome to Express ATM **********\n");
        printf("<1> 잔액\n<2> 입금\n<3> 출금\n<4> 종료\n");
        printf("메뉴를 선택하시오: ");
        scanf("%d", &menu);
        switch (menu) {
        case 1:
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            return;
        default:
            break;
        }
        printf("잔고는 %d원 입니다.\n", balance);
    }
    printf("\n");
}

int main(void) {
    // func_8_1();
    // func_8_2();
    // func_8_3();
    // func_8_4();
    // func_8_5();
    // func_8_8();
    // func_8_10();
    func_8_11();
    func_8_16();
    return 0;
}