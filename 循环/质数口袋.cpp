#include<stdio.h>
#include<math.h>

int Is_prime(int n)
{
	int k=0;
	k=(int)sqrt(n);
	for(int i=2;i<=k;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
	
}
int main(void)
{
	int l=0,a=0,sum=0,b=0;
	scanf("%d",&l);
	for(int i=2;;i++)
	{
		if(Is_prime(i))
		{
			sum+=i;
			 
			if(sum>l)
			break;
			printf("%d\n",i);
			b++;
		}	
	}
	printf("%d\n",b);
	return 0;
}
