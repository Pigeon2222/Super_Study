#include<stdio.h>
#include<math.h>

int main() {

	char name[10];
	printf("�̸� �Է�: ");
	scanf_s("%s", &name, 10);
	printf("%s\n", name);

	int age;
	printf("���� �Է�: ");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);

	double a, b;
	printf("�� 2���� �Է�: ");
	scanf_s("%lf %lf", &a, &b);
	printf("��c ������: %lf\n", (a * a) + (b * b));
	printf("��c ��: %lf.\n", sqrt((a * a) + (b * b)));

	char name2[10];
	printf("���ڸ� ģ���̸� �Է�: ");
	rewind(stdin);
	gets(name2);
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n", name2);

	double dala;
	printf("�׼� �Է�: ");
	scanf_s("%lf", &dala);
	printf("%.2lf�޷�.\n", dala * 1298.89);



	int number;
	printf("���� �Է�: ");
	scanf_s("%d", &number);
	if (number < 0)
		printf("����!!!\n");
	else if (number == 0)
		printf("0!!!\n");
	else if (number % 2 == 0)
		printf("¦��!!!\n");
	else if (number % 2 == 1)
		printf("Ȧ��!!!\n");

	int i;
	for (i = 1; i < 10; i++)
		printf("5 * %d = %d\n", i, i * 5);

	int f;
	printf("������ �Է�: ");
	scanf_s("%d", &f);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", f, i, i * f);

	printf("������ 2~9��\n");
	for (i = 2; i < 10; i++)
		for (f = 1; f < 10; f++)
			printf("%d * %d = %d\n", i, f, i * f);

	int k;
	printf("���� �Է�: ");
	scanf_s("%d", &k);
	if (k <= 0)
		printf("���� �� 0�� ����!!!");
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