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
	printf("���� �Է�: ");
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

// �Լ� : �ڵ并ġ
// �̸� ����� �� �ڵ� ���
// ���� �ȿ� ��� �Ǵ� ���������� ������ �ִ��� �����ϰ� �ϱ� ���� �Լ� �ۼ�.
//
// �Լ� 4���� ����
// ��ȯ��(return)�� �Ű�����(parameter, argument)
// X                 X
// O                 X
// X                 O
// O                 O
