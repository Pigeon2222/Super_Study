#include<stdio.h>

int main() {

	//벌집
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

	// 1. 구구단 2단부터 9단까지의 값을 2차원 배열에 저장
	int a1[8][9] = { 0 };
	for (int i = 2; i < 10; i++)
		for (int p = 1; p < 10; p++)
			a1[i - 2][p - 1] = i * p;
	printf("%d\n", a1[7][8]);

	// 2. 구구단 10단부터 19단까지의 값을 2차원 배열에 저장
	int a2[10][19] = { 0 };
	for (int i = 10; i < 20; i++)
		for (int p = 1; p < 20; p++)
			a2[i - 10][p - 1] = i * p;
	printf("%d\n", a2[9][18]);

	// 3. 1번에서 만든 배열의 총 합 구해보세요.
	int a3 = 0;
	for (int i = 0; i < 8; i++)
		for (int p = 0; p < 9; p++)
			a3 += a1[i][p];
	printf("%d\n", a3);

	// 4. 2번에서 만든 배열의 총 합 구해보세요.
	int a4 = 0;
	for (int i = 0; i < 10; i++)
		for (int p = 0; p < 19; p++)
			a4 += a2[i][p];
	printf("%d\n", a4);

	// 5. 4,5번 결과를 더해서 출력해보세요.
	printf("%d\n", a3 + a4);

	// 6. 1번에 있는 내용을 아래의 모양으로 출력
	for (int i = 0; i < 8; i++)
	{
		for (int p = 0; p < 9; p++)
			printf("%d ", a1[i][p]);
		printf("\n");
	}

	// 7. 2번에 있는 내용을 6번 모양처럼 출력
	for (int i = 0; i < 10; i++)
	{
		for (int p = 0; p < 19; p++)
			printf("%d ", a2[i][p]);
		printf("\n");
	}

	// 8. 7번 균일하게 출력 (%3d로 간단히 가능)
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

	// 9. 아래의 규칙을 따르는 수열의 20번째 숫자를 프로그램을 만들어 찾으시오.
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
		printf("%d번째 : %s\n", d9 + 1, a9);
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