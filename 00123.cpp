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
//		printf("���棡����ĵ��Խ���1���Ӻ�ػ�����Ҫȡ�������������������\n");
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
//ģ��ʵ��strcmp����

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
//ģ��ʵ��strncmp

//int my_strncmp(char* st1, char* st2, size_t n)
//{
//
//}
//int main(void)
//{
//
//	return 0;
//}


//strstr����

//int main(void)
//{
//	const char arr1[] = "abcdef";
//	const char arr2[] = "bcd";
//	const char* ret =  strstr(arr1, arr2);//strstr��arr1�ַ�������arr2��λ��
//	if (ret==NULL)
//		printf("û�ҵ�\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}

//strerrror�������Ա�����ǰ�Ĵ�����Ϣ
//errno��һ��ȫ�ֵĴ����룻��Ҫʹ������ͷ�ļ�#include<errno.h>

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
	//	perror("fopen");//perror����ֱ�Ӵ�ӡ������Ϣ����strerror������ת���ɴ�����Ϣ���Լ������򲻴�ӡ��perrorͷ�ļ���string.h
	//	return 1;
	//}
	//fclose(pf);
	//pf == NULL;
	//return 0;
//}
