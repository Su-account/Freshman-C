#include<stdio.h> 
#define N 5
#include<string.h>

typedef struct vote
{
	char name[15];
	int vote;
}R;

int main(void)
{
	int n=0;
	scanf("%d",&n);
	R arr[N]={{"zhang",0},{"wang",0},{"zhao",0},{"liu",0},{"miao",0}};
	for(int i=0;i<n;i++)
	{
		char tem[15];
		scanf(" %s",tem);
		for(int j=0;j<N;j++)
		{
			if(strcmp(tem,arr[j].name )==0)
			arr[j].vote ++;
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%s %d\n",arr[i].name ,arr[i].vote );
	}
	
	return 0;
}
