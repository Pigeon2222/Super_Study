#include<stdio.h>

int main() {

	int age;
	scanf_s("%d", &age);
	if (age < 0)
		printf("음수\n");
	switch (age/10)
	{
	case 0:
		printf("응애응애\n");
		break;
	case 1:
		printf("급식먹는 친구들\n");
		break;
	case 2:
		printf("청춘\n");
		break;
	case 3:
		printf("일잘러\n");
		break;
	case 4:
		printf("관리자\n");
		break;
	default:
		printf("멋쟁이\n");
	}

	float po;
	scanf_s("%f", &po);
	po < 0 ? printf("퇴학") :
		po < 1 ? printf("F") :
		po < 2 ? printf("D") :
		po < 3 ? printf("C") :
		po < 4 ? printf("B") :
		po < 4.5 ? printf("A") :
		po == 4.5 ? printf("A+") : printf("교수");

	return 0;
}