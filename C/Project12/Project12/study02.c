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

//�������� (�߰�ȣ ��, �ʱ�ȭ ���ص� 0)
//�������� (�ʱ�ȭ ���ص� 0, �Ű����� �Ұ�)
//�������� (�߰�ȣ ��, �Ű����� ����)
//extern (�ܺ����Ͽ��� �������� ���)