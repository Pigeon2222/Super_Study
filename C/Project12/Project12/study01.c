#include<stdio.h>

void enterKey()
{
	printf("\n");
}
void printPowerNumber(int n)
{
	printf("%d", n * n);
}
int inputNum()
{
	int n;
	printf("숫자 입력: ");
	scanf_s("%d", &n);
	return n;
}

int PowerNum(int n, int p)
{
	if (p <= 0)
		return 1;
	else if (p == 1)
		return n;
	else {
		int num = n;
		for (int i = 0; i < p - 1; i++)
			n *= num;
	}
	return n;
}

int printNumber(int a)
{
	printf("%d", a);
}

int main()
{
	int a = inputNum();
	printPowerNumber(a);
	enterKey();

	a = inputNum();
	int b = inputNum();
	printNumber(PowerNum(a, b));

	return 0;
}

// 함수 : 코드뭉치
// 미리 만들어 둔 코드 덩어리
// 메인 안에 적어도 되는 내용이지만 메인을 최대한 심플하게 하기 위해 함수 작성.
//
// 함수 4가지 형태
// 반환형(return)과 매개변수(parameter, argument)
// X                 X
// O                 X
// X                 O
// O                 O
