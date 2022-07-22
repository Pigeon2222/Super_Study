#include<stdio.h>

int main() {
	int age = 0;
	printf("몇 살입니까?\n");
	scanf_s("%d", &age);
	printf("내 나이는 %d입니다.\n", age);
	printf("내가 태어난 연도는 %d입니다.\n", 2022 + 1 - age);

	int r = 0;
	printf("반지름 입력:");
	scanf_s("%d", &r);
	printf("원의 넓이: %f, 원의 둘레: %f\n", r * r * 3.14, r * 2 * 3.14);

	int byte = 0;
	printf("몇 byte?:");
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n", byte, byte * 8);

	int bit = 0;
	printf("몇 bit?:");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n", bit, bit / 8);

	int mybyte = byte;
	int mybit = mybyte * 8;
	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0;

	//컨트롤+H : 텍스트 찾아서 모두 바꾸기
	//알트+위아래 : 해당 줄 위아래로 이동
}