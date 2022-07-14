#include<stdio.h>

int main() {
	int age = 10;
	long long bigValue = 9999999999;
	short smallValue = 5;
	double pi_value = 3.14;
	float myPi = 3.14;
	char Mylntial = 'L';

	int nowYear = 2022;
	printf("내가 태어난 연도는 %d입니다.\n", nowYear + 1 - age);
	printf("원주율 값은 %f입니다.\n", pi_value);

	int input;
	printf("숫자 입력해주세요.");
	scanf_s("%d", &input);
	printf("그 숫자의 제곱은 %d입니다.\n", input * input);
	int result = input * input;
	printf("답:%d\n", result);

	return 0;
}