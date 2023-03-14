#include<stdio.h>

int main(void)
{
	int n=0,s=0;
	scanf("%d",&n);
	while(n)
	{
		s=s*10+n%10;
		n/=10; 
	}
	printf("%d\n",s);
	return 0;
}
