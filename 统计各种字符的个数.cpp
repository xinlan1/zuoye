//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void count(char arr[]);
//#define N 10
//int lc = 0, uc = 0, d = 0, s = 0, o = 0;
//int main(void)
//{
//	char arr[N + 1];
//	printf("请输入一百个以内的任意字符，如果超出了100个字符，只对100个字符进行统计\n");
//	gets_s(arr);
//	count(arr);
//	printf("小写字母的个数为%d\n", lc);
//	printf("大写字母的个数为%d\n", uc);
//	printf("0~9的数字的个数为%d\n", d);
//	printf("空格的个数为%d\n", s);
//	printf("其他字符的个数为%d\n", o);
//	system("pause");
//	return 0;
//}
//void count(char arr[])
//{
//	int i = 0;
//	char c;
//	while (arr[i])
//	{
//		c = arr[i];
//		if (c >= '0' && c <= '9')
//		{
//			d++;
//		}
//		else if (c >= 'a' && c < 'z')
//		{
//			lc++;
//		}
//		else if (c >= 'A' && c < 'Z')
//		{
//			uc++;
//		}
//		else if (c == ' ')
//		{
//			s++;
//		}
//		else
//		{
//			o++;
//		}
//		i++;
//	}
//}