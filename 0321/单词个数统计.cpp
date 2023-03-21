#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[1000];
	gets(a);
	int len=strlen(a),count=0,i=0;
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			if(a[i+1]==' '||a[i+1]=='\0')
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
