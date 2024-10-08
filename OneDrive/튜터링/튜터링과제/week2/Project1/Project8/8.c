#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name;
	int inum;
	float fnum;

	//입력받기
	scanf("%c\n", &name);
	scanf("%d\n", &inum);
	scanf("%f\n", &fnum);

	//출력하기
	printf("%c\n", &name);
	printf("%d\n", &inum);
	printf("%f\n", &fnum);


	return 0;
}
