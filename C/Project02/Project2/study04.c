#include<stdio.h>

int main() {

	char name[100];
	printf("�̸���?");
	scanf_s("%s", name, sizeof(name));
	printf("�� �̸��� %s�Դϴ�.\n", name);
	rewind(stdin);
	char mbti[100];
	printf("mbti?");
	gets(mbti);
	printf("�� mbti�� %s�Դϴ�/\n", mbti);

	printf("����� �����?");
	char feel[10];
	gets(feel);
	printf("����� mbti��?");
	char MBTI[10];
	gets(MBTI);
	printf("����� ��������?");
	char btype[10];
	scanf_s("%s", &btype, 10);
	printf("����� Ű��?");
	double cm = 0;
	scanf_s("%lf", &cm, 10);
	printf("����� ���̴�?");
	int age = 0;
	scanf_s("%d", &age, 10);
	printf("���� ����� %s, MBTI�� %s, �������� %s, Ű�� %.2lf, ���̴� %d�Դϴ�.\n",
		feel, MBTI, btype, cm, age);

	int aa;
	printf("�ʴ�?");
	scanf_s("%d", &aa);
	printf("%d�� %d��\n", aa / 60, aa % 60);

	int xx, bb;
	printf("x=");
	scanf_s("%d", &xx);
	printf("b=");
	scanf_s("%d", &bb);
	printf("2x+b=%d\n", 2 * xx + bb);

	int aaa;
	printf("a=");
	scanf_s("%d", &aaa);
	printf("(x+a)(x+b)=%d\n", (xx + aaa) * (xx + bb));

	int ee, ff;
	scanf_s("%d %d", &ee, &ff);
	printf("%d\n", ee * ff % 10);
	printf("%d\n", (ee * ff % 100) / 10);
	printf("%d\n", (ee * ff % 1000) / 100);
	printf("%d\n", ee * ff);

	return 0;

	//scanf_s�� ���� ���� ����, gets�� ���� ���ĵ� ����
}