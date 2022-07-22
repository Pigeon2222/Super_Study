#include<stdio.h>

//1. printArr를 호출해보세요. 왜 size를 넘겨줘야 하는지도 생각해보세요.
void printArr1(int num[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", num[i]);
	printf("\n");
}

//2. 배열 안의 최댓값은 반환하고 최솟값은 printf로 출력하는 함수를 만들고 호출해보세요.
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
//3. 배열 값의 부호를 전부 뒤집는 함수는 만들고 호출해서 테스트해보세요.
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
//배열을 함수의 매개변수로 넘길 땐 배열의 크기도 같이 넘겨줘야 함.
//배열은 포인터이니 매개변수로 int numbers[] 라고 해도 되고 int* numbers 라고 해도 됨.
