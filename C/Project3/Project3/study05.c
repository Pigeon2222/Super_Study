#include<stdio.h>

int main() {

	int rcp = 0;
	if (rcp == 0)
		printf("가위");
	else if (rcp == 1)
		printf("바위");
	else if (rcp == 2)
		printf("보");
	else
		printf("기타");

	switch (rcp)
	{
	case 0:
		printf("\n가위");
		break;
	case 1:
		printf("\n바위");
		break;
	case 2:
		printf("\n보");
		break;
	default:
		printf("\n기타");
		break;
	}

	return 0;
}