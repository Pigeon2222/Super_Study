#include<stdio.h>

int main() {

	//����
	if (0) {
		int a, i, b;
		scanf_s("%d", &a);
		for (i = 1, b = 1;; i++)
		{
			if (a <= 6 * b + 1)
			{
				printf("%d\n", i + 1);
				break;
			}
			b += i + 1;
		}
	}

	// 1. ������ 2�ܺ��� 9�ܱ����� ���� 2���� �迭�� ����
	int a1[8][9] = { 0 };
	for (int i = 2; i < 10; i++)
		for (int p = 1; p < 10; p++)
			a1[i - 2][p - 1] = i * p;
	printf("%d\n", a1[7][8]);

	// 2. ������ 10�ܺ��� 19�ܱ����� ���� 2���� �迭�� ����
	int a2[10][19] = { 0 };
	for (int i = 10; i < 20; i++)
		for (int p = 1; p < 20; p++)
			a2[i - 10][p - 1] = i * p;
	printf("%d\n", a2[9][18]);

	// 3. 1������ ���� �迭�� �� �� ���غ�����.
	int a3 = 0;
	for (int i = 0; i < 8; i++)
		for (int p = 0; p < 9; p++)
			a3 += a1[i][p];
	printf("%d\n", a3);

	// 4. 2������ ���� �迭�� �� �� ���غ�����.
	int a4 = 0;
	for (int i = 0; i < 10; i++)
		for (int p = 0; p < 19; p++)
			a4 += a2[i][p];
	printf("%d\n", a4);

	// 5. 4,5�� ����� ���ؼ� ����غ�����.
	printf("%d\n", a3 + a4);

	// 6. 1���� �ִ� ������ �Ʒ��� ������� ���
	for (int i = 0; i < 8; i++)
	{
		for (int p = 0; p < 9; p++)
			printf("%d ", a1[i][p]);
		printf("\n");
	}

	// 7. 2���� �ִ� ������ 6�� ���ó�� ���
	for (int i = 0; i < 10; i++)
	{
		for (int p = 0; p < 19; p++)
			printf("%d ", a2[i][p]);
		printf("\n");
	}

	// 8. 7�� �����ϰ� ��� (%3d�� ������ ����)
	for (int i = 0; i < 10; i++)
	{
		for (int p = 0; p < 1; p++)
			printf("%d", a2[i][p]);
		for (int p = 1; p < 19; p++)
		{
			a2[i][p] / 10 == 0 ? printf("   ") :
				a2[i][p] / 100 == 0 ? printf("  ") :
				a2[i][p] / 1000 == 0 ? printf(" ") : 0;
			printf("%d", a2[i][p]);
		}
		printf("\n");
	}

	// 9. �Ʒ��� ��Ģ�� ������ ������ 20��° ���ڸ� ���α׷��� ����� ã���ÿ�.
	char a9[1000] = "1";
	int h9 = 0;
	for (int d9 = 0; d9 < 20; d9++)
	{
		int b9[10] = { NULL };
		for (int e9 = 0; a9[e9] != NULL; e9++)
		{
			for (int f9 = 0; f9 < 10; f9++)
			{
				if (a9[e9] - 48 == f9)
				{
					b9[f9]++;
					break;
				}
			}
		}
		for (int g9 = 0; g9 < 10; g9++)
		{
			if (b9[g9] != 0)
			{
				a9[h9] = g9 + '0';
				a9[h9 + 1] = b9[g9] + '0';
				h9 += 2;
			}
		}
		a9[h9] = NULL;
		printf("%d��° : %s\n", d9 + 1, a9);
		h9 = 0;
	}

	//int numbers[n][n]
	//int(*nptr)[n] = numbers;
	//numbers[n][n] == nptr[n][n];

	//printf("%d", **numbers);
	//printf("%d", **(numbers + 1));
	//printf("%d", *(*numbers + 1));

	return 0;
}