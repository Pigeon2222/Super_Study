#include<stdio.h>

int main()
{
	char start[2048] = "1";
	for (int i = 1; i <= 20; i++)
	{
		printf("%d��° : %s\n", i, start);
		char end[2048] = { NULL }; //�а� ���Կ� �־ ������
		char num = start[0]; //num : �д� ����
		int count = 0; //���� ���� ������ ����
		int k = 0; //end�� ���� ä������ �� ��(������ų ��)
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j]) //�д� ���ڰ� ���� �� 
			{
				end[k] = num;
				k++;
				end[k] = count + '0';
				k++;
				num = start[j];
				count = 1;
			}
			else //���� �� 
			{
				count++;
			}
		}
		end[k] = num;
		k++;
		end[k] = count + '0';
		k++;
		int c = 0;
		for (c = 0; end[c] != NULL; c++)
		{
			start[c] = end[c]; //end�� �ִ� �� start�� �ű涧 strcpy��� �Լ� ��� ����
		}
		start[c] = NULL; //���κ��� NULL�� ����
	}

	char arr1[2048] = { NULL };
	char arr2[2048] = { NULL };
	int idx = 0;
	int cnt = 1;
	arr1[0] = '1';
	printf("1��° : %c \n", arr1[0]);
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; arr1[j] != NULL; j++)
		{
			if (arr1[j] == arr1[j + 1])
				cnt++;
			else
			{
				arr2[idx] = arr1[j];
				arr2[idx + 1] = cnt + '0';
				cnt = 1;
				idx += 2;
			}
		}
		printf("%d��° : ", i + 2);
		for (int j = 0; j < idx; j++)
		{
			arr1[j] = arr2[j];
			printf("%c ", arr1[j]);
		}
		idx = 0;
		printf("\n");
	}

	return 0;
}