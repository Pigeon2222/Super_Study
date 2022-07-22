#include<stdio.h>
#include<math.h>

int main() {

	char name[10];
	printf("이름 입력: ");
	scanf_s("%s", &name, 10);
	printf("%s\n", name);

	int age;
	printf("나이 입력: ");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);

	double a, b;
	printf("변 2개를 입력: ");
	scanf_s("%lf %lf", &a, &b);
	printf("변c 제곱값: %lf\n", (a * a) + (b * b));
	printf("변c 값: %lf.\n", sqrt((a * a) + (b * b)));

	char name2[10];
	printf("옆자리 친구이름 입력: ");
	rewind(stdin);
	gets(name2);
	printf("내 옆자리 학생의 이름은 %s입니다.\n", name2);

	double dala;
	printf("액수 입력: ");
	scanf_s("%lf", &dala);
	printf("%.2lf달러.\n", dala * 1298.89);



	int number;
	printf("숫자 입력: ");
	scanf_s("%d", &number);
	if (number < 0)
		printf("음수!!!\n");
	else if (number == 0)
		printf("0!!!\n");
	else if (number % 2 == 0)
		printf("짝수!!!\n");
	else if (number % 2 == 1)
		printf("홀수!!!\n");

	int i;
	for (i = 1; i < 10; i++)
		printf("5 * %d = %d\n", i, i * 5);

	int f;
	printf("구구단 입력: ");
	scanf_s("%d", &f);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", f, i, i * f);

	printf("구구단 2~9단\n");
	for (i = 2; i < 10; i++)
		for (f = 1; f < 10; f++)
			printf("%d * %d = %d\n", i, f, i * f);

	int k;
	printf("숫자 입력: ");
	scanf_s("%d", &k);
	if (k <= 0)
		printf("음수 및 0은 오류!!!");
	else
	{
		printf("1");
		int f = 1;
		for (int i = 2; i <= k; i++)
		{
			printf("+%d", i);
			f += i;
		}
		printf("=%d", f);
	}

	return 0;
}