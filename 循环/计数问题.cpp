#include<stdio.h> 
int count(int n,int x)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		int d=i;
		while(d!=0)
		{
			if(x==d%10)
			c++;
			d=d/10;
		}
	}
	return c;
}
int main(void)
{
	int n=0,x=0,c=0;
	scanf("%d%d",&n,&x);
	c=count(n,x);
	printf("%d\n",c);
	
	return 0;
}
