//��������i++)��ǰ����(++i)����
#include<stdio.h>
int main(void)
{
	int a=10,b=0;
	printf("������>\n");
	//����������ʹ�ã�������
	b=a++;
	printf("b=%d\n",b);	// 10;
	printf("a=%d\n",a); 	// 11;
	
	printf("ǰ����>\n");
	a=10;
	b=0;
	b=++a;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
	return 0;
 } 
