#include<stdio.h>

int main() {

	char name[100];
	printf("이름은?");
	scanf_s("%s", name, sizeof(name));
	printf("내 이름은 %s입니다.\n", name);
	rewind(stdin);
	char mbti[100];
	printf("mbti?");
	gets(mbti);
	printf("내 mbti는 %s입니다/\n", mbti);

	printf("당신의 기분은?");
	char feel[10];
	gets(feel);
	printf("당신의 mbti는?");
	char MBTI[10];
	gets(MBTI);
	printf("당신의 혈액형은?");
	char btype[10];
	scanf_s("%s", &btype, 10);
	printf("당신의 키는?");
	double cm = 0;
	scanf_s("%lf", &cm, 10);
	printf("당신의 나이는?");
	int age = 0;
	scanf_s("%d", &age, 10);
	printf("저의 기분은 %s, MBTI는 %s, 혈액형은 %s, 키는 %.2lf, 나이는 %d입니다.\n",
		feel, MBTI, btype, cm, age);

	int aa;
	printf("초는?");
	scanf_s("%d", &aa);
	printf("%d분 %d초\n", aa / 60, aa % 60);

	int xx, bb;
	printf("x=");
	scanf_s("%d", &xx);
	printf("b=");
	scanf_s("%d", &bb);
	printf("2x+b=%d\n", 2 * xx + bb);

	int aaa;
	printf("a=");
	scanf_s("%d", &aaa);
	printf("(x+a)(x+b)=%d\n", (xx + aaa) * (xx + bb));

	int ee, ff;
	scanf_s("%d %d", &ee, &ff);
	printf("%d\n", ee * ff % 10);
	printf("%d\n", (ee * ff % 100) / 10);
	printf("%d\n", (ee * ff % 1000) / 100);
	printf("%d\n", ee * ff);

	return 0;

	//scanf_s는 띄어쓰기 이후 생략, gets는 띄어쓰기 이후도 포함
}