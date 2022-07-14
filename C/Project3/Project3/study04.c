#include<stdio.h>

int main() {

	if (0) //실행 안함
	{
#pragma region 두번째
		int x, y;
		printf("숫자 2개를 입력하시오.\n");
		scanf_s("%d %d", &x, &y);
		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y > 0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else if (x > 0 && y < 0)
			printf("4\n");
		else
			printf("0\n");
#pragma endregion
#pragma region 세번째
		printf("나이를 입력하시오.\n");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age > 200)
			printf("타노스\n");
		else if (age < 20)
			printf("미성년자\n");
		else if (age <= 50)
			printf("사회의 주 구성원\n");
		else if (age <= 70)
			printf("관리자\n");
		else if (age <= 200)
			printf("지혜의 도서관\n");
#pragma endregion
		//#region : 목차
	}

	int h, m;
	printf("시간, 분 입력\n");
	scanf_s("%d %d", &h, &m);
	h %= 24; //h %= 24;
	m %= 60;
	m -= 45;
	if (m < 0)
	{
		h -= 1;
		m += 60;
		if (h < 0)
			h += 24;
	}
	printf("알람시간: %d시 %d분\n", h, m);

	return 0;
}