#include<stdio.h>
void psort( int *pa, int *pb,int *pc,int *pd)
{
	int *i=pa;
	for(i;i<=pd;i++)
	{
		for(int* j=i+1;j<=pd;j++)
		{
			if(*i<*j)
			{
				int max=0;
				max=*j;
				*j=*i;
				*i=max;
			}
		}
	}
}
int main(void)

{
	int arr[4]={0};
	for(int i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *pa=arr;
	psort(pa,pa+1,pa+2,pa+3);
	
	for(int i=0;i<4;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
