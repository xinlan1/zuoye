//目的：判断用户输入的五位数是不是回文数
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	int a, b, c, d;
	int m;
	printf("请输入一个五位数\n");
	scanf_s("%d", &m);//将刚刚输入的五位数读入
	a = m % 100000 / 10000;//如果该数有五位数的话，通过该语句可以得到最高位的那位数（万的那位）
	b = m % 10000 / 1000;//得到千位数的那个数字
	c = m % 100 /10;//得到十位数的那个数字
	d = m % 10;//得到个位数的那个数字
	//因为如果有五位数的话，它的百位数是可以不用管的
	//因为只要比较第一位数和第五位数，第二位数和倒数第二位数比较即可（从高位到低位）
	if (a == d && b == c)
	{
		printf("该数是一个回文数\n");//如果第一位数和
		//第五位数，第二位数和倒数第二位数是相等的，
		//那么该数就是回文的
	}
	else
	{//否则就不是回文的
		printf("该数不是一个回文数\n");
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}