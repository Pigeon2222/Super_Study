#include<stdio.h>
#include<stdlib.h> //atoi ����ϱ� ���� �߰�

int main() {
	
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) * (a + c));
	printf("%d", (a * a) + ((b + c) * a) + (b * c));
	
	printf("ù��°�� �ι�° ���ڸ� �Է��ϼ���");
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d\n", A * B % 10);
	printf("%d\n", A * B / 10 % 10);
	printf("%d\n", A * B / 100);
	printf("%d\n", A * B);

	printf("�ι�° ���ڸ� �Է��غ�����");
	char number[4];
	rewind(stdin);
	gets(number);
	printf("%d,%d,%d,%d\n",
		A * (number[2] - '0'),
		A * (number[1] - '0'),
		A * (number[0] - '0'),
		A * atoi(number));

	// gets_s : gets �����ϰ� �Է�
	// fgets : �� �����ϰ� �Է�
	// puts : ���

	return 0;
}