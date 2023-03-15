#include<stdio.h>

int main(void)
{
	int a[1000000],b[1000000],m=0,n=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++) 
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}

	int c[2000000],t=m+n;
	int j=m-1,k=0;
	for(int i=0;i<t;i++)
	{
		if(a[j]>0&&k<n)
		{
			if(a[j]>b[k])
			{
				printf("%d ",a[j]);
				j--;
			}
			
			else if(a[j]<b[k])
			{
				printf("%d ",b[k]);
				k++;
			}
			else
			{
				printf("%d %d ",a[j],b[k]);
				j--;
				k++;
			}
			
		}
		else if(j>=0)
		{
			for(int i=k;i>=0;i--,j--)
			{
				printf("%d ",a[i]);
			}
		}
		else if(k<n)
		{
			for(int i=k;i<n;i++,k++)
			{
				printf("%d ",b[i]);
			}
		}
	}
	
	return 0;
}
