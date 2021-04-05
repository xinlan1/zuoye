////#include<stdio.h>
////#define M 3
////#define N 4
////int search(int*,int n);
////int main(void)
////{
////	int i = 0, j; int c = 0;
////	int a[M][N]; int x = 0;
////	printf("请输入一个3*4的矩阵\n");
////	for(i=0;i<M;i++)
////		for (j = 0; j < N; j++)
////		{
////			scanf_s("%d", &a[i][j]);
////		}
////	x=search(a, c);//注意函数的返回值的类型是int的一定要用一个变量来接住他！！切记
////		printf("最大的元素为%d", x);
////}
////int search(int  a[M][N],int n)
////{
////	int i, j;
////	int row = 0, line = 0;
////	int max = a[0][0];
////	for (i = 0; i < M; i++)
////	{
////		for (j = 0; j < N; j++)
////		{
////			if (a[i][j] > max)
////			{
////				max = a[i][j];
////				row = i;
////				line = j;
////			}
////		}
////	}
////	return max;
////
////
////}
//#include<stdio.h>
//#define M 3
//#define N 4
//int search(int a[M][N]);
//int main(void)
//{
//	int a[M][N];
//	int x = 0;
//	printf("请输入一个3*4的矩阵:\n");
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	x = search(a);
//	printf("矩阵中的最大元素%d:\n",x);
//}
//int search(int a[M][N])
//{
//	int i = 0,j=0;
//	int max = a[0][0];
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	return max;
//}
#include<stdio.h>
#define M 3
#define N 4
void get(int a[M][N]);
int main(void)
{
	int a[M][N];
	int i, j = 0; 
	printf("请输入你的矩阵：\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	get(a);
	return 0;
	

}
void get(int a[M][N])
{
	int line = 0, row = 0;
	int i, j = 0; int max = a[0][0];
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				line = i;
				row = j;
			}
		}
	}
	printf("该矩阵的最大元素为%d", a[line][row]);
	
}
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	int a[99][99]; int i, j,n;
	printf("请输入你是几阶矩阵\n");
	scanf_s("%d", &n);
	printf("请分别输入你的矩阵的元素\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)//将利用两层for循环将二阶矩阵的元素读入
		{
			scanf_s("%d", &a[i][j]);
		}
	}//第一个for循环代表行，第二个for循环代表列
	int max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//如果矩阵有有元素比max大，那么矩阵的max就定义为新的那个更大的元素
			}
		}
	}
	//得到矩阵中最大的数就是max了
	printf("最大的数为%d", max);//输出矩阵中最大的数max
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(void)
{
	int a[N][N];
	int i, j, n; int max = 4;
	printf("请输入你的矩阵的阶数\n");
	scanf_s("%d", &n);
	printf("请分别输入矩阵的元素\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
		    }
		}
	}
	printf("矩阵的最大元素为%d", max);
	system("pause");
	return 0;
}