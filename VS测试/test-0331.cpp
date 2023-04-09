#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void GetMeory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMeory(&str);
//	strcpy(str, "hell world");
//	printf(str);
//	free(str);
//
//}
//int main(void)
//{
//	Test();
//
//	return 0;
//}
//#include<stdio.h>
//
//struct student
//{
//	char arr[15];
//	char name[25];
//	int a;
//	int b;
//	int c;
//};
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum[100] = { 0 };
//	struct student s[100];
//	int max = 0, t = 0, i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%d%d", s[i].arr, s[i].name, &s[i].a, &s[i].b, &s[i].c);
//		sum[i] = s[i].a + s[i].b + s[i].c;
//		if (sum[i] >sum[max])
//		{
//			max = i;
//		}
//	}
//	printf("%s %s %d %d %d\n", s[max].arr, s[max].name, s[max].a, s[max].b, s[max].c);
//	return 0;
//}
//#include<stdio.h> 
//
//struct Friend
//{
//	char name[25];
//	int y, m, d;
//};
//int main(void)
//{
//	struct Friend s[10];
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	int min = 0;
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%d%d%d", s[i].name, &s[i].y, &s[i].m, &s[i].d);
//		if (s[i].y > s[min].y)
//			min = i;
//		else if (s[i].y == s[min].y && s[i].m > s[min].m)
//			min = i;
//		else if (s[i].y == s[min].y && s[i].m == s[min].m && s[i].d > s[min].d)
//			min = i;
//
//	}
//	printf("%s %d-%02d-%02d\n", s[min].name, s[min].y, s[min].m, s[min].d);
//
//
//	return 0;
//}

