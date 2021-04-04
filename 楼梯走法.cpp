//目的：利用递归的形式实现楼梯走法
//它的本质是与斐波拉契函数的解决方案是一样的 
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入和输出流
int fibon(int n);//递归函数的声明
int main(void)//主函数
{
	int x = 0, n = 0;//定义两个整形的变量
	printf("请输入一个整数");//提示用户输入一个整数
	scanf_s("%d", &n);//将用户刚刚输入缓冲区的整数的值读入
	x = fibon(n);//输入一个数n，将n作为参数传入到函数中去，
	//将结果返回，然后赋值给x
	printf("所得的值为 % d\n", x);//打印输出x就是所得的结果
}
int fibon(int n)
{
	int t = 0;
	switch (n)
	{//利用n的取值不同，进入不同的开关里面
	case 0:t = 0; break;//这一步是递归结束的条件
	case 1:t = 1; break;//这一步也是递归结束的条件
	default:t = fibon(n - 1) + fibon(n - 2);
		//注意每一步都要有break，其中default如果是最后一部步可以不要break
	}
	return t;//将所得到的楼梯走法返回的值返回
}
