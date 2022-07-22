#include<stdio.h>

int main(){

	for (char c = 'A'; c <= 'Z'; c++)
		printf("%c", c);
	printf("\n");
	for (char c = 'a'; c <= 'z'; c++)
		printf("%c", c);
	printf("\n");
	for (char c = 'A'; c <= 'z'; c++)
	{
		if (c <= 'Z' || c >= 'a')
			printf("%c", c);
	}

	return 0;
}