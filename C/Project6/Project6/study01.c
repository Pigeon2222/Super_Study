#include<stdio.h>

int main() {

	int age;
	scanf_s("%d", &age);
	if (age < 0)
		printf("����\n");
	switch (age/10)
	{
	case 0:
		printf("��������\n");
		break;
	case 1:
		printf("�޽ĸԴ� ģ����\n");
		break;
	case 2:
		printf("û��\n");
		break;
	case 3:
		printf("���߷�\n");
		break;
	case 4:
		printf("������\n");
		break;
	default:
		printf("������\n");
	}

	float po;
	scanf_s("%f", &po);
	po < 0 ? printf("����") :
		po < 1 ? printf("F") :
		po < 2 ? printf("D") :
		po < 3 ? printf("C") :
		po < 4 ? printf("B") :
		po < 4.5 ? printf("A") :
		po == 4.5 ? printf("A+") : printf("����");

	return 0;
}