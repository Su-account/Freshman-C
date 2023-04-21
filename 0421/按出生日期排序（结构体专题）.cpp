#include<stdio.h>
typedef struct student
{
	char name[21];
	int y,m,d;
}S;
int main(void)
{
	int n=0;
	scanf("%d",&n);
	S arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s%d%d%d",arr[i].name ,&arr[i].y ,&arr[i].m ,&arr[i].d );
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			S tem;
			if(arr[i].m >arr[j].m )
			{
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;
			}
			else if(arr[i].m ==arr[j].m&&arr[i].d >arr[j].d )
			{
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		
		printf("%s %d-%02d-%02d\n",arr[i].name ,arr[i].y ,arr[i].m ,arr[i].d );
	}
	return 0;
}
