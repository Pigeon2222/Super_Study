#include<stdio.h>

int main() {

	int num;
	printf("숫자 num 값 입력");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("짝\n") : printf("홀\n"); //삼항연산자 조건 ? 참 : 거짓

	num != 0 && num % 2 == 0 ? printf("짝\n") : printf("몰라\n"); //&& 모두 만족해야 참
	
	char score;
	score = num > 0 || num == -1 ? 'A' : 'B'; //|| 둘 중 하나만 만족해도 참
	printf("score=%c\n", score);

	printf("%d\n", 100 == 100);
	printf("%d\n", 100 != 100);
	printf("%d\n", 100 >= 100);
	printf("%d\n", 100 < 100);



	printf("나이 입력:");
	int age;
	scanf_s("%d", &age);
	age < 0 ? printf("잘못된 숫자\n") : age >= 20 ? printf("성인\n") : printf("아이\n");

	printf("숫자 입력:");
	int number;
	scanf_s("%d", &number);
	number > 0 ? printf("양수\n") : number == 0 ? printf("0\n") : printf("음수\n");

	return 0;
}