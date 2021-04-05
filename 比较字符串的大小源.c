////#include<stdio.h>
////int _strcmp(char* str1, char* str2);
////int main(void)
////{
////	char a[99], b[99];
////	int x = 0;
////	printf("请输入你要比较的两串字符串:\n");
////	gets(a);
////	gets(b);
////	x = _strcmp(a, b);
////	if (x == 0)   printf("str1=str2");
////	else if (x == 1)  printf("str1>str2");
////	else printf("str1<str2");
////}
////int _strcmp(char* str1, char* str2)
////{
////	int i = 0, j = 0;
////	int t = 0;
////	for (i = 0; *(str1 + i) != '\0'; i++);
////	for (j = 0; *(str2 + j) != '\0'; j++);
////	if (i == j)   t = 0;
////	if (i > j)  t = 1;
////	if (i < j)  t = -1;
////	return t;
////}
////#include<stdio.h>
////int search(char* str1, char* str2);
////int main(void)
////{
////	char a[99], b[99]; int t = 0;
////	printf("请输入两串字符串:");
////	gets_s(a, 99);
////	gets_s(b, 99);
////	t=search(a, b);
////	if (t == 0) printf("str1=str2");
////	else if (t == -1)  printf("str1<str2");
////	else printf("str1>str2");
////
////}
////int search(char* str1, char* str2)
////{
////	int i = 0, j = 0;
////	int t = 0;
////	for (i = 0; *(str1 + i) != '\0'; i++);
////	for (j = 0; *(str2+ j) != '\0'; j++);
////	if (i < j)   t = -1;
////	if (i == j) t = 0;
////	if (i > j)   t = 1;
////	return t;
////
////
////}
////
//#include<stdio.h>
//int search(char* str1, char* str2);
//int main(void)
//{
//	char a[99], b[99];
//	int x = 0;	printf("请输入两串字符串\n");
//	gets_s(a, 99);
//	gets_s(b, 99);
//	x = search(a, b);
//	if (x == 0) printf("a=b");
//	if (x == -1) printf("a<b");//注意这个一定要把三种情况的x等于多少写出来
//	else if(x==1) printf("a>b");
//}
//int search(char* str1, char* str2)
//{
//	int t;
//	int i = 0, j = 0;
//	for (i = 0; *(str1 + i) != '\0'; i++);
//	for (j = 0; *(str2 + j) != '\0'; j++);
//	if (i == j)
//	{
//		t = 0;
//	}
//	else if (i < j) { t = -1; }
//	else if (i > j) { t = 1; }
//	return t;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define N 10
//int compare(char str1[], char str2[]);
//int main(void)
//{
//	char a[N]; char b[N];
//	printf("请输入两串字符串\n");
//	scanf_s("%s", &a, N);
//	scanf_s("%s", &b, N);
//	int m = compare(a, b);
//	if (m == 0)
//	{
//		printf("两串字符串相等\n");
//	}
//	if (m > 0)
//	{
//		printf("1>2");
//	}
//	if (m < 0)
//	{
//		printf("1<2");
//	}
//	system("pause");
//	return 0;
//}
//int compare(char str1[], char str2[])
//{
//	int i = 0; int j = 0;
//	int m = 0;
//	for (; *(str1 + i) != '\0'; i++);
//	for (; *(str2 + j) != '\0'; j++);
//	if (i == j)
//	{
//		m = 0;
//	}
//	if (i < j)
//	{
//		m = -1;
//	}
//	if (i > j)
//	{
//		m = 1;
//	}
//	return m;
//}