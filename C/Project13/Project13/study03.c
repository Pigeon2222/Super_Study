#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle; //struct ���� ����

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

	//1. �簢�� 5�� �Է¹ް� ���̰� ���� ���� �簢���� width�� height�� ����϶�.
	//   ��, width�� height�� ������ ���� ����.
	re rea[6];
	for (int i = 0; i < 5; i++) {
		printf("%d��° �Է�", i + 1);
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

	//2. Student ����ü�� typeddef�� ���� Stu ��� Ÿ������ ����� 5���� �л��� �Է¹ް�,
	//   ������ ��� ������ ���� ���� �л��� ��հ��� �� ��° �л����� ���.
	stu st[6];
	for (int i = 0; i < 5; i++) {
		printf("%d��° �Է�", i + 1);
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
