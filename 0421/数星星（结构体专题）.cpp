#include<stdio.h>
typedef struct star
{
	int x,y;
}s;
int main(void)
{
	int n=0,count=0,i=0,j=0;
	scanf("%d",&n);
	s star[n];
	for( i=0;i<n;i++)
	{
		scanf("%d %d",&star[i].x ,&star[i].y );
		for( j=0;j<i;j++)
		{
			if(star[i].x ==star[j].x && star[i].y ==star[j].y)
			break;
		}
		if(j==i)
		count++;
	}
	
	printf("%d\n",count);
	return 0;
}
