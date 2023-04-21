#include<stdio.h>
#include<string.h>
#define N 501

typedef struct win
{
	char name[25];
	int vote;
}s;
int main(void)
{
	int i=0,n=0,falt=0,max=0;
	s arr[N];
	char tem[25];
	while(strcmp("#",gets(tem))!=0)
	{
		falt=0;
		for(i=0;i<n;i++)
		{
			if(strcmp(arr[i].name ,tem)==0)
			{
				arr[i].vote ++;
				falt=1;
				break;
			}
		}
		if(falt!=1)
		{
			strcpy(arr[n].name ,tem);
			arr[n++].vote =0;
		}
			
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i].vote >arr[max].vote )
		max=i;
	}
	printf("%s\n",arr[max].name );
	
	return 0;
}
