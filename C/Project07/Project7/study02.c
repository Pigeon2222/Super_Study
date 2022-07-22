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
				c++; //c를 a~z 배열로 주고 값을 저장한뒤 후에 불러오면 연산량을 수만배 줄일 수 있음
		if (c != 0)
		{
			printf("'%c'는 %d글자입니다.\n", b, c);
			c = 0;
		}
	}

	for (b = 'a'; b <= 'z'; b++)
		for (i = 0; a[i] != NULL; i++)
			if (a[i] == b)
			{
				printf("'%c'는 %d번째에서 처음 등장합니다.\n", b, i + 1);
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