#include<stdio.h>

int main(void)
{
	int k=0,sum=0,c=0;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(c==k)
			break;
			sum+=i;
			c++;
			
		}
	}
	printf("%d\n",sum); 
	return 0;
}
