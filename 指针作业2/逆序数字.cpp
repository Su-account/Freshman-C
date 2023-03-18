#include<stdio.h>
#include<string.h> 

int main(void)
{
	int sz=0;
	char arr[20];
//	gets(arr);
	scanf("%s",arr);
	sz=strlen(arr)-1;
	for(sz;sz>=0;sz--)//for(sz-100;sz>=0;sz--)结果一样； 
	{
		printf("%c",arr[sz]);
	}
	
	return 0;
}
