#include<stdio.h>

int main() {
	int age = 10;
	long long bigValue = 9999999999;
	short smallValue = 5;
	double pi_value = 3.14;
	float myPi = 3.14;
	char Mylntial = 'L';

	int nowYear = 2022;
	printf("���� �¾ ������ %d�Դϴ�.\n", nowYear + 1 - age);
	printf("������ ���� %f�Դϴ�.\n", pi_value);

	int input;
	printf("���� �Է����ּ���.");
	scanf_s("%d", &input);
	printf("�� ������ ������ %d�Դϴ�.\n", input * input);
	int result = input * input;
	printf("��:%d\n", result);

	return 0;
}