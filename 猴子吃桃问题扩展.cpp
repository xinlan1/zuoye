//目的：猴子吃桃问题
//解决猴子在第一天所拥有的桃子数目
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int func1(int n, int k);
int func2(int n);//利用调用两个不同的函数来实现相同的功能
int main(void)
{
	int a, sum;
	int d = 0;
	printf("请输入猴子第几天的桃子只剩一个\n");
	scanf_s("%d", &a);
	sum = func1(1, a);//为什么要将sum定义成一个整形，
	//因为函数的返回值的类型是一个整形的数值，
	//所以要用一个整形的变量来接收它
	printf("总共有%d\n", sum);//注意\n是换行符
	d = func2(a);
	printf("总共有%d\n", d);
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
int func1(int n, int k)
{//这个函数是通过递归函数的实现形式
	int sum;
	if (n == k)
	{//当n==k时，表明天数已经和猴子吃桃的天数已经相等了
		//，所以阶要结束递归的条件了
		sum = 1;
	}
	else
	{//如果不满足递归结束的条件，那么就要一直进行递归使用
		sum = 2 * (func1(n + 1, k) + 1);
	}
	return sum;//;//将所得的桃子数返回
}
int func2(int n)
{//这个函数是传统方式，是一般的实现形式
	int i = 1;
	int sum = 1;
	for (; i < n; i++)//for循环第一个变量没有写的原因
		//是：因为i变量已经在for循环外就定义和初始化已经申明好了，
		//所以在for循环内部没有必要将i的申明再写一遍
	{
		sum = (sum + 1) * 2;//这样计算的原因是
		//相当于求它的逆过程，就可以得到他的原先的桃子的数量了
	}
	return sum;//将所得的桃子数返回
}
