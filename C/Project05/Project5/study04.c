#include<stdio.h>

int main()
{

	//int a, b, c, sum = 0;
	//printf("a, b, c �Է�: ");
	//scanf_s("%d %d %d", &a, &b, &c);
	//for (; a <= b; a++)
	//{
	//	if (a % c == 0)
	//		continue;
	//	sum += a;
	//}
	//printf("%d\n", sum);



	int inputSugar;
	printf("���� �� kg?");
	scanf_s("%d", &inputSugar);
	int pack = 0; //�ָӴ� ��
	while (1)
	{
		if (inputSugar % 5 == 0)
		{
			pack += inputSugar / 5;
			printf("%d����\n", pack);
			break;
		}
		inputSugar -= 3;
		pack++; //3kg �ָӴ� �ϳ� ����
		if (inputSugar < 0)
		{
			printf("-1\n");
			break;
		}
	}

	return 0;
}