#include<stdio.h>

int main() {

	if (0) //���� ����
	{
#pragma region �ι�°
		int x, y;
		printf("���� 2���� �Է��Ͻÿ�.\n");
		scanf_s("%d %d", &x, &y);
		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y > 0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else if (x > 0 && y < 0)
			printf("4\n");
		else
			printf("0\n");
#pragma endregion
#pragma region ����°
		printf("���̸� �Է��Ͻÿ�.\n");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age > 200)
			printf("Ÿ�뽺\n");
		else if (age < 20)
			printf("�̼�����\n");
		else if (age <= 50)
			printf("��ȸ�� �� ������\n");
		else if (age <= 70)
			printf("������\n");
		else if (age <= 200)
			printf("������ ������\n");
#pragma endregion
		//#region : ����
	}

	int h, m;
	printf("�ð�, �� �Է�\n");
	scanf_s("%d %d", &h, &m);
	h %= 24; //h %= 24;
	m %= 60;
	m -= 45;
	if (m < 0)
	{
		h -= 1;
		m += 60;
		if (h < 0)
			h += 24;
	}
	printf("�˶��ð�: %d�� %d��\n", h, m);

	return 0;
}