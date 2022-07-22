#include<stdio.h>
#include<stdlib.h> //동적 배열용
#define MAX 1024 //매크로 상수

//2. 가장 작은 숫자의 인덱스를 리턴.
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

//1. 배열의 크기를 사용자가 정하여 배열을 만들고, 가장 큰 숫자의 인덱스를 출력.
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

//동적 메모리 할당
//int* 배열명 = (int*)malloc(배열크기); (메모리 초기화 안 됨)
//int* 배열명 = (int*)calloc(배열개수, 변수1개의크기); (0 초기화로 시작)
//realloc(배열명, 배열크기); (이미 동적 할당된 배열의 크기를 변경)
//free(배열명); (동적 할당된 메모리 해제, 메모리 누수 방지)
