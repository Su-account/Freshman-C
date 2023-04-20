#include<stdio.h>
typedef struct add
{
	int x,y;
}point;
int main(void)
{
	int n=0;
	scanf("%d",&n);
	point arr[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&arr[i].x ,&arr[i].y );
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			point tem;
			if(arr[i].x < arr[j].x ) 
			{
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;	
			}
			else if(arr[i].x ==arr[j].x &&arr[i].y <arr[j].y )
			{
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;
			}
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("(%d,%d) ",arr[i].x ,arr[i].y );
		
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("(%d,%d) ",arr[i].x ,arr[i].y );
	}
	return 0;
}
