//////////////////////�ú�������ʽ
////////////////////#include<stdio.h>
////////////////////#include<string.h>
////////////////////int main(void)
////////////////////{
////////////////////	char password[9];
////////////////////	char input[9];
////////////////////	int count = 0;
////////////////////	scanf_s("%s", password,9);//ע�������ַ�����Ҫ�������룡��
////////////////////	printf("\n");
////////////////////	while (count < 3)
////////////////////	{
////////////////////		scanf_s("%s", input,9);//ע�������ַ�����Ҫ�������룡��
////////////////////		if (strcmp(password, input) == 0)
////////////////////		{
////////////////////			count++;
////////////////////			break;
////////////////////		}
////////////////////	}
////////////////////	if (count < 3) {
////////////////////		printf("�ҵ���:\n");
////////////////////	}
////////////////////	else printf("û���ҵ�:\n");
////////////////////}
//////////////////////�ú�������ʽ
//////////////////#include<stdio.h>
//////////////////#include<string.h>
//////////////////#define n 3
//////////////////int main(void)
//////////////////{
//////////////////	char password[9], input[9]; int count = 0;
//////////////////	printf("��������Ҫ���õ�����:\n");
//////////////////	scanf_s("%s", password, 9);
//////////////////	while (count < n)
//////////////////	{
//////////////////		scanf_s("%s", input,9);//ע���ַ��������뷽ʽ
//////////////////		if (strcmp(input, password) == 0)
//////////////////		{
//////////////////			count++;
//////////////////			break;
//////////////////		}
//////////////////		count++;
//////////////////	}
//////////////////	if (count < n)
//////////////////	{
//////////////////		printf("�ҵ���:\n");
//////////////////	}
//////////////////	else printf("û���ҵ�:\n");
//////////////////
//////////////////
//////////////////}
//////////////////�ַ����ļ���:
//////////////#include<stdio.h>
////////////////#include<string.h>
////////////////int main(void)
////////////////{
////////////////	char input[99], password[99];
////////////////	int count = 0;
////////////////	int i = 0;
////////////////	printf("�������������:\n");
////////////////	gets(password);
////////////////	while(count<3)
////////////////	{
////////////////		printf("���������Կ��:\n");
////////////////		scanf_s("%s", input, 99);
////////////////		if (strcmp(input, password) == 0)
////////////////			break;
////////////////		count++;
////////////////	}
////////////////	if (count <3) printf("�����ǶԵ�:\n");
////////////////	else printf("�������:\n");
////////////////
////////////////}
//////////////#include<stdio.h>
//////////////#include<string.h>
//////////////int main(void)
//////////////{
//////////////	int i = 0; int count = 0;
//////////////	char password[99],input[99];
//////////////	printf("�������������:\n");
//////////////	gets_s(password, 99);
//////////////	while (count < 3)
//////////////	{
//////////////		printf("���������Կ��:\n");
//////////////		scanf_s("%s", input, 99);
//////////////		if (strcmp(input, password) == 0)
//////////////			break;
//////////////		count++;
//////////////		
//////////////	}
//////////////	if (count <3)
//////////////		printf("�ҵ���:\n");
//////////////	else printf("û���ҵ���\n");
//////////////}
//////////////������дһ�飡��������
////////////#include<stdio.h>
////////////#include<string.h>
////////////int main(void)
////////////{
////////////	int count = 0, i = 0;
////////////	char password[99], input[99];
////////////	printf("�������������:\n");
////////////	scanf_s("%s", password, 99);
////////////	while (count < 3)
////////////	{
////////////		printf("���������Կ�ף�\n");
////////////		scanf_s("%s", input, 99);
////////////		if (strcmp(input, password) == 0)
////////////			break;
////////////		    count++;
////////////	}
////////////	if (count < 3) printf("������ȷ");
////////////	else printf("�������:\n");
////////////}
//////////#include<stdio.h>
//////////#include<string.h>
//////////int search(char* str);
//////////int main(void)
//////////{
//////////	char password[99], i = 0; int t = 0;
//////////	printf("�������������:\n");
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
//////////		printf("���ٴ�����:\n");
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
////////	printf("�������������:\n");
////////	gets_s(password, 99);
////////	while (count < 3)
////////	{
////////		printf("���������Կ��:\n");
////////		scanf_s("%s", input, 99);
////////		if (strcmp(input, password) == 0)
////////		{
////////			break;
////////		}
////////		count++;
////////	}
////////	if (count < 3)  printf("������ȷ:\n");
////////	else printf("�������:\n");
////////
////////}
//////#include<stdio.h>
//////int main(void)
//////{
//////	char password[99], input[99]; int count = 0;
//////	printf("������һ���ַ���:\n");
//////	gets_s(password, 99);
//////	while (count < 3)
//////	{
//////		printf("���������Կ��:\n");
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
////	printf("�������������:\n");
////	scanf_s("%s", password,99);
////	while (count < 3)
////	{
////		printf("���������Կ��:\n");
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
////	printf("��������Ҫ���õ�����\n");
////	scanf_s("%s", &password,N);
////	while (i < 3)
////	{
////		printf("���������Կ��\n");
////		scanf_s("%s", &key, N);
////		if (strcmp(password, key) == 0)
////		{
////			break;
////		}
////		i++;
////	}
////	if (i < 3)
////	{
////		printf("������ȷ\n");
////	}
////	else
////	{
////		printf("���벻��ȷ\n");
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
//	printf("��������Ҫ���õ�����\n");
//	scanf_s("%s", password, 99);
//	while (i < 3)
//	{
//		printf("������\n");
//		scanf_s("%s", input, 99);
//		if (strcmp(password, input) == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	if (i < 3)
//	{
//		printf("������ȷ\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	system("pause");
//	return 0;
//}