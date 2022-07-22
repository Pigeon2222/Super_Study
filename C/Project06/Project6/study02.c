#include<stdio.h>

int main() {

	int a = 10;
	int* ptr_a = &a;
	(*ptr_a)++; //*ptr_a = 11; //변수 a의 값이 바뀜
	printf("%d\n", *ptr_a); //변수 a에 저장된 것이 출력됨
	printf("%d\n", a);

	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i - 1] = i;
	int numbers[5] = { 10,20,30,40,50 };
	printf("%d %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2],
		numbers[3], numbers[4]);

	int* ptr = stu_numbers;
	printf("\n%d\n", stu_numbers[50]); //원랜 51
	ptr[50] = 1000;
	printf("\n%d\n", stu_numbers[50]); //근데 1000으로 바뀜
	printf("[2]번째(세번째) 값 변경하기\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	printf("\n%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2],
		*(stu_numbers + 2));
	int my_nums[5] = { 50, 60, 70, 80, 90 };
	ptr = my_nums;
	printf("%d", ptr[2]); //70
	// stu_numbers = my_nums; //포인터 상수라서 안 된다. stu_numbers는 딴 데 가르킬 수 없다.

	// lld = long long 타입
	// &a = a의 주소

	return 0;
}