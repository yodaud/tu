#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[10];
    char number[15];


    printf("�̸��� �Է��ϼ��� >>> ");
    scanf("%s", name);


    printf("�й��� �Է��ϼ��� >>> ");
    scanf("%s", number);


    printf("�̸�: %s, �й�: %s", name, number);

    return 0;
}