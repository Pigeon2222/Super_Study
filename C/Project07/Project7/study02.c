#include<stdio.h>

int main() {

	char a[1024] = "0";
	gets(a);
	int i, b, c;
	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
	printf("%s\n", a);
	for (b = 'a', c = 0; b <= 'z'; b++)
	{
		for (i = 0; a[i] != NULL; i++)
			if (a[i] == b)
				c++; //c�� a~z �迭�� �ְ� ���� �����ѵ� �Ŀ� �ҷ����� ���귮�� ������ ���� �� ����
		if (c != 0)
		{
			printf("'%c'�� %d�����Դϴ�.\n", b, c);
			c = 0;
		}
	}

	for (b = 'a'; b <= 'z'; b++)
		for (i = 0; a[i] != NULL; i++)
			if (a[i] == b)
			{
				printf("'%c'�� %d��°���� ó�� �����մϴ�.\n", b, i + 1);
				break;
			}

	gets(a);
	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		else if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
	printf("%s\n", a);

	gets(a);
	char d[1024] = "0";
	b = 0;
	while (a[b] != NULL)
		b++;
	for (i = 0; i < b; i++)
		d[i] = a[b - i - 1];
	d[i + 1] = NULL;
	printf("%s\n", d);

	return 0;
}