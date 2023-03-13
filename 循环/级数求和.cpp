//#include<stdio.h>
//int main(void)
//{
//	int k=0,n=0;
//	scanf("%d",&k);
//	double b=0;
//	for(n=1;;n++)
//	{
//		double c=1;
//		c=1.0/n; 
//		b+=c;
//		if(b>k)
//			break;
//	}
//		printf("%d\n",n);
//	return 0;
//}

//Лђеп

#include<stdio.h> 

int main(void)
{
	int k=0,n=0;
	scanf("%d",&k);
	for(double Sn=0;Sn<=k;++n,Sn+=1.0/n)
	;
	printf("%d\n",n);
	return 0;
}
