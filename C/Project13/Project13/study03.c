#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle; //struct 생략 가능

int Rec(Rectangle a) {
	return a.width * a.height;
}

struct rectan
{
	int w;
	int h;
}typedef re;

int reat(re a) {
	return a.w * a.h;
}

struct student
{
	double k;
	double y;
	double s;
}typedef stu;

std(stu st) {
	return (st.k + st.y + st.s) / 3;
}

int main()
{
	Rectangle a1;
	a1.width = 3;
	a1.height = 4;
	printf("%d\n", Rec(a1));

	Rectangle a2;
	scanf_s("%d %d", &a2.width, &a2.height);
	printf("%d\n", Rec(a2));

	//1. 사각형 5개 입력받고 넓이가 가장 넓은 사각형의 width와 height를 출력하라.
	//   단, width나 height가 음수인 것은 제외.
	re rea[6];
	for (int i = 0; i < 5; i++) {
		printf("%d번째 입력", i + 1);
		scanf_s("%d %d", &rea[i].w, &rea[i].h);
	}
	rea[5] = rea[0];
	int wh;
	for (int i = 0; i < 5; i++) {
		if (rea[i].w < 0 || rea[i].h < 0)
			continue;
		wh = reat(rea[5]);
		wh < reat(rea[i]) ? rea[5].w = rea[i].w, rea[5].h = rea[i].h : 0;
	}
	if (rea[5].w > 0 || rea[5].h > 0)
		printf("%d %d\n", rea[5].w, rea[5].h);

	//2. Student 구조체를 typeddef를 통해 Stu 라는 타입으로 만들고 5명의 학생을 입력받고,
	//   국영수 평균 점수가 가장 높은 학생의 평균값과 몇 번째 학생인지 출력.
	stu st[6];
	for (int i = 0; i < 5; i++) {
		printf("%d번째 입력", i + 1);
		scanf_s("%lf %lf %lf", &st[i].k, &st[i].y, &st[i].s);
	}
	int aa = 1;
	st[5] = st[0];
	double stt;
	for (int i = 0; i < 5; i++) {
		stt = std(st[5]);
		if (stt < std(st[i]))
		{
			st[5] = st[i];
			aa = i + 1;
		}
	}
	printf("%.lf %d", stt, aa);

	return 0;
}
