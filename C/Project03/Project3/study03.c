#include<stdio.h>

int main() {

	int age = 0;
	scanf_s("%d", &age);
	if (age > 0)
		printf("age는 양수입니다.\n");
	if (age < 0)
	{
		printf("age는 음수입니다.\n");
		printf("나이는 음수일 수 없습니다.\n");
	}

	if (age > 0)
		printf("age는 양수\n");
	else if (age == 0)
		printf("age는 0\n");
	else
		printf("age는 음수\n");

	if (age > 0)
	{
		if (age % 2 == 0)
			printf("짝\n");
		else
			printf("홀\n");
	}

	if (age > 0 && age % 2 == 0)
		printf("age는 자연수이면서 짝수이다.\n");
	if (age > 0 || age % 2 != 0)
		printf("age는 자연수이거나 홀수이다.\n");

	return 0;
}