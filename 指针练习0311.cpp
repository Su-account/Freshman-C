#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define N 4
//
//void swap(int* p, int* q)
//{
//	*p = *p ^ *q;
//	*q = *p ^ *q;
//	*p = *p ^ *q;
//}
//
//int main(void)
//{
//	int num[N] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &num[i]);
//	}
	//for (int i = 0; i < N; i++)
	//{
	//	for (int k = i + 1; k < N; k++)
	//	{
	//		if (num[i] < num[k])
	//		{
	//			swap(num + i, num + k);
	//		}
	//	}
	//}
	//for (int i = 0; i < N; i++)
	//{
	//	printf("%d ", num[i]);
	//}
//	return 0;
//}
//
//#include<stdio.h>
//void swap(int* p, int* q)
//{
//	*p = *p ^ *q;
//	*q = *p ^ *q;
//	*p = *p ^ *q;
//}
//
//void LargestTow(int a[], int n, int* pfirst, int* psecond)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int k = i + 1; k < n; k++)
//		{
//			if (a[i] < a[k])
//			{
//				swap(a + i, a + k);
//			}
//		}
//	}
//	*pfirst = *a;
//	*psecond =* (a + 1);
//
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1000] = { 0 };
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int f = 0, s = 0, * first=&f, * second=&s;
//	LargestTow(a, n, first, second);
//
//	printf("%d %d\n", *first, *second);
//
//	return 0;
//}

