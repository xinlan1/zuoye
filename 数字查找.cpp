//目的：进行数字查找
//编写人：唐嘉慧
//编写日期：4月1日
#include<stdio.h>//标准的输入和输出流
#include<stdlib.h>//system("pause")要用
int main(void)//主函数
{
	int a[10];//定义一个长度为10的整形数组
	int m = 10;//需要查找的数为10
	printf("请输入十个整数\n");//提示用户输入十个整数
	for (int i = 0; i < 10; i++)
	{//将永辉刚刚输入的数从缓冲区中读入
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{//利用for循环遍历完数组中的所有元素，
		//如果我们设置的那个数与数组中某个元素的值相同，
		//那么就输出找到了
		if (a[i] == m)
		{
			printf("找到了，该数为%d", m);
		}
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}