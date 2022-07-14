#include<stdio.h>
#include<stdlib.h> //atoi 사용하기 위해 추가

int main() {
	
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) * (a + c));
	printf("%d", (a * a) + ((b + c) * a) + (b * c));
	
	printf("첫번째와 두번째 숫자를 입력하세요");
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d\n", A * B % 10);
	printf("%d\n", A * B / 10 % 10);
	printf("%d\n", A * B / 100);
	printf("%d\n", A * B);

	printf("두번째 숫자만 입력해보세요");
	char number[4];
	rewind(stdin);
	gets(number);
	printf("%d,%d,%d,%d\n",
		A * (number[2] - '0'),
		A * (number[1] - '0'),
		A * (number[0] - '0'),
		A * atoi(number));

	// gets_s : gets 안전하게 입력
	// fgets : 더 안전하게 입력
	// puts : 출력

	return 0;
}