/////*用指针编程实现 strcat 函数的功能，要求不采用标准库函数 strcat，函数
////头部作如下定义：char* strcat(char* str1, char* str2)。*/
////#include<stdio.h>
////char* strcat(char* str1, char* str2);
////int main(void)
////{
////	char a[99], b[99];
////	printf("请输入两串字符串：\n");
////	gets(a);
////	gets(b);
////	char *c=strcat(a, b);
////	printf("连接后的字符串为%s", c);
////}
////char* strcat(char* str1, char* str2)
////{
////	int i = 0, j = 0;
////	for (i = 0; *(str1 + i) != '\0'; i++);
////	for (j = 0; *(str2 + j) != '\0'; j++)
////	{
////		*(str1 + i) = *(str2 + j);
////		i++;
////	}
////	*(str1 + i) = '\0';
////	return str1;
////}
/////*用指针编程实现 strcat 函数的功能，要求不采用标准库函数 strcat，函数
////头部作如下定义：char* strcat(char* str1, char* str2)
//#include<stdio.h>
//char* strcat(char* str1, char* str2);
//int main(void)
//{
//	char a[99], b[99];
//	printf("请输入两串字符串:\n");
//	gets_s(a, 99);
//	gets_s(b, 99);
//	strcat(a, b);
//	printf("连接后的函数为%s", a);
//}
//char* strcat(char* str1, char* str2)
//{
//	int i = 0, j = 0;
//	for (i = 0; *(str1 + i) != '\0'; i++);
//	for (j = 0; *(str2 + j) != '\0'; j++)
//	{
//		*(str1 + i) = *(str2 + j);
//		i++;
//	}
//	*(str1 + i) = '\0';
//	return str1;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define N 100
//void lianjie(char str1[], char str2[]);
//int main(void)
//{
//	char a[N]; char b[N];
//	printf("请输入两串字符串\n");
//	scanf_s("%s", &a, N);
//	scanf_s("%s", &b, N);
//	lianjie(a, b);
//	printf("连接后的函数为%s", a);
//	system("pause");
//	return 0;
//}
//void lianjie(char str1[], char str2[])
//{
//	int i = 0, j;
//	for (i = 0; *(str1 + i) != '\0'; i++);
//	for (j = 0; *(str2 + j) != '\0'; j++)
//	{
//		*(str1 + i++) = *(str2 + j);
//	}
//	*(str1 + i) = '\0';
//}
//#include<stdio.h>
//#include<stdlib.h>
//void link(char str1[], char str2[]);
//int main(void)
//{
//	char str1[99], str2[99]; 
//	printf("请输入你要连接的两串字符串\n");
//	scanf_s("%s", &str1, 99);
//	scanf_s("%s", str2, 99);
//	link(str1, str2);
//	printf("连接后的字符串为%s", str1);
//	system("pause");
//	return 0;
//}
//void link(char str1[], char str2[])
//{
//	int i = 0; int j=0;
//	for (i = 0; *(str1 + i) != '\0'; i++);
//	//找到第一串的反斜杠0的位置
//	while (*(str2 + j) != '\0')
//	{
//		*(str1 + i) = *(str2 + j);
//		j++; i++;
//	}
//	*(str1 + i) = '\0';
//}
