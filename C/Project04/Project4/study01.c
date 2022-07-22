#include<stdio.h>

int main() {

#pragma region 태어난 월별 계절
	printf("태어난 월 입력 : ");
	int M;
	scanf_s("%d", &M);
	if (M < 1 || M>12)
		printf("오류입니다.\n");
	else if (M < 3 || M == 12)
		printf("겨울\n");
	else if (M < 6)
		printf("봄\n");
	else if (M < 9)
		printf("여름\n");
	else if (M < 12)
		printf("가을\n");
#pragma endregion

#pragma region 가위바위보
	printf("1은 무엇을 낼래? : ");
	int k1, k2;
	scanf_s("%d", &k1);
	printf("2는 무엇을 낼래? : ");
	scanf_s("%d", &k2);

	k1 %= 3;
	k2 = k2 % 3 * 3;

	int k = k1 + k2;
	switch (k) {
	case 0:
		printf("가위:가위, 비김!\n");
		break;
	case 1:
		printf("바위:가위, 1의 승리!\n");
		break;
	case 2:
		printf("보:가위, 2의 승리!\n");
		break;
	case 3:
		printf("가위:바위, 2의 승리!\n");
		break;
	case 4:
		printf("바위:바위, 비김!\n");
		break;
	case 5:
		printf("보:바위, 1의 승리!\n");
		break;
	case 6:
		printf("가위:보, 1의 승리!\n");
		break;
	case 7:
		printf("바위:보, 2의 승리!\n");
		break;
	case 8:
		printf("보:보, 비김!\n");
		break;
	default:
		printf("오류! 정수를 입력하세요!\n");
		break;
	}

	/*
	printf("가위 바위 보? (플레이어1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("가위 바위 보? (플레이어2)");
	scanf_s("%d", &p2);
	p1 %= 3;
	p2 %= 3;
	switch (p1)
	{
	case 0:
		printf("p1: 가위\n");
		switch (p2)
		{
		case 0:
			printf("p2: 가위\n");
			printf("비김\n");
			break;
		case 1:
			printf("p2: 바위\n");
			printf("짐\n");
			break;
		case 2:
			printf("p2: 보\n");
			printf("이김\n");
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

#pragma region 태어난 연도별 띠

	printf("몇년생?");
	int year;
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		printf("원숭이\n");
		break;
	default:
		break;
	}
	if (year == 0)
		printf("원숭이\n");

	printf("태어난 연도를 입력 : ");
	int y;
	scanf_s("%d", &y);
	y %= 12;

	enum 십이지신
	{
		쥐=4,소,호랑이,토끼=0,용
	};

	switch (y) {
	case 0:
		printf("원숭이띠!\n");
		break;
	case 1:
		printf("닭띠!\n");
		break;
	case 2:
		printf("개띠!\n");
		break;
	case 3:
		printf("돼지띠!\n");
		break;
	case 4:
		printf("쥐띠!\n");
		break;
	case 5:
		printf("소띠!\n");
		break;
	case 6:
		printf("호랑이띠!\n");
		break;
	case 7:
		printf("토끼띠!\n");
		break;
	case 8:
		printf("용띠!\n");
		break;
	case 9:
		printf("뱀띠!\n");
		break;
	case 10:
		printf("말띠!\n");
		break;
	case 11:
		printf("양띠!\n");
		break;
	default:
		printf("오류! 정수를 입력하세요!\n");
		break;
	}
#pragma endregion

	return 0;

	/*
	f5 : 디버그까지 이동
	f10 : 1줄씩 이동
	댕글링 포인터, 자료구조, 링크드 리스트

	컨트롤 + a : 전체 선택
	컨트롤 + k, 컨트롤 + f : 정렬
	컨트롤 + k, 컨트롤 + c : 주석
	컨트롤 + k, 컨트롤 + u : 주석 해제
	 
	#define : 선언
	const : 상수

	탭: 들여쓰기
	시프트+탭 : 돌리기
	
	enum 십이지신 {쥐,호랑이} //열거형, 숫자들에게 이름을 붙임, 0혹은 지정한 숫자부터 오름차로 숫자 부여
	*/
}