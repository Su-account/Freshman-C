#include<stdio.h>
#include<string.h>

#define N 100

typedef struct score
{
	char ID[15], name[25];
	int a, b, c;

}S;

int main(void)
{
	int n = 0, i = 0, find = 0;
	char num[15];
	scanf("%d", &n);
	S arr[N];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", arr[i].ID, arr[i].name, &arr[i].a, &arr[i].b, &arr[i].c);
	}
	getchar();
	scanf("%s", num);
	for (i = 0; i < n; i++)
	{
		if (strcmp(arr[i].ID, num) == 0)
		{
			find = 1;
			break;
		}
	}
	if (find == 1)
	{
		for (int j = i + 1; j < n; j++)
		{
			arr[i] = arr[j];
		}
		for (i = 0; i < n-1; i++)
		{
			for (int j = i + 1; j <n-1; j++)
			{
				if (strcmp(arr[i].ID, arr[j].ID) > 0)
				{
					S tem;
					tem = arr[i];
					arr[i] = arr[j];
					arr[j] = tem;
				}
			}
		}
		for (i = 0; i < n - 1; i++)
		{
			printf("%s %s %d %d %d\n", arr[i].ID, arr[i].name, arr[i].a, arr[i].b, arr[i].c);
		}
	}
	else
		printf("error!\n");
	return 0;
}
