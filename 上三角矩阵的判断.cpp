#include<stdio.h>
int IsUpperTriMatrix(int a[10][10], int n);
int main(void)
{
	int n=0,a[10][10]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int m=IsUpperTriMatrix(a,n);
	if(m)
	printf("YES\n");
	else
	printf("NO\n");
	
	return 0;
}
int IsUpperTriMatrix(int a[10][10], int n)
{
	int p=1;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i][j]!=0)
			p=0;
		}
	}
	return p;
}
