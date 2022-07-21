#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num, i, count, loto[7] = { 0 };

// 로또번호 출력.
lotoNum() {

	for (i = 0; i < 7; i++)
	{
		if (i != 6)
			printf("%2d, ", loto[i]);
		else
			printf("%2d(보너스)", loto[i]);
	}
}

// 나왔던 번호가 나오면 다시 뽑기.
int second() {

	num = rand() % 45 + 1;
	for (int ip = 0; loto[ip] != 0; ip++)
	{
		if (loto[ip] == num)
		{
			second();
		}
	}
	return num;
}

// 조건 미만족시 처음부터 다시. 마지막 번호는 조건에 고려 안함.
void first() {

	for (i = 0; i < 7; i++)
	{
		num = second();

		// 마지막 번호를 제외하고 낮은 번호부터 배열.
		if (i != 6)
		{
			for (int ip = 0; loto[ip] != 0; ip++)
			{
				if (num < loto[ip])
				{
					for (int ii = i; ii > ip; ii--)
						loto[ii] = loto[ii - 1];
					loto[ip] = num;
					break;
				}
			}
		}
		if (loto[i] == '\0')
			loto[i] = num;
	}
	// 조건1. 번호의 끝자리가 3 혹은 7이 1개 미만이면 처음부터 다시.
	for (count = 0, i = 0; i < 6; i++)
	{
		if (loto[i] == 3 || loto[i] == 13 || loto[i] == 23 || loto[i] == 33 || loto[i] == 43)
			count++;
		if (loto[i] == 7 || loto[i] == 17 || loto[i] == 27 || loto[i] == 37)
			count++;
	}
	if (count < 1)
	{
		lotoNum();
		printf("는 끝자리가 3 혹은 7이 1개 미만입니다. 다시!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// 조건2. 번호 중 짝수와 홀수의 개수가 3:3이 아니면 처음부터 다시.
	for (count = 0, i = 0; i < 6; i++)
	{
		if (loto[i] % 2 == 0)
			count++;
	}
	if (count != 3)
	{
		lotoNum();
		printf("는 번호 중 짝수와 홀수의 개수가 3:3이 아닙니다. 다시!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// 조건3. 번호의 합이 100 미만이거나 172 초과이면 처음부터 다시.
	for (count = 0, i = 0; i < 6; i++)
		count += loto[i];
	if (count < 100 || count > 172)
	{
		lotoNum();
		printf("는 번호의 합이 100 미만이거나 172 초과입니다. 다시!\n");
		for (i = 0; i < 7; i++)
			loto[i] = 0;
		first();
		return 0;
	}

	// 조건4. 번호가 3개 이상 연속되면 처음부터 다시.
	for (i = 0; i < 4; i++)
		if (loto[i] + 1 == loto[i + 1] && loto[i] + 2 == loto[i + 2])
		{
			lotoNum();
			printf("는 번호가 3개 이상 연속됩니다. 다시!\n");
			for (i = 0; i < 7; i++)
				loto[i] = 0;
			first();
			return 0;
		}

	printf("\n");
	lotoNum();
	printf("가 좋을 것 같습니다!\n");
	return 0;
}

// 1. 난수 1~45 6+1개 로또 / 파일, 실행결과캡쳐화면, ppt, 순서도를 zip로 제출
int main() {

	srand(time(NULL));
	first();
	return 0;
}