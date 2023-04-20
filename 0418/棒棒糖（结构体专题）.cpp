#include<stdio.h> 
#define M 10

typedef struct store
{
	double price;
	int num;
}S;
int main(void)
{
	int n=0,m=0, i=0;
	double sum=0;
	scanf("%d",&n);
	scanf("%d",&m);
	S arr[M];
	for(i=0;i<m;i++)
	{
		scanf("%lf%d",&arr[i].price ,&arr[i].num );
	}
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(arr[i].price >arr[j].price )
			{
				S tem;
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;
			}
		}
	}
	if(n<arr[0].num )
	{
			printf("%.2lf\n",sum);
			return 0;
	}
	for(int i=0;;i++)
	{
		if(n>arr[i].num )
		{
			sum+=arr[i].num *arr[i].price ;
			n-=arr[i].num ;
		}
		else
		{
			sum+=n*arr[i].price ;	
			break;
		}
	}
	printf("%.2lf\n",sum);
	return 0;
}
