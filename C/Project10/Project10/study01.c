#include<stdio.h>
#include<Windows.h>

// 1. 변수 a와 b와 c의 값을 입력받고, a부터 b까지의 합을 구하되, c의 배수 부분은 제외.
int num1() {
	printf("1: ");
	int a, b, c, d = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	for (int i = a; a < b + 1; a++)
	{
		if (a % c == 0)
		{
			continue;
		}
		d += a;
	}
	printf("%d\n", d);
	return d;
}

// 2. Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력, 3600이상은 오류, m 값은 반환.
int num2() {
	printf("2: ");
	int sec, h, m = 0;
	scanf_s("%d", &sec);
	if (sec >= 3600)
		printf("오류!\n");
	else
	{
		h = sec / 60;
		m = sec % 60;
		printf("%d분 %d초\n", h, m);
	}
	return m;
}

// 3. 반환값과 매개변수는 없으나 화면의 색깔을 바꿀 수 있는 함수를 구하시오.
void num3() {
	printf("3. 실행!\n");
	system("color a0");
	system("color 0a");
}

// 4. 반환값은 없고 매개변수 char 2개에 의하여 배경색과 화면색을 바꾸는 함수 구하시오.
void num4(a, b) {
	char input[9] = "color ";
	input[6] = a;
	input[7] = b;
	system(input);
}

// 5. a부터 b까지 더하는 함수.
int num5(a, b) {
	int c;
	for (c = 0; ; a++)
	{
		if (a == b)
		{
			printf("%d=", a);
			c += a;
			printf(" %d\n", c);
			break;
		}
		printf("%d+", a);
		c += a;
	}
	return c;
}

// 6. a부터 b까지 곱하는 함수.
int num6(a, b) {
	int c;
	for (c = 1; ; a++)
	{
		if (a == b)
		{
			printf("%d=", a);
			c *= a;
			printf(" %d\n", c);
			break;
		}
		printf("%dx", a);
		c *= a;
	}
	return c;
}

// 7. 5번과 6번 함수 및 매개변수를 이용해서 a부터 b까지 더하거나 곱해서 그 결과를 출력.
void num7(a, b, c) {
	if (c == '+')
		printf("return: %d\n", num5(a, b));
	else if (c == '*' || c == 'x' || c == 'X')
		printf("return: %d\n", num6(a, b));
	else
		printf("매개변수 오류입니다.");
}

// 8. 1부터 n까지의 값을 곱하는 함수를 작성하시오(반복문)
int num8() {
	printf("8: ");
	int a, b = 1;
	scanf_s("%d", &a);
	for (int i = 1; ; i++)
	{
		if (i == a)
		{
			printf("%d=", i);
			b *= i;
			printf(" %d\n", b);
			break;
		}
		printf("%dx", i);
		b *= i;
	}
}

// 9. 1부터 n까지의 값을 곱하는 함수를 작성하시오(재귀함수)
int num9(a) {
	if (a == 0)
		return 1;
	return a * num9(a - 1);
}

// 10. 다음 규칙을 갖는 함수를 작성하시오. 1, 1, 2, 3, 5, 8, 13, 21
void num10() {
	printf("10: ");
	int a, b = 1, c = 0, d = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		printf("%d ", b);
		d = c;
		c = b;
		b = c + d;
	}
}

int main() {

	printf("return: %d\n", num1());

	printf("return: %d\n", num2());

	num3();

	printf("4: ");
	char a4, b4;
	rewind(stdin);
	a4 = getchar();
	rewind(stdin);
	b4 = getchar();
	num4(a4, b4);

	printf("5: ");
	int a5, b5;
	scanf_s("%d %d", &a5, &b5);
	printf("return: %d\n", num5(a5, b5));

	printf("6: ");
	int a6, b6;
	scanf_s("%d %d", &a6, &b6);
	printf("return: %d\n", num6(a6, b6));

	printf("7: ");
	int a7, b7;
	char c7;
	scanf_s("%d %d %c", &a7, &b7, &c7);
	num7(a7, b7, c7);

	num8();

	printf("9: ");
	int a9;
	scanf_s("%d", &a9);
	printf("return: %d\n", num9(a9));

	num10();

	return 0;
}