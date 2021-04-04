//目的：将用户输入的十进制整数，根据用户的需求调用不同的
//函数，来实现十进制转换为二进制，和八进制，以及十六进制的转换
//名称：进位制的转换
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
#include<math.h>//因为后面会有幂次方函数pow（），第一个参数是底数，第二个参数是指数
int binary(int m);//十进制转换为二进制
int bajinzhi(int m);//十进制转换为八进制
int shiliu(int m);//十进制转换为十六进制
int main(void)
{
	int a = 0; int b, c = 0;
	printf("请输入一个十进制数\n");//提示用户输入信息
	scanf_s("%d", &a);//将你刚刚输进去的变量读入
	getchar();
	printf("请输入一个数，如果是想要转换为二进制的就输入1，如果是想要转换为八进制的就输入2，如果是想要转换为16进制的就输入3\n");
	scanf_s("%d", &b);
	switch (b)//根据b的数值的不同进入switch case里面的不同分支里面，来转换为用户想要的进制
	{//注意每一个case里面都需要有一个break语句，
		//如果default在最后一个，那么可以要break，
		//也可以不要break，通常为了规范，还是要在每一个语句的下面都添加一个break语句
	case 1:
		c = binary(a);//将用户输的十进制整数传入，
		//该函数的返回值是一个跟用户输入的
		//十进制整数相对应的二进制数
		printf("转换为二进制的数为%d\n", c);
		break;
	case 2:
		printf("转换为八进制的数为");
		//将用户输的十进制整数传入，
		//该函数的返回值是一个跟用户输入的
		//十进制整数相对应的八进制数
		c = bajinzhi(a);
		printf("%d\n", c);
		break;
	case 3:
		printf("转换为十六进制的数为");
		//将用户输的十进制整数传入，
		//该函数的返回值是一个跟用户输入的
		//十进制整数相对应的十六进制数
		c = shiliu(a);
		printf("%d\n", c);
		break;
	default:
		printf("输入错误，请重新输入\n");
		//如果用户不是输入上面的那些整数的话，
		//就代表用户已经输入错误，需要提示用户重新输入
		break;
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
int binary(int m)
{
	int i = 0;
	int a;
	int sum = 0;
	while (m)//当m不为0循环就一直进行下去，知道m=0，然后退出循环
	{
		a = m % 2;
		m = m / 2;//十进制数转换为二进制数的具体实现
		sum += a * pow(10, i++);
	}
	return sum;//将你输入的十进制数所对应的二进制数返回
}
int bajinzhi(int m)
{
	int i = 0;
	int a;
	int sum = 0;//为什么要初始化sum等于0，因为sum是用来计算求和的一个变量，所以要初始化为0
	while (m)
	{
		a = m % 8;
		m = m / 8;//十进制数转换为八进制数的具体实现
		sum += a * pow(10, i++);
	}
	return sum;//将你输入的十进制数所对应的八进制数返回
}
int shiliu(int m)
{
	int i = 0;
	int a;
	int sum = 0;
	while (m)
	{
		a = m % 16; //十进制数转换为十六进制数的具体实现
		m = m / 16;
		sum += a * pow(10, i++);
	}
	return sum;//将你输入的十进制数所对应的十六进制数返回
}