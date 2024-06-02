#include <ctype.h>
#include <stdio.h>
#include <string.h>

void func1() {
    char str[100];

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("역순 문자열: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    printf("\n");
    printf("\n");
}

void func2() {
    char input[100], output[100];

    printf("문자열을 입력하시오: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';

    printf("공백 제거 문자열: %s\n", output);
    printf("\n");
}

void func3() {
    char input[100], output[100];

    printf("문자열을 입력하시오: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    printf("제거할 문자: ");
    char remove = getchar();

    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != remove) {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';

    printf("결과 문자열: %s\n", output);
    printf("\n");
}

void func4() {
    char str[100];

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("문자를 입력하시오: ");
    char target = getchar();

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%c의 개수: %d\n", target, count);
    printf("\n");
}

void func5() {
    char str[100];
    int count[26] = {0};

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) count[str[i] - 65]++;
        if (islower(str[i])) count[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) printf("%c: %d\n", i + 97, count[i]);
    }
    printf("\n");
}

void func6() {
    char str[100];
    int alpha = 0, digit = 0, symbol = 0;

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) alpha++;
        else if (isdigit(str[i])) digit++;
        else symbol++;
    }

    printf("문자열 안의 알파벳의 문자의 개수: %d\n", alpha);
    printf("문자열 안의 숫자의 개수: %d\n", digit);
    printf("문자열 안의 기타 문자의 개수: %d\n", symbol);
    printf("\n");
}

int get_response(char *prompt) {
    for (int i = 0; prompt[i]; i++)
        prompt[i] = tolower(prompt[i]);

    if (strcmp(prompt, "yes") == 0) return 1;
    else if (strcmp(prompt, "no") == 0) return 0;
}

void func7() {
    char str[100];

    printf("게임을 하시겠습니까: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int res = get_response(str);
    if (res == 1) printf("긍정적인 답변입니다.\n");
    else if (res == 0) printf("부정적인 답변입니다.\n");
}

void func8() {
    char str[100], *token;
    int count = 0;

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    token = strtok(str, " ,\t\n");
    while (token != NULL) {
        token = strtok(NULL, " ,\t\n");
        count++;
    }

    printf("단어의 수는 %d입니다.\n", count);
    printf("\n");
}

void func9() {}

void func10() {
    char str[100], word[100];
    int count = 0;

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("단어: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    char *p = str;
    while ((p = strstr(p, word)) != NULL) {
        count++;
        p++;
    }

    printf("%s의 개수: %d\n", word, count);
    printf("\n");
}

void func11() {
    char str[100];

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (!isupper(str[0])) str[0] = toupper(str[0]);
    if (str[strlen(str) - 1] != '.') str[strlen(str)] = '.';

    printf("수정된 텍스트: %s\n", str);
    printf("\n");
}

void func12() {
    char str[100], reverse[100];

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);

    for (int i = 0; i < length; i++) {
        reverse[i] = str[length - i - 1];
    }
    reverse[length] = '\0';

    int res = strcmp(str, reverse);
    if (res == 0) printf("회문입니다.\n");
    else printf("회문이 아닙니다.\n");
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
    // func8();
    // func9();
    // func10();
    // func11();
    func12();
    return 0;
}