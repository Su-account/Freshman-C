#include<stdio.h> 
#define N 30

int main(void)
{
	int n=0,i=0,j=0;
	scanf("%d",&n);
	int a[N][N];
	a[0][0]=a[1][0]=a[1][1]=1;
	for(i=2;i<n;i++)
	a[i][0]=a[i][i]=1;
	for(i=2;i<n;i++)
	for(j=1;j<i;j++)
	a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
