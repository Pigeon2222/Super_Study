#include<stdio.h>

int main(){

	int count = 0;
	while (count < 10)
	{
		count++;
		printf("count=%d\n", count);
	}

	while (1) //���� �ݺ�
	{
		if (count > 100)
			break;
		count += 10;
		printf("count=%d\n", count);
	}

	do
	{
		printf("1���� ����!");
	} while (count < 100);



	printf("�� ���丮��?");
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
		printf("%d�� ������= %d\n", k, k * k);
	}

	int input = 0;
	do
	{
		scanf_s("%d", &input);
		printf("%d�� ������=%d\n", input, input * input);
	} while (input > 0);

	printf("����.\n");

	int n;
	printf("�Է�:");
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
	printf("�̸� �Է�: ");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++)
		printf("%c", name[i]);

	return 0;

	// break : ������
	// continue : ��ŵ

	// while : ~�ϴ� ����() ���� ���� ���̸� ��� ����
	// do while : () ���� ���� �����̶� �� ���� ����
}