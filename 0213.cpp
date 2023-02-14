#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//追加字符串的函数
//#include<string.h>
//int main(void)
//{
//	char arr[20] = "Hellsu";
//	//strcat(arr, arr);//！！！！
//	strncat(arr, arr, 5);//5表示的是追加字符串的个数；
//
//	printf("%s\n", arr);
//	return 0;
//}

#include<assert.h>
//1.计数器版本
//2.递归版本
//3.指针-指针版本

//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//
//}




//int main(void)
//{
//	char arr[] = "abc";
//	//printf("%d\n", strlen(arr));
//	//"abc"为字符串，后面自带的有\0,得出答案为3
//	//char arr1[] = { 'a','b','c' };
//	//printf("%d\n", strlen(arr1));
//	//而定义的arr1[]为单个字符，后面没有\0,求出的字符串长度不确定
//	//由此我们可以模拟实现自己的strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}