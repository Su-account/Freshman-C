#include<stdio.h>

int main(void)
{
	int n=0,arr[100]={0};
	
	while(scanf("%d",&n),n>=0)
	{
		arr[n]++;
	}
	int max=arr[0];
	for(int i=1;i<100;i++)
	{
		if(max<=arr[i])
		max=arr[i];
	}
	for(int k=0;k<100;k++)
	{
		if(arr[k]==max)
		printf("%d ",k);
	}
	
	return 0;
}
