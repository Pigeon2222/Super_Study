#include<stdio.h>

int main() {
	char c;
	printf("�� ����� ���� +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("���� �� ����� %c�Դϴ�.\n", c);
	rewind(stdin);
	scanf_s("%c", &c, 1);
	printf("���= %c\n", c);

	rewind(stdin);
	printf("�� �̸��� ù ���ڴ�?");
	c = getchar();
	printf("%c\n", c);
	printf("�� �̸��� �� ���ڴ�?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	return 0;

	//rewind(stdin); : ���۰��� û��
	//getchar(); : �� ���ڸ� �Է�
}