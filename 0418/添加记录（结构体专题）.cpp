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
	int n = 0, i = 0;
	scanf("%d", &n);
	S arr[N];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", arr[i].ID, arr[i].name, &arr[i].a, &arr[i].b, &arr[i].c);
	}
	int t = i, find = 0;
	scanf("%s%s%d%d%d", arr[t].ID, arr[t].name, &arr[t].a, &arr[t].b, &arr[t].c);
	for (i = 0; i < n; i++)
	{
		if (strcmp(arr[i].ID, arr[t].ID) == 0)
		{
			printf("error!\n");
			find = 1;
			break;
		}
	}
	
	if(find==0)
	{
		for (i = 0; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
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
		for (i = 0; i <= n; i++)
		{
			printf("%s %s %d %d %d\n", arr[i].ID, arr[i].name, arr[i].a, arr[i].b, arr[i].c);
		}
	}
	return 0;
}
