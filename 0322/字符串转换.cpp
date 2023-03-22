#include<stdio.h>
#include<string.h>

int main(void)
{
	char arr[100];
	int str[100],n=0,t=0,sum=0;
	gets(arr);
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		if(arr[i]>='0'&&arr[i]<='9')
		{
			str[n]=arr[i]-48;//注意一定要减去48 
			n++;
		}
	}
	for(int i=0;i<n;i++)
	{
		t=str[i];//注意！！ 
		sum+=t;
		sum*=10;
		
	}
	printf("%d\n",(sum/10)*2);

	return 0;
}
