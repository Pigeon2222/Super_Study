#include<stdio.h>

int main() {

	int a, b, c;
	scanf_s("%d", &c);
	a = c;
	b = c;
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &c);
		c > a ? a = c : 0;
		c < b ? b = c : 0;
	}
	printf("큰수: %d\n", a);
	printf("작은수: %d\n", b);

	char a1[100], b1[100];
	rewind(stdin);
	gets(a1);
	gets(b1);
	for (int i = 0; i < 100; i++) {
		if (a1[i] != b1[i])
		{
			printf("다름");
			break;
		}
		if (a1[i] == '\0', b1[i] == '\0')
		{
			printf("같음");
			break;
		}
	}
	// a = 100;
	// int* test = (int*)malloc(sizeof(int) * a);
	// int test[a];
	// int size = sizeof(numbers) / sizeof(int);
	return 0;
}