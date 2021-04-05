
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	int a[3][3]; //定义一个三阶的矩阵，前面的3表示行，第二个表示列
	int i, j; int sum = 0;
	printf("请输入三阶矩阵\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);//利用两层for循环将三阶矩阵读入内存当中去
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += a[i][i];//三阶对角元素求和
	}
	printf("之和为%d", sum);//输出结果
	system("pause");//将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}