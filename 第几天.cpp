#include<stdio.h>

int main(void)
{
	int y=0,m=0,d=0,sum=0;
	scanf("%d-%d-%d",&y,&m,&d);
	int n[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<m;i++)
	{
		sum+=n[i];
	}
	sum+=d;
	if((y%400==0) || (y%100!=0 && y%4==0))
	{
		if(m>2)
		sum+=1;
	}
	printf("%d\n",sum);
	return 0;
}
