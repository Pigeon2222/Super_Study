#include<stdio.h>

int main() {

	int rcp = 0;
	if (rcp == 0)
		printf("����");
	else if (rcp == 1)
		printf("����");
	else if (rcp == 2)
		printf("��");
	else
		printf("��Ÿ");

	switch (rcp)
	{
	case 0:
		printf("\n����");
		break;
	case 1:
		printf("\n����");
		break;
	case 2:
		printf("\n��");
		break;
	default:
		printf("\n��Ÿ");
		break;
	}

	return 0;
}