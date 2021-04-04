//目的：输出9*9乘法表
//编写人：唐嘉慧
//编写日期：4月1日
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{//外循环时控制行的
		for (j = 0; j < i; j++)
		{
			printf(" ");//变量j从0~i利用空格填充
		}
		for (j = i; j <= 9; j++)
		{//从j=i开始，一直到j=9的时候结束，打印i*j的值
			printf("%d*%d=%d\t", i, j, i * j);
			//每个i*j之间要用\t来分割开
		}
		printf("\n");//在每行结束后要换行
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}