#include<stdio.h>

int main(){

	int count = 0;
	while (count < 10)
	{
		count++;
		printf("count=%d\n", count);
	}

	while (1) //무한 반복
	{
		if (count > 100)
			break;
		count += 10;
		printf("count=%d\n", count);
	}

	do
	{
		printf("1번은 실행!");
	} while (count < 100);



	printf("몇 펙토리얼?");
	int a;
	scanf_s("%d", &a);
	printf("%d!=%d", a, a);
	for (int i = a - 1; i > 0; i--)
		printf("x%d", i);
	printf("\n");

	int n, m, sum;
	scanf_s("%d %d", &n, &m);
	if (n > m)
	{
		sum = m;
		m = n;
		n = sum;
	}
	sum = 0;
	for (n; n <= m; n++)
		sum += n;
	printf("%d\n", sum);

	int n1, m1, sum1;
	scanf_s("%d %d", &n1, &m1);
	if (n1 > m1)
	{
		sum1 = m1;
		m1 = n1;
		n1 = sum1;
	}
	sum1 = 0;
	for (n1; n1 <= m1; n1++)
	{
		if (n1 % 2 == 1)
			continue;
		sum1 += n1;
	}
	printf("%d", sum1);

	int k = 1;
	for (;;) //while(1), if(1)
	{
		scanf_s("%d", &k);
		if (k <= 0)
			break;
		printf("%d의 제곱값= %d\n", k, k * k);
	}

	int input = 0;
	do
	{
		scanf_s("%d", &input);
		printf("%d의 제곱값=%d\n", input, input * input);
	} while (input > 0);

	printf("종료.\n");

	int n;
	printf("입력:");
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n; i++)
	{
		int onoffswitch = i;
		for (int j = 0; j < n; j++)
		{
			if (onoffswitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onoffswitch++;
		}
		printf("\n");
	}



	system("color a");

	char name[100];
	printf("이름 입력: ");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++)
		printf("%c", name[i]);

	return 0;

	// break : 나가기
	// continue : 스킵

	// while : ~하는 동안() 안의 값이 참이면 계속 실행
	// do while : () 안의 값이 거짓이라도 한 번은 실행
}