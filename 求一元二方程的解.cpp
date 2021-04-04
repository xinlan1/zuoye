//目的：用户输入三个值作为一元二次方程的二次项系数，
//一次项系数，和常数项，判断该方程有无解，
//如果有解，请输出解的值
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
#include<math.h>//因为sqrt（）函数要用
int main(void)
{
	double a, b, c,d,x1,x2;
	printf("请输入你的一元二次方程的系数\n");//提示用户输入一元二次方程的系数
	scanf_s("%lf%lf%lf", &a, &b, &c);
	////double类型的变量的读入必须用%lf的形式
	//float类型的变量的输入和输出用%f的形式，
	//int类型的变量用%d的形式进行读入和输出
	//long int类型的变量用%ld的形式进行读入和输出
	//double类型的变量的输入用百分号lf来进行输入
	d = b * b - 4 * a * c;
	//判断有无解，以及是有两个相等的解还是，两个不相等的解
	if (d < 0)//如果d<0就没有实数根（即无解）
	{
		printf("没有实数根\n");
		exit(0);
	}
	else if (d == 0)
	{//d=0，两个根相等
		x1 = x2 = -b / 2 * a;
		printf("两个根相等，他们分别是%lf %lf\n", x1, x2);
	}
	else
	{//d>0有两个不相等的实数根
		x1 = (-b + sqrt(d)) / 2 * a;
		x1 = (-b - sqrt(d)) / 2 * a;
		printf("两个根分别是%lf %lf", x1, x2);
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}