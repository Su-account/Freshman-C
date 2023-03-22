#include<stdio.h> 

int main(void)
{
	char a[200];
	double w=0,p=0,sum=0;
	while(scanf("%*s%lf%lf",&w,&p)!=EOF)
	{
		sum+=w*p;
	}
	printf("%.1lf",sum);
	
	return 0;
 } 
