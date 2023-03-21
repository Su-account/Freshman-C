#include<stdio.h>
#include<string.h>

int main(void)
{
	int n=0;
	scanf("%d",&n);
	while(n--)
	{
		char a[1000];
		scanf("%s",a);
		int len=strlen(a),count=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
