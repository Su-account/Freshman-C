#include<stdio.h>

int main(void) 
{
	int n=0;
	scanf("%d",&n);
	int a=1,b=1;
	if(1==n||2==n)
	printf("%.2lf\n",1*1.0);
	int c=0,i=0;
	for( i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%.2lf\n",c*1.0);
	return 0;
}
