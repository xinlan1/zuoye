///////////*写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//////////字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//////////的 ASCII 码差。
//////////编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//////////结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
//////////#include<stdio.h>
//////////int mystrcpy(char*, char*);
//////////int main(void)
//////////{
//////////	char a[99], b[99]; int c = 0;
//////////	printf("请输入两串字符串\n");
//////////	gets(a);
//////////	gets(b);
//////////	c=mystrcpy(a, b);
//////////	printf("返回的值为%d", c);
//////////}
//////////int mystrcpy(char* str1, char* str2)
//////////{
//////////	int i = 0, c = 0;
//////////	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
//////////	{
//////////		if (*(str1 + i) != *(str2 + i))
//////////		{
//////////			c = *(str1 + i) - *(str2 + i);
//////////			break;
//////////		}
//////////	}
//////////	return c;
//////////}
//////////
///////////*写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//////////字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//////////的 ASCII 码差。
//////////编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//////////结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
////////#include<stdio.h>
////////int mystrcpy(char*, char*);
////////int main(void)
////////{
////////	char a[99], b[99]; int m = 0;
////////	printf("请输入两串字符串:\n");
////////	gets(a);
////////	gets(b);
////////	m = mystrcpy(a, b);
////////	printf("%d", m);
////////}
////////int mystrcpy(char* str1, char* str2)
////////{
////////	int i = 0; int t = 0;
////////	while (*str1++ != '\0' || *str2++ != '\0')
////////	{
////////		if (*(str1 + i) != *(str2 + i))
////////			t = *(str1 + i) - *(str2 + i);
////////		break;
////////
////////	}
////////	return t;
////////}
////////
///////*编写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//////字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//////的 ASCII 码差。
//////编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//////结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
//////#include<stdio.h>
//////int mystrcpy(char*, char*);
//////int main(void)
//////{
//////	char a[99], b[99]; int t = 0;
//////	printf("请输入两串字符串:\n");
//////	gets(a);
//////	gets(b);
//////	t=mystrcpy(a, b);
//////	print("%d", t);
//////}
//////int mystrcpy(char* str1, char* str2)
//////{
//////	int i = 0; int t = 0;
//////	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
//////	{
//////		if (*(str1 + i)!=*(str2 + i))//注意这种表达方式！！！
//////		{
//////			t = *(str1 + i) - *(str2 + i);
//////			break;
//////
//////		}
//////	}
//////	return t;
//////}
///////*编写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//////字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//////的 ASCII 码差。
//////编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//////结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
////#include<stdio.h>
////int _mystrcpy(char* str1, char* str2);
////int main(void)
////{
////	char a[99], b[99]; int n = 0;
////	printf("请输入你要比较的字符串:\n");
////	gets_s(a, 99);
////	gets_s(b,99);
////	n=_mystrcpy(a, b);
////	if (n == 0) printf("这两个字符串相等:\n");
////	else printf("这两个字符串不相等，他们的差为%d", n);
////}
////int _mystrcpy(char* str1, char* str2)
////{
////	int i = 0; int t = 0;
////	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
////	{
////		if (*(str1 + i) != *(str2 + i))
////		{
////			t = *(str1 + i) - *(str2 + i);
////			break;
////		}
////	}
////	return t;
////}
///*编写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//的 ASCII 码差。
//编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
//#include<stdio.h>
//int mystrcpy(char* str1, char* str2);
//int main(void)
//{
//	int t ;
//	char a[99], b[99];
//	printf("请输入两串字符串:\n");
//	gets_s(a, 99);
//	gets_s(b, 99);
//	t=mystrcpy(a, b);
//	if (t == 0)   printf("a=b");
//	else printf("a不等于b，他们之差为%d", t);
//}
//int mystrcpy(char* str1, char* str2)
//{
//	int t = 0;
//	int i = 0;
//	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
//	{
//		if (*(str1 + i) != *(str2 + i))
//		{
//			t = *(str1 + i) - *(str2 + i);
//			break;
//		}
//		i++;
//	}
//	return t;
//}
///*编写字符串比较函数 mystrcpy，其功能：对两个字符串进行比较，若这两个
//字符串相等，则返回 0，若这两个字符串不相等，则返回它们第一个不同字符
//的 ASCII 码差。
//编写 main()函数：从键盘输入两个字符串，调用 mystrcpy 函数，输出比较
//结果。要求：用指针实现 mystrcpy 函数的功能，否则按零分处理。*/
//#include<stdio.h>
//#include <stdlib.h>
//#define N 10
//int compare(char str1[], char str2[]);
//int main(void)
//{
//	char str1[N]; char str2[N];
//	printf("请输入两串字符串\n");
//	scanf_s("%s", &str1, N);
//	scanf_s("%s", &str2, N);
//	int m=compare(str1, str2);
//	if (m == 0)
//	{
//		printf("两串字符串相等\n");
//	}
//	else
//	{
//		printf("两串字符串不相等，之差为%d", m);
//	}
//	system("pause");
//	return 0;
//}
//int compare(char str1[], char str2[])
//{
//	int i = 0; int m = 0;
//	while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
//	{
//		if (*(str1 + i) != *(str2 + i))
//		{
//			m = *(str1 + i) - *(str2 + i);
//		}
//		i++;
//	}
//	return m;
//
//}