#include<stdio.h> 
#include<math.h>

int Is_prime(int n)
{
	int k=0;
	k=(int)sqrt(n);
	for(int i=2;i<=k;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int check(int n)
{
	if(n>=10&&n<=99&&n!=11 || n>=1000&&n<100000)
	return 0;
	if(n>=100000&&n<1000000||n>=10000000&&n<100000000)
	return 0;
	int arr[20],b=1;
	while(n>0)
	{
		arr[b]=n%10;
		n/=10;
		b++;
	}
	for(int i=1;i<b/2;i++)
	{
		if(arr[i]!=arr[b-1])
		return 0;
	}
	return 1;
}

int main(void)
{
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	if(a==2)
	printf("2\n");
	if(a%2==0)
	a++;
	int i=0;
	for( i=a;i<=b;i+=2)
	{
		if(check(i))
		{
			if(Is_prime(i))
			printf("%d\n",i);
		}
	}
	return 0;
}
