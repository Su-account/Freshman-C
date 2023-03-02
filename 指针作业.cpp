#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0, t = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int* m = &a;
//	if (*m < b)
//		m =& b;
//	if (*m < c)
//		m = &c;
//	printf("%d\n", *m);
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int x = 0, y = 0, z = 0;
//	scanf("%d%d%d", &x, &y, &z);
//
//
//	if (x < y)
//	{
//		x = x ^ y;
//		y = x ^ y;
//		x = x ^ y;
//	}
//	if (x< z)
//	{
//		x= x^ z;
//		z = x ^ z;
//		x= x^ z;
//
//	}
//	if (y< z)
//	{
//		y= y^ z;
//		z = y^ z;
//		y= y^ z;
//
//	}
//	printf("%d %d %d", x, y, z);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char a = 0, b = 0, c = 0;
//	scanf("%c", &a);
//	getchar();
//	scanf("%c", &b);
//	getchar();
//	scanf("%c", &c);
//	getchar();
//	char* max = &a;
//	if (b > *max)
//		*max = b;
//	if (c >*max)
//		*max = c;
//
//	printf("%c\n", *max);
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	
//	while (1)
//	{
//		if (num / 10 != 0)
//		{
//			printf("%d ", num % 10);
//			num /= 10;
//
//		}
//		else
//		{
//			printf("%d\n", num % 10);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		printf("%c ", ch);
//	}
//		return 0;
