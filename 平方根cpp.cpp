#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
#include<math.h>//因为math.h这个头文件需要用到这个头文件
int main(void)
{
	double m;//定义一个双精度的浮点数
	printf("请输入一个数值\n");//提示用户输入一个数
	scanf_s("%lf", &m);//将用户杠杆输入的值从缓冲区中读入
	double n = sqrt(m);//将传入的数进行求平方根的运算，
	//因为他的结果可能是double类型的，所以用的是double类型
	//的变量来接收它
	printf("他的平方根为%lf\n", n);//double类型的数用的
	//是百分号lf 的形式进行输出
	double a;
	printf("请再输入一个非0整数\n");
	scanf_s("%lf", &a);//为什么要非0，因为除数是不能为0的，否则程序会发生错误
	printf("倒数为%lf\n", 1 / a);
	int c, d;
	printf("请再输入两个整数\n");
	scanf_s("%d%d", &c, &d);
	int e = pow(c, d);//这个函数是求幂次方的函数，
	//第一个参数是底数，第二个参数是指数，
	//但是他需要用math.h函数
	printf("幂次方的结果为%d\n", e);
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}