#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[5];
	float sum = 0;
	int i;
	float average;

	printf("5���� �л� ������ �Է��ϼ��� >>> ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 5; i++) {
		sum = sum + num[i];
	}

	average = sum / 5;

	printf("���: %f", average);

	return 0;
}