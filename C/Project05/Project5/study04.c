#include<stdio.h>

int main()
{

	//int a, b, c, sum = 0;
	//printf("a, b, c 입력: ");
	//scanf_s("%d %d %d", &a, &b, &c);
	//for (; a <= b; a++)
	//{
	//	if (a % c == 0)
	//		continue;
	//	sum += a;
	//}
	//printf("%d\n", sum);



	int inputSugar;
	printf("설탕 몇 kg?");
	scanf_s("%d", &inputSugar);
	int pack = 0; //주머니 수
	while (1)
	{
		if (inputSugar % 5 == 0)
		{
			pack += inputSugar / 5;
			printf("%d묶음\n", pack);
			break;
		}
		inputSugar -= 3;
		pack++; //3kg 주머니 하나 증가
		if (inputSugar < 0)
		{
			printf("-1\n");
			break;
		}
	}

	return 0;
}