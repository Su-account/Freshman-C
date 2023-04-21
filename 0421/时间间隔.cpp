#include<stdio.h> 

int main(void)
{
	int H=0,M=0,S=0,h=0,m=0,s=0;
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d:%d:%d",&H,&M,&S);
	int a=0,b=0,c=0;
	if(S<s)
	{
		M--;
		c=S+60-s;
	}
	else
	c=S-s;
	if(M<m)
	{
		H--;
		b=M+60-m;
	}
	else
	b=M-m;
	a=H-h;
	printf("%02d:%02d:%02d\n",a,b,c);
	return 0;
}
