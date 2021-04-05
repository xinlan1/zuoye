///////*一共有 n 个三位数，编写函数 sumOfFigures 求各位数字之和等于 5 的整数
//////的个数。
//////输入格式
//////第一行：正整数的个数 n
//////第二行：n 个三位正整数，各数之间以空格隔开
//////输出格式 一行，一个整数，各位数字之和等于 5 的数字个数*/
//////#include<stdio.h>
//////int sumofFigures(int a);
//////int main(void)
//////{
//////	int a[99]; int i = 0; int n = 0;
//////	int sum = 0; int count = 0;
//////	printf("请输入你的三位数的个数:\n");
//////	scanf_s("%d", &n);
//////	printf("请输入你的三位数:\n");
//////	for (i = 0; i < n; i++)
//////	{
//////		scanf_s("%d", &a[i]);
//////	}
//////	for(i=0;i<n;i++)
//////	{ 
//////	sum=sumofFigures(a[i]);//注意这种话调用的方式！！！！
//////	if (sum == 1)
//////		count++;
//////	}
//////	printf("%d", count);
//////}
//////int sumofFigures(int a)
//////{
//////	int t = 0;
//////	int x1, x2, x3;
//////	x1 = a /100;
//////	x2 = a % 10 / 10;
//////	x3 = a %10;//注意这个是a%10！！！！！
//////	if (x1 + x2 + x3 == 5)
//////	{ 
//////		t = 1;
//////	}
//////	return t;
//////
//////
//////
//////}
/////////*一共有 n 个三位数，编写函数 sumOfFigures 求各位数字之和等于 5 的整数
//////的个数。
//////输入格式
//////第一行：正整数的个数 n
//////第二行：n 个三位正整数，各数之间以空格隔开
//////输出格式 一行，一个整数，各位数字之和等于 5 的数字个数*/
////#include<stdio.h>
////int sumoffigures(int a[],int n);
////int main(void)
////{
////	int a[99];
////	int sum = 0;
////	int n, i = 0;
////	printf("请输入你的三位数有多少个:\n");
////	scanf_s("%d", &n);
////	printf("请输入你的所有的三位数:\n");
////	for (i = 0; i < n; i++)
////	{
////		scanf_s("%d", &a[i]);
////	}
////	sum = sumoffigures(a,n);
////	printf("符合条件的三位数有%d个", sum);
////
////}
////int sumoffigures(int a[], int n)
////{
////	int sum = 0, x1 = 0, x2 = 0, x3 = 0;
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < n; i++)
////	{
////		x1 = a[i] / 100;
////		x2 = a[i] / 10 % 10;
////		x3 = a[i] % 10;
////		if (x1 + x2 + x3 == 5)   count++;
////	}
////	return count;
////
////}
////
////
//#include<stdio.h>
//int sumoffigures(int a, int n);
//int main(void)
//{
//	int a[99], n=0; int sum = 0; int count = 0;
//	int i = 0;
//	printf("请输入你有几个三位数:\n");
//	scanf_s("%d", &n);
//	printf("请输入所有的三位数:\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		count = sumoffigures(a[i], n);
//		if (count == 1)sum++;
//		
//
//	}
//	printf("符合条件的三位数有%d个", sum);
//}
//int sumoffigures(int a, int n)
//{
//	int t = 0;
//	int x1 = 0, x2 = 0, x3 = 0;
//	x1 = a / 100;
//	x2 = a / 10 % 10;
//	x3 = a % 10;
//	if (x1 + x2 + x3 == 5)   t = 1;
//	return t;
//}
