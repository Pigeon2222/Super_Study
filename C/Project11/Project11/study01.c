#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num, i, count, loto[7] = { 0 };

// �ζǹ�ȣ ���.
lotoNum() {

	for (i = 0; i < 7; i++)
	{
		if (i != 6)
			printf("%2d, ", loto[i]);
		else
			printf("%2d(���ʽ�)", loto[i]);
	}
}

// ���Դ� ��ȣ�� ������ �ٽ� �̱�.
int second() {

	num = rand() % 45 + 1;
	for (int ip = 0; loto[ip] != 0; ip++)
	{
		if (loto[ip] == num)
		{
			second();
		}
	}
	return num;
}

// ���� �̸����� ó������ �ٽ�. ������ ��ȣ�� ���ǿ� ��� ����.
void first() {

	for (i = 0; i < 7; i++)
	{
		num = second();

		// ������ ��ȣ�� �����ϰ� ���� ��ȣ���� �迭.
		if (i != 6)
		{
			for (int ip = 0; loto[ip] != 0; ip++)
			{
				if (num < loto[ip])
				{
					for (int ii = i; ii > ip; ii--)
						loto[ii] = loto[ii - 1];
					loto[ip] = num;
					break;
				}
			}
		}
		if (loto[i] == '\0')
			loto[i] = num;
	}
	// ����1. ��ȣ�� ���ڸ��� 3 Ȥ�� 7�� 1�� �̸��̸� ó������ �ٽ�.
	for (count = 0, i = 0; i < 6; i++)
	{
		if (loto[i] == 3 || loto[i] == 13 || loto[i] == 23 || loto[i] == 33 || loto[i] == 43)
			count++;
		if (loto[i] == 7 || loto[i] == 17 || loto[i] == 27 || loto[i] == 37)
			count++;
	}
	if (count < 1)
	{
		lotoNum();
		printf("�� ���ڸ��� 3 Ȥ�� 7�� 1�� �̸��Դϴ�. �ٽ�!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// ����2. ��ȣ �� ¦���� Ȧ���� ������ 3:3�� �ƴϸ� ó������ �ٽ�.
	for (count = 0, i = 0; i < 6; i++)
	{
		if (loto[i] % 2 == 0)
			count++;
	}
	if (count != 3)
	{
		lotoNum();
		printf("�� ��ȣ �� ¦���� Ȧ���� ������ 3:3�� �ƴմϴ�. �ٽ�!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// ����3. ��ȣ�� ���� 100 �̸��̰ų� 172 �ʰ��̸� ó������ �ٽ�.
	for (count = 0, i = 0; i < 6; i++)
		count += loto[i];
	if (count < 100 || count > 172)
	{
		lotoNum();
		printf("�� ��ȣ�� ���� 100 �̸��̰ų� 172 �ʰ��Դϴ�. �ٽ�!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// ����4. ��ȣ�� 3�� �̻� ���ӵǸ� ó������ �ٽ�.
	for (i = 0; i < 4; i++)
		if (loto[i] + 1 == loto[i + 1] && loto[i] + 2 == loto[i + 2])
		{
			lotoNum();
			printf("�� ��ȣ�� 3�� �̻� ���ӵ˴ϴ�. �ٽ�!\n");
			for (i = 0; i < 7; i++)
				loto[i] = 0;
			first();
			return 0;
		}

	printf("\n");
	lotoNum();
	printf("�� ���� �� �����ϴ�!\n");
	return 0;
}

// 1. ���� 1~45 6+1�� �ζ� / ����, ������ĸ��ȭ��, ppt, �������� zip�� ����
int main() {

	srand(time(NULL));
	first();
	return 0;
}