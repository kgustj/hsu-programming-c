#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum { COMIC, SF, DOCU, DRAMA } GENRE;
struct book {
    char title[100];
    char author[100];
    GENRE type;
};

const char *to_string(GENRE type) {
    switch (type) {
    case COMIC:
        return "COMIC";
    case SF:
        return "SF";
    case DOCU:
        return "DOCU";
    case DRAMA:
        return "DRAMA";
    default:
        return "UNKNOWN";
    }
}
void func1() {
    struct book b1 = {"바람과 함께 사라지다", "마가렛 미첼", DRAMA};
    printf("{ %s, %s, %s }\n", b1.title, b1.author, to_string(b1.type));
    printf("\n");
}

int equal_author(struct book b1, struct book b2) {
    return strcmp(b1.author, b2.author) == 0 ? 1 : 0;
}
void func2() {
    struct book b1 = {"노인과 바다", "헤밍웨이", DRAMA};
    struct book b2 = {"누구를 위하여 종을 울리나", "헤밍웨이", DRAMA};
    int res = equal_author(b1, b2);
    printf("{ %s, %s, %s }\n", b1.title, b1.author, to_string(b1.type));
    printf("{ %s, %s, %s }\n", b2.title, b2.author, to_string(b2.type));
    printf("equal_author()의 반환값: %d\n", res);
    printf("\n");
}

struct email {
    char title[100];
    char sender[100];
    char reciver[100];
    char content[100];
    char date[100];
    int pri;
};
void func3() {
    struct email e1 = {
        "안부 메일",        "chulsoo@hankuk.ac.kr",
        "hsh@hankuk.ac.kr", "안녕하십니까? 새해 복 많이 받으세요.",
        "2023/1/1",         1};
    printf(
        "제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %s\n우선순위: %d\n",
        e1.title, e1.sender, e1.reciver, e1.content, e1.date, e1.pri);
    printf("\n");
}

struct complex {
    double real;
    double imag;
};
struct complex complex_add(struct complex c1, struct complex c2) {
    return (struct complex){c1.real + c2.real, c1.imag + c2.imag};
}
void func4() {
    struct complex c1 = {1.00, 2.00};
    struct complex c2 = {2.00, 3.00};

    printf("%.2lf+%.2lfi\n", c1.real, c1.imag);
    printf("%.2lf+%.2lfi\n", c2.real, c2.imag);

    struct complex res = complex_add(c1, c2);
    printf("%.2lf+%.2lfi\n", res.real, res.imag);
    printf("\n");
}

struct point {
    int x, y;
};
int equal(struct point p1, struct point p2) {
    return p1.x == p2.x && p1.y == p2.y ? 1 : 0;
}
void func5() {
    struct point p1 = {1, 2};
    struct point p2 = {3, 5};

    int res = equal(p1, p2);
    if (res == 1) printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    else if (res == 0) printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    printf("\n");
}

int equal2(struct point *p1, struct point *p2) {
    return p1->x == p2->x && p1->y == p2->y ? 1 : 0;
}
void func6() {
    struct point p1 = {1, 2};
    struct point p2 = {3, 5};
    struct point *q1, *q2;

    q1 = &p1;
    q2 = &p2;

    int res = equal2(q1, q2);
    if (res == 1) printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    else if (res == 0) printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    printf("\n");
}

int quadrant(struct point p) {
    if (p.x > 0 && p.y > 0) return 1;
    else if (p.x < 0 && p.y > 0) return 2;
    else if (p.x < 0 && p.y < 0) return 3;
    else if (p.x > 0 && p.y < 0) return 4;
    else return 0;
}
void func7() {
    struct point p = {-1, 2};

    int res = quadrant(p);
    printf("(%d, %d)의 사분면 = %d\n", p.x, p.y, res);
    printf("\n");
}

struct food {
    char name[100];
    int calories;
};
void func9() {
    char name[100];
    int calories, sum, size = 3;
    struct food food_array[3];
    for (int i = 0; i < size; i++) {
        printf("음식을 입력하시오: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("칼로리를 입력하시오: ");
        scanf("%d", &calories);
        while (getchar() != '\n') {
        }
        strcpy(food_array[i].name, name);
        food_array[i].calories = calories;
    }
    for (int i = 0; i < size; i++) {
        sum += food_array[i].calories;
    }
    printf("총 칼로리 = %d\n", sum);
    printf("\n");
}

typedef struct employee {
    int number, phone, age;
    char name[100];
} employee;
void func10() {
    int size = 10, count = 0;
    employee emp_array[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        emp_array[i].number = i;
        emp_array[i].phone = rand() % 10000000;
        emp_array[i].age = rand() % 50 + 1;

        char index_str[10];
        strcpy(emp_array[i].name, "홍길동");
        sprintf(index_str, "%d", i);
        strcat(emp_array[i].name, index_str);
    }

    for (int i = 0; i < size; i++) {
        if (20 <= emp_array[i].age && emp_array[i].age <= 30) {
            printf("이름: %s, 나이: %d\n", emp_array[i].name, emp_array[i].age);
            count++;
        }
    }
    if (count == 0) printf("조건에 부합하는 직원이 없습니다.");
    printf("\n");
}
typedef struct dir {
    char name[100];
    char home[100];
    char phone[100];
} dir;

void func11() {
    int size = 3, count = 0;
    char name[100], home[100], phone[100], search[100];
    dir dir_array[size];

    for (int i = 0; i < size; i++) {
        printf("이름을 입력하시오: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("집전화번호를 입력하시오: ");
        fgets(home, sizeof(home), stdin);
        home[strcspn(home, "\n")] = '\0';
        printf("휴대폰번호를 입력하시오: ");
        fgets(phone, sizeof(phone), stdin);
        phone[strcspn(phone, "\n")] = '\0';

        strcpy(dir_array[i].name, name);
        strcpy(dir_array[i].home, home);
        strcpy(dir_array[i].phone, phone);
    }

    printf("검색할 이름: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    for (int i = 0; i < size; i++) {
        if (strcmp(dir_array[i].name, search) == 0) {
            printf("집전화번호: %s\n", dir_array[i].home);
            printf("휴대폰번호: %s\n", dir_array[i].phone);
            count++;
        }
    }
    if (!count) printf("검색한 이름을 찾을 수 없습니다.\n");
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
    // func9();
    // func10();
    func11();
    return 0;
}
