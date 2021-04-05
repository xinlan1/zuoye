//////////////////////用函数的形式
////////////////////#include<stdio.h>
////////////////////#include<string.h>
////////////////////int main(void)
////////////////////{
////////////////////	char password[9];
////////////////////	char input[9];
////////////////////	int count = 0;
////////////////////	scanf_s("%s", password,9);//注意输入字符串都要这样输入！！
////////////////////	printf("\n");
////////////////////	while (count < 3)
////////////////////	{
////////////////////		scanf_s("%s", input,9);//注意输入字符串都要这样输入！！
////////////////////		if (strcmp(password, input) == 0)
////////////////////		{
////////////////////			count++;
////////////////////			break;
////////////////////		}
////////////////////	}
////////////////////	if (count < 3) {
////////////////////		printf("找到了:\n");
////////////////////	}
////////////////////	else printf("没有找到:\n");
////////////////////}
//////////////////////用函数的形式
//////////////////#include<stdio.h>
//////////////////#include<string.h>
//////////////////#define n 3
//////////////////int main(void)
//////////////////{
//////////////////	char password[9], input[9]; int count = 0;
//////////////////	printf("请输入你要设置的密码:\n");
//////////////////	scanf_s("%s", password, 9);
//////////////////	while (count < n)
//////////////////	{
//////////////////		scanf_s("%s", input,9);//注意字符串的输入方式
//////////////////		if (strcmp(input, password) == 0)
//////////////////		{
//////////////////			count++;
//////////////////			break;
//////////////////		}
//////////////////		count++;
//////////////////	}
//////////////////	if (count < n)
//////////////////	{
//////////////////		printf("找到了:\n");
//////////////////	}
//////////////////	else printf("没有找到:\n");
//////////////////
//////////////////
//////////////////}
//////////////////字符串的检验:
//////////////#include<stdio.h>
////////////////#include<string.h>
////////////////int main(void)
////////////////{
////////////////	char input[99], password[99];
////////////////	int count = 0;
////////////////	int i = 0;
////////////////	printf("请输入你的密码:\n");
////////////////	gets(password);
////////////////	while(count<3)
////////////////	{
////////////////		printf("请输入你的钥匙:\n");
////////////////		scanf_s("%s", input, 99);
////////////////		if (strcmp(input, password) == 0)
////////////////			break;
////////////////		count++;
////////////////	}
////////////////	if (count <3) printf("密码是对的:\n");
////////////////	else printf("密码错误:\n");
////////////////
////////////////}
//////////////#include<stdio.h>
//////////////#include<string.h>
//////////////int main(void)
//////////////{
//////////////	int i = 0; int count = 0;
//////////////	char password[99],input[99];
//////////////	printf("请输入你的密码:\n");
//////////////	gets_s(password, 99);
//////////////	while (count < 3)
//////////////	{
//////////////		printf("请输入你的钥匙:\n");
//////////////		scanf_s("%s", input, 99);
//////////////		if (strcmp(input, password) == 0)
//////////////			break;
//////////////		count++;
//////////////		
//////////////	}
//////////////	if (count <3)
//////////////		printf("找到了:\n");
//////////////	else printf("没有找到：\n");
//////////////}
//////////////明天再写一遍！！！！！
////////////#include<stdio.h>
////////////#include<string.h>
////////////int main(void)
////////////{
////////////	int count = 0, i = 0;
////////////	char password[99], input[99];
////////////	printf("请输入你的密码:\n");
////////////	scanf_s("%s", password, 99);
////////////	while (count < 3)
////////////	{
////////////		printf("请输入你的钥匙：\n");
////////////		scanf_s("%s", input, 99);
////////////		if (strcmp(input, password) == 0)
////////////			break;
////////////		    count++;
////////////	}
////////////	if (count < 3) printf("密码正确");
////////////	else printf("密码错误:\n");
////////////}
//////////#include<stdio.h>
//////////#include<string.h>
//////////int search(char* str);
//////////int main(void)
//////////{
//////////	char password[99], i = 0; int t = 0;
//////////	printf("请输入你的密码:\n");
//////////	gets_s(password, 99);
//////////	t = search(password);
//////////	if (t == 1) printf("fause");
//////////	else printf("true");
//////////
//////////}
//////////int search(char* str)
//////////{
//////////	int i = 0, count = 0;
//////////	char input[99];
//////////	int t = 1;
//////////	while (count < 3)
//////////	{
//////////		printf("请再次输入:\n");
//////////		scanf_s("%s", input, 99);
//////////		if (strcmp(input, str) == 0)
//////////		{
//////////			t = 0;
//////////			break;
//////////		}
//////////		count++;
//////////
//////////	}
//////////	return t;
//////////}
////////#include<stdio.h>
////////#include<string.h>
////////int main(void)
////////{
////////	int count = 0;
////////	char password[99], input[99];
////////	printf("请输入你的密码:\n");
////////	gets_s(password, 99);
////////	while (count < 3)
////////	{
////////		printf("请输入你的钥匙:\n");
////////		scanf_s("%s", input, 99);
////////		if (strcmp(input, password) == 0)
////////		{
////////			break;
////////		}
////////		count++;
////////	}
////////	if (count < 3)  printf("密码正确:\n");
////////	else printf("密码错误:\n");
////////
////////}
//////#include<stdio.h>
//////int main(void)
//////{
//////	char password[99], input[99]; int count = 0;
//////	printf("请输入一串字符串:\n");
//////	gets_s(password, 99);
//////	while (count < 3)
//////	{
//////		printf("请输入你的钥匙:\n");
//////		scanf_s("%s", input, 99);
//////		if (strcmp(password, input) == 0)
//////			break;
//////		count++;
//////	}
//////	if (count < 3) printf("true");
//////	else printf("fause");
//////
//////}
////#include<stdio.h>
////#include<string.h>
////int main(void)
////{
////	int count = 0;
////	char password[99], input[99];
////	printf("请输入你的密码:\n");
////	scanf_s("%s", password,99);
////	while (count < 3)
////	{
////		printf("请输入你的钥匙:\n");
////		scanf_s("%s", input,99);
////		if (strcmp(input, password) == 0)
////		{
////			break;
////		}
////		count++;
////
////	}
////	if (count < 3) printf("yes");
////	else printf("no");
////}
////#include<stdio.h>
////#include<stdlib.h>
////#include<string.h>
////#define N 10
////int main(void)
////{
////	char password[N]; int i = 0; char key[N];
////	printf("请输入你要设置的密码\n");
////	scanf_s("%s", &password,N);
////	while (i < 3)
////	{
////		printf("请输入你的钥匙\n");
////		scanf_s("%s", &key, N);
////		if (strcmp(password, key) == 0)
////		{
////			break;
////		}
////		i++;
////	}
////	if (i < 3)
////	{
////		printf("密码正确\n");
////	}
////	else
////	{
////		printf("密码不正确\n");
////	}
////	system("pause");
////	return 0;
////}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void)
//{
//	char password[99], input[99];
//	int i = 0;
//	printf("请输入你要设置的密码\n");
//	scanf_s("%s", password, 99);
//	while (i < 3)
//	{
//		printf("请输入\n");
//		scanf_s("%s", input, 99);
//		if (strcmp(password, input) == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	if (i < 3)
//	{
//		printf("密码正确\n");
//	}
//	else
//	{
//		printf("密码错误\n");
//	}
//	system("pause");
//	return 0;
//}