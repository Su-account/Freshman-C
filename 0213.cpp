#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//׷���ַ����ĺ���
//#include<string.h>
//int main(void)
//{
//	char arr[20] = "Hellsu";
//	//strcat(arr, arr);//��������
//	strncat(arr, arr, 5);//5��ʾ����׷���ַ����ĸ�����
//
//	printf("%s\n", arr);
//	return 0;
//}

#include<assert.h>
//1.�������汾
//2.�ݹ�汾
//3.ָ��-ָ��汾

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
//	//"abc"Ϊ�ַ����������Դ�����\0,�ó���Ϊ3
//	//char arr1[] = { 'a','b','c' };
//	//printf("%d\n", strlen(arr1));
//	//�������arr1[]Ϊ�����ַ�������û��\0,������ַ������Ȳ�ȷ��
//	//�ɴ����ǿ���ģ��ʵ���Լ���strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}