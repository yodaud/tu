#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[3]; //1 2 3 
	int i;
	int sum = 0;
	//����ڿ��� ������ �Է¹ޱ�
	printf("3���� ������ �Է��ϼ��� >>>");

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}
	//���ϱ�
	for (i = 0; i < 3; i++) { //i=0,1,2
		sum = sum + num[i]; //num[0],num[1],um[2] =sum
	}
	
	printf('�迭�� ��')
	return 0;
}