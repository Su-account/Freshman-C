#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1)
//
//	{
//		printf("警告！！你的电脑将在1分钟后关机，如要取消，请输入你的姓名：\n");
//
//		scanf("%s", input);
//
//		if (strcmp(input, "suzihao") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//
//	return 0;
//}
//模拟实现strcmp函数

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//}
//int main(void)
//{
//	const char* arr1 = "abce";
//	const char* arr2 = "abd";
//
//	int str = my_strcmp(arr1, arr2);
//
//	if (str > 0)
//		printf("arr1>arr2\n");
//	else if (str < 0)
//		printf("arr1<arr2\n");
//	else
//		printf("arr1=arr2\n");
//
//	return 0;
//}
//模拟实现strncmp

//int my_strncmp(char* st1, char* st2, size_t n)
//{
//
//}
//int main(void)
//{
//
//	return 0;
//}


//strstr函数

//int main(void)
//{
//	const char arr1[] = "abcdef";
//	const char arr2[] = "bcd";
//	const char* ret =  strstr(arr1, arr2);//strstr在arr1字符串中找arr2的位置
//	if (ret==NULL)
//		printf("没找到\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}

//strerrror函数可以报出当前的错误信息
//errno是一个全局的错误码；如要使用引用头文件#include<errno.h>

//#include<errno.h>
//
//int main(void)
//{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
	return 0;*/
	
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	//printf("%s\n", strerror(errno));
	//	perror("fopen");//perror函数直接打印错误信息；而strerror函数是转化成错误信息，自己决定打不打印；perror头文件是string.h
	//	return 1;
	//}
	//fclose(pf);
	//pf == NULL;
	//return 0;
//}
