#include<stdio.h>

int main() {

	int age = 0;
	scanf_s("%d", &age);
	if (age > 0)
		printf("age�� ����Դϴ�.\n");
	if (age < 0)
	{
		printf("age�� �����Դϴ�.\n");
		printf("���̴� ������ �� �����ϴ�.\n");
	}

	if (age > 0)
		printf("age�� ���\n");
	else if (age == 0)
		printf("age�� 0\n");
	else
		printf("age�� ����\n");

	if (age > 0)
	{
		if (age % 2 == 0)
			printf("¦\n");
		else
			printf("Ȧ\n");
	}

	if (age > 0 && age % 2 == 0)
		printf("age�� �ڿ����̸鼭 ¦���̴�.\n");
	if (age > 0 || age % 2 != 0)
		printf("age�� �ڿ����̰ų� Ȧ���̴�.\n");

	return 0;
}