#include<stdio.h>

int main() {

#pragma region �¾ ���� ����
	printf("�¾ �� �Է� : ");
	int M;
	scanf_s("%d", &M);
	if (M < 1 || M>12)
		printf("�����Դϴ�.\n");
	else if (M < 3 || M == 12)
		printf("�ܿ�\n");
	else if (M < 6)
		printf("��\n");
	else if (M < 9)
		printf("����\n");
	else if (M < 12)
		printf("����\n");
#pragma endregion

#pragma region ����������
	printf("1�� ������ ����? : ");
	int k1, k2;
	scanf_s("%d", &k1);
	printf("2�� ������ ����? : ");
	scanf_s("%d", &k2);

	k1 %= 3;
	k2 = k2 % 3 * 3;

	int k = k1 + k2;
	switch (k) {
	case 0:
		printf("����:����, ���!\n");
		break;
	case 1:
		printf("����:����, 1�� �¸�!\n");
		break;
	case 2:
		printf("��:����, 2�� �¸�!\n");
		break;
	case 3:
		printf("����:����, 2�� �¸�!\n");
		break;
	case 4:
		printf("����:����, ���!\n");
		break;
	case 5:
		printf("��:����, 1�� �¸�!\n");
		break;
	case 6:
		printf("����:��, 1�� �¸�!\n");
		break;
	case 7:
		printf("����:��, 2�� �¸�!\n");
		break;
	case 8:
		printf("��:��, ���!\n");
		break;
	default:
		printf("����! ������ �Է��ϼ���!\n");
		break;
	}

	/*
	printf("���� ���� ��? (�÷��̾�1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("���� ���� ��? (�÷��̾�2)");
	scanf_s("%d", &p2);
	p1 %= 3;
	p2 %= 3;
	switch (p1)
	{
	case 0:
		printf("p1: ����\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("���\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("��\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("�̱�\n");
			break;
		default:
			break;
		}
		break;
	case 1:
		break;
	}
	*/
#pragma endregion

#pragma region �¾ ������ ��

	printf("����?");
	int year;
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		printf("������\n");
		break;
	default:
		break;
	}
	if (year == 0)
		printf("������\n");

	printf("�¾ ������ �Է� : ");
	int y;
	scanf_s("%d", &y);
	y %= 12;

	enum ��������
	{
		��=4,��,ȣ����,�䳢=0,��
	};

	switch (y) {
	case 0:
		printf("�����̶�!\n");
		break;
	case 1:
		printf("�߶�!\n");
		break;
	case 2:
		printf("����!\n");
		break;
	case 3:
		printf("������!\n");
		break;
	case 4:
		printf("���!\n");
		break;
	case 5:
		printf("�Ҷ�!\n");
		break;
	case 6:
		printf("ȣ���̶�!\n");
		break;
	case 7:
		printf("�䳢��!\n");
		break;
	case 8:
		printf("���!\n");
		break;
	case 9:
		printf("���!\n");
		break;
	case 10:
		printf("����!\n");
		break;
	case 11:
		printf("���!\n");
		break;
	default:
		printf("����! ������ �Է��ϼ���!\n");
		break;
	}
#pragma endregion

	return 0;

	/*
	f5 : ����ױ��� �̵�
	f10 : 1�پ� �̵�
	��۸� ������, �ڷᱸ��, ��ũ�� ����Ʈ

	��Ʈ�� + a : ��ü ����
	��Ʈ�� + k, ��Ʈ�� + f : ����
	��Ʈ�� + k, ��Ʈ�� + c : �ּ�
	��Ʈ�� + k, ��Ʈ�� + u : �ּ� ����
	 
	#define : ����
	const : ���

	��: �鿩����
	����Ʈ+�� : ������
	
	enum �������� {��,ȣ����} //������, ���ڵ鿡�� �̸��� ����, 0Ȥ�� ������ ���ں��� �������� ���� �ο�
	*/
}