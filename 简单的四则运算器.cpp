//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	float a, b;
//	int flag = 0;
//	do
//	{  
//	   printf("请输入你的两个数字");
//	   scanf_s("%f%f", &a, &b);
//	   printf("请输入你想要的四则运算");
//	   getchar();
//	   scanf_s("%c", &ch);
//		switch (ch)
//		{
//		case '+':
//			printf("%f+%f=%f", a, b, a + b);
//			break;
//		case '-':
//			printf("%f-%f=%f", a, b, a - b);
//			break;
//		case '*':
//			printf("%f*%f=%f", a, b, a * b);
//			break;
//		case '/':
//			printf("%f/%f=%f", a, b, a / b);
//			break;
//		default:
//			printf("输入错误，请重新输入");
//			break;
//		}
//		printf("请判断是否还需要再次计算\n");
//		printf("如果需要请输入1,如果不需要请输入0\n");
//		scanf_s("%d", &flag);
//	} while (flag);
//}