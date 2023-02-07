//后自增（i++)与前自增(++i)区别；
#include<stdio.h>
int main(void)
{
	int a=10,b=0;
	printf("后自增>\n");
	//后自增：先使用，再增加
	b=a++;
	printf("b=%d\n",b);	// 10;
	printf("a=%d\n",a); 	// 11;
	
	printf("前自增>\n");
	a=10;
	b=0;
	b=++a;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
	return 0;
 } 
