#include<stdio.h>

int main(void)
{
	int m=0,n=0,k=0,l=0;
	scanf("%d%d",&m,&n);
	double a[m][n];//题目是输入实数！！！ 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}	
			for(k=0;k<n;k++)
		{
			double sum=0;
			for(l=0;l<m;l++)
			{
				sum+=a[l][k];
			}
			printf("%.2lf ",sum/m);
		}
		
	return 0;
}
