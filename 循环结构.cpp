//#include<stdio.h>
//
//int main(void)
//{
//	int n=0,k=0,count1=0,count2=0;
//	scanf("%d %d",&n,&k);
//	double sum1=0,sum2=0;
//	for(int i=1;i<=n;i++)
//	{
//		if(i%k==0)
//		{
//			sum1+=i;
//			count1++;
//		}
//		
//		else
//		{
//			sum2+=i;
//			count2++;
//		}
//		
//	}
//	printf("%.1lf %.1lf\n",sum1/count1,sum2/count2);
//	return 0;
//}
//#include<stdio.h> 
//
//int main(void)
//{
//	int a=0,i=0;
//	scanf("%d",&a);
//	
//	for(i=1;;)
//	{
//		if(1==a)
//		{
//			printf("%d\n",i);
//			break;
//		}
//		a=a/2;
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
double  prim(int n)
{
	double end=1;
	for(int i=1;i<=n;i++)
	{
		end*=i;
	}
	return end;
}

int main(void)
{
	int n=0,i=1;
	scanf("%d",&n);
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=prim(i);
	}
	printf("%.0lf\n",sum);
	return 0;
}
