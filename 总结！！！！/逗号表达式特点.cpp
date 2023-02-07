//逗号表达式特点
#include<stdio.h>

int main(void)
{
	int a=0, b=1, c=5;
	int d = (a=6,b=5, c+=a);		
	printf("d=%d\n",d);		//d=11
	
	return 0;
 }
 
 //逗号表达式或从左到右依次计算，但决定最后结果的式最后一个式子 
 
  
