/////*��ָ����ʵ�� strcat �����Ĺ��ܣ�Ҫ�󲻲��ñ�׼�⺯�� strcat������
////ͷ�������¶��壺char* strcat(char* str1, char* str2)��*/
////#include<stdio.h>
////char* strcat(char* str1, char* str2);
////int main(void)
////{
////	char a[99], b[99];
////	printf("�����������ַ�����\n");
////	gets(a);
////	gets(b);
////	char *c=strcat(a, b);
////	printf("���Ӻ���ַ���Ϊ%s", c);
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
/////*��ָ����ʵ�� strcat �����Ĺ��ܣ�Ҫ�󲻲��ñ�׼�⺯�� strcat������
////ͷ�������¶��壺char* strcat(char* str1, char* str2)
//#include<stdio.h>
//char* strcat(char* str1, char* str2);
//int main(void)
//{
//	char a[99], b[99];
//	printf("�����������ַ���:\n");
//	gets_s(a, 99);
//	gets_s(b, 99);
//	strcat(a, b);
//	printf("���Ӻ�ĺ���Ϊ%s", a);
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
//	printf("�����������ַ���\n");
//	scanf_s("%s", &a, N);
//	scanf_s("%s", &b, N);
//	lianjie(a, b);
//	printf("���Ӻ�ĺ���Ϊ%s", a);
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
//	printf("��������Ҫ���ӵ������ַ���\n");
//	scanf_s("%s", &str1, 99);
//	scanf_s("%s", str2, 99);
//	link(str1, str2);
//	printf("���Ӻ���ַ���Ϊ%s", str1);
//	system("pause");
//	return 0;
//}
//void link(char str1[], char str2[])
//{
//	int i = 0; int j=0;
//	for (i = 0; *(str1 + i) != '\0'; i++);
//	//�ҵ���һ���ķ�б��0��λ��
//	while (*(str2 + j) != '\0')
//	{
//		*(str1 + i) = *(str2 + j);
//		j++; i++;
//	}
//	*(str1 + i) = '\0';
//}
