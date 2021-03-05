//#include<stdio.h>
//#include<stdlib.h>
//#define n 10
//int main(void)
//{
//	int a[n]; int t = 0;
//	int i, j = 0;
//	printf("请输入十个整数\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n -i-1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	printf("从小到大的顺序为\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	system("pause");
//	return 0;
//
//}