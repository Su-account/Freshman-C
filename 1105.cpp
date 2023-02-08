#define _CRT_SECURE_NO_WARNINGS 1

//int facsum(int n)
//{
//	int sum = 0;
//	for (int i = 2; i <n; i++)
//	{
//		if (n % i == 0)
//		{
//			int a = n / i;
//			sum += a;
//		}
//	}
//
//	return sum + 1;
//}
//#include<stdio.h>
//
//int facsum(int k);
//
//int main()
//
//{
//	int m, n, i, k, flag = 0;
//
//	scanf("%d%d", &m, &n);
//
//	for (i = m; i <= n; i++)
//	{
//		k = facsum(i);
//		if (i == facsum(k) && i < k)
//		{
//			printf("%d %d\n", i, k);
//
//			 flag = 1;
//		}
//
//	}
//	if (flag == 0)
//		printf("No answer\n");
//
//	return 0;
//
//}

//#include<stdio.h>
//int MinIndex(int a[], int n)
//{
//	int t = a[0], index = 0;
//	for(int i=0;i<n;i++)
//		if (a[i] < t)
//		{
//			index = i;
//			t = a[i];
//		}
//	return index;
//}
//int MaxIndex(int a[], int n)
//{
//	int index = 0, t = a[0];
//	for(int i=0;i<n;i++)
//		if (a[i] > t)
//		{
//			index = i;
//			t = a[i];
//		}
//	return index;
//}
//void PrintArr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	/*int tem = 0;
//	tem = arr[0];
//	arr[0] = arr[MinIndex(arr, n)];
//	arr[MinIndex(arr, n)] = tem;
//
//	PrintArr(arr, n);
//	printf("\n");
//
//	tem = arr[n - 1];
//	arr[n - 1] = arr[MaxIndex(arr,n)];
//	arr[MaxIndex(arr, n)] = tem;
//
//	PrintArr(arr, n);*/
//
//	int tem = 0, Imin = MinIndex(arr, n);
//	tem = arr[0];
//	arr[0] = arr[Imin];
//	arr[Imin] = tem;
//
//	int Imax = MaxIndex(arr, n);
//	tem = arr[n - 1];
//	arr[n - 1] = arr[Imax];
//	arr[Imax] = tem;
//
//	PrintArr(arr, n);
//	return 0;
//}
//int main(void)
//{
//	int n = 0;
//		scanf("%d", &n);
//		int arr[10] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//	printf("%d\n", arr[MaxIndex(arr,n)]);
//	printf("%d\n", arr[MinIndex(arr, n)]);
//	return 0;
//}
