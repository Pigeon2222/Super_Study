#include<stdio.h>

//1. printArr�� ȣ���غ�����. �� size�� �Ѱ���� �ϴ����� �����غ�����.
void printArr1(int num[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", num[i]);
	printf("\n");
}

//2. �迭 ���� �ִ��� ��ȯ�ϰ� �ּڰ��� printf�� ����ϴ� �Լ��� ����� ȣ���غ�����.
int printArr2(int num[], int size)
{
	int a = num[0], b = num[0];
	for (int i = 0; i < size; i++)
	{
		a < num[i] ? a = num[i] : 0;
		b > num[i] ? b = num[i] : 0;
	}
	printf("%d\n", b);
	return a;
}
//3. �迭 ���� ��ȣ�� ���� ������ �Լ��� ����� ȣ���ؼ� �׽�Ʈ�غ�����.
void printArr3(int num[], int size)
{
	for (int i = 0; i < size; i++)
	{
		num[i] *= -1;
		printf("%d ", num[i]);
	}
}

int main()
{
	int num[5] = { 1,2,5,-4,3 };
	printArr1(num, sizeof(num) / sizeof(int));
	printf("%d\n", printArr2(num, sizeof(num) / sizeof(int)));
	printArr3(num, sizeof(num) / sizeof(int));

	return 0;
}

//sizeof(numbers) / sizeof(int)
//�迭�� �Լ��� �Ű������� �ѱ� �� �迭�� ũ�⵵ ���� �Ѱ���� ��.
//�迭�� �������̴� �Ű������� int numbers[] ��� �ص� �ǰ� int* numbers ��� �ص� ��.
