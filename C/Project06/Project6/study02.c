#include<stdio.h>

int main() {

	int a = 10;
	int* ptr_a = &a;
	(*ptr_a)++; //*ptr_a = 11; //���� a�� ���� �ٲ�
	printf("%d\n", *ptr_a); //���� a�� ����� ���� ��µ�
	printf("%d\n", a);

	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i - 1] = i;
	int numbers[5] = { 10,20,30,40,50 };
	printf("%d %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2],
		numbers[3], numbers[4]);

	int* ptr = stu_numbers;
	printf("\n%d\n", stu_numbers[50]); //���� 51
	ptr[50] = 1000;
	printf("\n%d\n", stu_numbers[50]); //�ٵ� 1000���� �ٲ�
	printf("[2]��°(����°) �� �����ϱ�\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	printf("\n%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2],
		*(stu_numbers + 2));
	int my_nums[5] = { 50, 60, 70, 80, 90 };
	ptr = my_nums;
	printf("%d", ptr[2]); //70
	// stu_numbers = my_nums; //������ ����� �� �ȴ�. stu_numbers�� �� �� ����ų �� ����.

	// lld = long long Ÿ��
	// &a = a�� �ּ�

	return 0;
}