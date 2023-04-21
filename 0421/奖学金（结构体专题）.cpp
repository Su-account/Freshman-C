#include<stdio.h>
typedef struct award
{
	char leader ,name[20],west;
	int end,vote,thesis;
	int sum;
}s;
int  main(void)
{
	int n=0,max=0,count=0;
	scanf("%d",&n);
	s arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",arr[i].name ,&arr[i].end ,&arr[i].vote,&arr[i].leader ,&arr[i].west ,&arr[i].thesis  );
	
		if(arr[i].end >80&&arr[i].thesis >=1)
		arr[i].sum+=8000;
		if(arr[i].end >85&&arr[i].vote >80)
		arr[i].sum+=4000;
		if(arr[i].end >90)
		arr[i].sum+=2000;
		if(arr[i].end >85&&arr[i].west =='Y')
		arr[i].sum +=1000;
		if(arr[i].vote >80&&arr[i].leader =='Y')
		arr[i].sum +=850;
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i].sum >arr[max].sum )
		{
			max=i;
		}
	}
	for(int i=0;i<n;i++)
	{
		count+=arr[i].sum ;
	}
	printf("%s\n%d\n%d\n",arr[max].name ,arr[max].sum ,count);
	
	
	return 0;
}
