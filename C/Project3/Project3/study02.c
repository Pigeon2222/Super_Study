#include<stdio.h>

int main() {

	int num;
	printf("���� num �� �Է�");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("¦\n") : printf("Ȧ\n"); //���׿����� ���� ? �� : ����

	num != 0 && num % 2 == 0 ? printf("¦\n") : printf("����\n"); //&& ��� �����ؾ� ��
	
	char score;
	score = num > 0 || num == -1 ? 'A' : 'B'; //|| �� �� �ϳ��� �����ص� ��
	printf("score=%c\n", score);

	printf("%d\n", 100 == 100);
	printf("%d\n", 100 != 100);
	printf("%d\n", 100 >= 100);
	printf("%d\n", 100 < 100);



	printf("���� �Է�:");
	int age;
	scanf_s("%d", &age);
	age < 0 ? printf("�߸��� ����\n") : age >= 20 ? printf("����\n") : printf("����\n");

	printf("���� �Է�:");
	int number;
	scanf_s("%d", &number);
	number > 0 ? printf("���\n") : number == 0 ? printf("0\n") : printf("����\n");

	return 0;
}