#define _CRT_SECURE_NO_WARNINGS 1
//字符串旋转结果
//暴力翻转法

//#include<stdio.h>
//#include<string.h>
//
//int left_rotate(char* st1,char*st2)
//{
//	int n = strlen(st1);
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		char tem = *st1;
//
//		int j = 0;
//		for ( j = 0; j < n - 1; j++)
//		{
//			*(st1 + j) = *(st1 +j+1);
//		}
//
//		*(st1 + n - 1) = tem;
//
//		if (strcmp(st1, st2) == 0)
//			return 1;
//	}
//	return 0;
//	
//}
//int main(void)
//{
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int str = left_rotate(str1,str2);
//
//	if (1 == str)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//
//	return 0;
//}
//size of与strlen区别!!!!!

//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
	/*char arr[] = "ABCDE";
	char* p = arr;
	printf("sizeof=%d  strlen=%d\n", sizeof(arr), strlen(arr));
	printf("sizeof=%d  strlen=%d\n", sizeof(p), strlen(p));
	return 0;
	sizeof(p),求的是地址的内存，而*/
	/*int* a = 0;
	printf("%d\n", sizeof(a));*/
//}
//谁是凶手
//#include<stdio.h>
//
//int main(void)
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}

//喝汽水问题
//#include<stdio.h>
//
//int main(void)
//{
//	
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	 }
//	printf("%d\n", total);
//
//	return 0;
//}
//打印菱形

#include<stdio.h>

//int main(void)
//{
//	int a= 7;
//	int i = 1;
//	for ( i = 1; i <= a; i++)
//	{
//		
//		for (int j=a-i;j>=0;j--)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	/*for ( i=0; i < a-1; i++)
//	{
//		for (int k = 0; k < i; k++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <2*(a-1-i ; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}*/
//	for (i = 0; i < a - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (a - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
