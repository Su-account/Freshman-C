#include<stdio.h>
#include<string.h>


int main(void)
{

	char a[100];
	gets(a)	;
	int len=strlen(a);
	if(a[0]>='a'&&a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	for(int i=1;i<len;i++)
	{
		if(a[i-1]==' ')
		{
			if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
		}
	}
	printf("%s\n",a);
	return 0;
}
