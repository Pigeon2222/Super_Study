#include<stdio.h>

int main() {
	char c;
	printf("내 기분은 오늘 +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("오늘 내 기분은 %c입니다.\n", c);
	rewind(stdin);
	scanf_s("%c", &c, 1);
	printf("기분= %c\n", c);

	rewind(stdin);
	printf("내 이름의 첫 글자는?");
	c = getchar();
	printf("%c\n", c);
	printf("내 이름의 끝 글자는?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	return 0;

	//rewind(stdin); : 버퍼공간 청소
	//getchar(); : 한 글자만 입력
}