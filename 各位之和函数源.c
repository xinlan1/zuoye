///////*һ���� n ����λ������д���� sumOfFigures ���λ����֮�͵��� 5 ������
//////�ĸ�����
//////�����ʽ
//////��һ�У��������ĸ��� n
//////�ڶ��У�n ����λ������������֮���Կո����
//////�����ʽ һ�У�һ����������λ����֮�͵��� 5 �����ָ���*/
//////#include<stdio.h>
//////int sumofFigures(int a);
//////int main(void)
//////{
//////	int a[99]; int i = 0; int n = 0;
//////	int sum = 0; int count = 0;
//////	printf("�����������λ���ĸ���:\n");
//////	scanf_s("%d", &n);
//////	printf("�����������λ��:\n");
//////	for (i = 0; i < n; i++)
//////	{
//////		scanf_s("%d", &a[i]);
//////	}
//////	for(i=0;i<n;i++)
//////	{ 
//////	sum=sumofFigures(a[i]);//ע�����ֻ����õķ�ʽ��������
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
//////	x3 = a %10;//ע�������a%10����������
//////	if (x1 + x2 + x3 == 5)
//////	{ 
//////		t = 1;
//////	}
//////	return t;
//////
//////
//////
//////}
/////////*һ���� n ����λ������д���� sumOfFigures ���λ����֮�͵��� 5 ������
//////�ĸ�����
//////�����ʽ
//////��һ�У��������ĸ��� n
//////�ڶ��У�n ����λ������������֮���Կո����
//////�����ʽ һ�У�һ����������λ����֮�͵��� 5 �����ָ���*/
////#include<stdio.h>
////int sumoffigures(int a[],int n);
////int main(void)
////{
////	int a[99];
////	int sum = 0;
////	int n, i = 0;
////	printf("�����������λ���ж��ٸ�:\n");
////	scanf_s("%d", &n);
////	printf("������������е���λ��:\n");
////	for (i = 0; i < n; i++)
////	{
////		scanf_s("%d", &a[i]);
////	}
////	sum = sumoffigures(a,n);
////	printf("������������λ����%d��", sum);
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
//	printf("���������м�����λ��:\n");
//	scanf_s("%d", &n);
//	printf("���������е���λ��:\n");
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
//	printf("������������λ����%d��", sum);
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
