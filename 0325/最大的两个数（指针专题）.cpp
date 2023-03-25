#include<stdio.h>
void LargestTow(int a[],int n,int *pfirst,int *psecond)
{
	int*p=a;
	for(int*i=a;i<p+n;i++)
	{
		for(int *j=i+1;j<p+n;j++)
		{
			if(*i<*j)
			{
				int max=*j;
				*j=*i;
				*i=max;
			}
		}
	}
	pfirst=a;
	psecond=&a[1];
	printf("%d %d\n",*pfirst,*psecond);
}
int main(void)
{
	int n=0,arr[1000];
	int *pfirst,*psecond;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	LargestTow(arr,n,pfirst,psecond);
	return 0;
}
