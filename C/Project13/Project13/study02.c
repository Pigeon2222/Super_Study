#include<stdio.h>
#include<stdlib.h> //���� �迭��
#define MAX 1024 //��ũ�� ���

//2. ���� ���� ������ �ε����� ����.
int kk(int size, int* arr) {
	int b, c;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			b = arr[i];
			c = 1;
		}
		if (b > arr[i])
		{
			b = arr[i];
			c = i;
		}
	}
	return c;
}

//1. �迭�� ũ�⸦ ����ڰ� ���Ͽ� �迭�� �����, ���� ū ������ �ε����� ���.
int main()
{
	int size, b, c;
	scanf_s("%d", &size);
	int* arr = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
		if (i == 0)
		{
			b = arr[i];
			c = 1;
		}
		if (b < arr[i])
		{
			b = arr[i];
			c = i;
		}
	}
	printf("%d\n", c);
	printf("%d", kk(size, arr));
}

//���� �޸� �Ҵ�
//int* �迭�� = (int*)malloc(�迭ũ��); (�޸� �ʱ�ȭ �� ��)
//int* �迭�� = (int*)calloc(�迭����, ����1����ũ��); (0 �ʱ�ȭ�� ����)
//realloc(�迭��, �迭ũ��); (�̹� ���� �Ҵ�� �迭�� ũ�⸦ ����)
//free(�迭��); (���� �Ҵ�� �޸� ����, �޸� ���� ����)
