#include<stdio.h>

int main() {
	int age = 0;
	printf("�� ���Դϱ�?\n");
	scanf_s("%d", &age);
	printf("�� ���̴� %d�Դϴ�.\n", age);
	printf("���� �¾ ������ %d�Դϴ�.\n", 2022 + 1 - age);

	int r = 0;
	printf("������ �Է�:");
	scanf_s("%d", &r);
	printf("���� ����: %f, ���� �ѷ�: %f\n", r * r * 3.14, r * 2 * 3.14);

	int byte = 0;
	printf("�� byte?:");
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n", byte, byte * 8);

	int bit = 0;
	printf("�� bit?:");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n", bit, bit / 8);

	int mybyte = byte;
	int mybit = mybyte * 8;
	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0;

	//��Ʈ��+H : �ؽ�Ʈ ã�Ƽ� ��� �ٲٱ�
	//��Ʈ+���Ʒ� : �ش� �� ���Ʒ��� �̵�
}