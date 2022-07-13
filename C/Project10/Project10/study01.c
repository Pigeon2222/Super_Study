#include<stdio.h>
#include<Windows.h>

// 1. ���� a�� b�� c�� ���� �Է¹ް�, a���� b������ ���� ���ϵ�, c�� ��� �κ��� ����.
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

// 2. Sec(��) ���� �Է¹޾Ƽ� �ð��� h�� m�ʶ�� �� ���, 3600�̻��� ����, m ���� ��ȯ.
int num2() {
	printf("2: ");
	int sec, h, m = 0;
	scanf_s("%d", &sec);
	if (sec >= 3600)
		printf("����!\n");
	else
	{
		h = sec / 60;
		m = sec % 60;
		printf("%d�� %d��\n", h, m);
	}
	return m;
}

// 3. ��ȯ���� �Ű������� ������ ȭ���� ������ �ٲ� �� �ִ� �Լ��� ���Ͻÿ�.
void num3() {
	printf("3. ����!\n");
	system("color a0");
	system("color 0a");
}

// 4. ��ȯ���� ���� �Ű����� char 2���� ���Ͽ� ������ ȭ����� �ٲٴ� �Լ� ���Ͻÿ�.
void num4(a, b) {
	char input[9] = "color ";
	input[6] = a;
	input[7] = b;
	system(input);
}

// 5. a���� b���� ���ϴ� �Լ�.
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

// 6. a���� b���� ���ϴ� �Լ�.
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

// 7. 5���� 6�� �Լ� �� �Ű������� �̿��ؼ� a���� b���� ���ϰų� ���ؼ� �� ����� ���.
void num7(a, b, c) {
	if (c == '+')
		printf("return: %d\n", num5(a, b));
	else if (c == '*' || c == 'x' || c == 'X')
		printf("return: %d\n", num6(a, b));
	else
		printf("�Ű����� �����Դϴ�.");
}

// 8. 1���� n������ ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�(�ݺ���)
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

// 9. 1���� n������ ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�(����Լ�)
int num9(a) {
	if (a == 0)
		return 1;
	return a * num9(a - 1);
}

// 10. ���� ��Ģ�� ���� �Լ��� �ۼ��Ͻÿ�. 1, 1, 2, 3, 5, 8, 13, 21
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