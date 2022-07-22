#include<stdio.h>

int main()
{
	char start[2048] = "1";
	for (int i = 1; i <= 20; i++)
	{
		printf("%d번째 : %s\n", i, start);
		char end[2048] = { NULL }; //읽고 말함에 있어서 누적용
		char num = start[0]; //num : 읽는 숫자
		int count = 0; //내가 읽은 문자의 개수
		int k = 0; //end에 문자 채워넣을 때 씀(누적시킬 때)
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j]) //읽는 숫자가 변할 때 
			{
				end[k] = num;
				k++;
				end[k] = count + '0';
				k++;
				num = start[j];
				count = 1;
			}
			else //같을 때 
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
			start[c] = end[c]; //end에 있는 걸 start로 옮길때 strcpy라는 함수 사용 가능
		}
		start[c] = NULL; //끝부분을 NULL로 봉합
	}

	char arr1[2048] = { NULL };
	char arr2[2048] = { NULL };
	int idx = 0;
	int cnt = 1;
	arr1[0] = '1';
	printf("1번째 : %c \n", arr1[0]);
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
		printf("%d번째 : ", i + 2);
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