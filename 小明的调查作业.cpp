#include<iostream> 
#include<algorithm>
using namespace std;

int main(void)
{
	int n=0,arr[1000],count=0;
	scanf("%d",&n);
	int i=0; 
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sort(arr,arr+n);
	for(int k=0;k<n;k++)
	{
		if(arr[k]==arr[k+1])
		{
				arr[k]=0;
				count++;
		}
	
	}
	printf("%d\n",n-count);
	for(int k=0;k<n;k++)
	{
		if(arr[k]!=0)
		printf("%d ",arr[k]);
	}
	return 0;
}
