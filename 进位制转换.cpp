//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int binary(int m);
//int bajinzhi(int m);
//int shiliu(int m);
//int main(void)
//{
//	int a=0; int b,c=0;
//	printf("请输入一个十进制数\n");
//	scanf_s("%d",&a);
//	getchar();
//	printf("请输入一个数，如果是想要转换为二进制的就输入1，如果是想要转换为八进制的就输入2，如果是想要转换为16进制的就输入3\n");
//	scanf_s("%d", &b);
//	switch (b)
//	{case 1:
//		c = binary(a);
//		printf("转换为二进制的数为%d\n", c);
//		break;
//	case 2:
//		printf("转换为八进制的数为");
//		c = bajinzhi(a);
//		printf("%d\n", c);
//		break;
//	case 3:
//		printf("转换为十六进制的数为");
//		c = shiliu(a);
//		printf("%d\n", c);
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//int binary(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 2;
//		m = m / 2;
//		sum += a * pow(10, i++);
//	}
//	return sum;
//}
//int bajinzhi(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 8;
//		m= m/ 8;
//		sum += a*pow(10, i++);
//	}
//	return sum;
//}
//int shiliu(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 16;
//		m=m/ 16;
//		sum += a*pow(10, i++);
//	}
//	return sum;
//}