#include<stdio.h>

int ch1(int a1, int b1) {
	if (a1 >= b1)
		return a1;
	return b1;
}

void ch2(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", ch1(a, b));
	ch2(&a, &b);
	printf("a:%d b:%d", a, b);

	return 0;
}

//전역변수 (중괄호 밖, 초기화 안해도 0)
//정적변수 (초기화 안해도 0, 매개변수 불가)
//지역변수 (중괄호 안, 매개변수 가능)
//extern (외부파일에서 전역변수 사용)