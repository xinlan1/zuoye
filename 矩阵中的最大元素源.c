////#include<stdio.h>
////#define M 3
////#define N 4
////int search(int*,int n);
////int main(void)
////{
////	int i = 0, j; int c = 0;
////	int a[M][N]; int x = 0;
////	printf("������һ��3*4�ľ���\n");
////	for(i=0;i<M;i++)
////		for (j = 0; j < N; j++)
////		{
////			scanf_s("%d", &a[i][j]);
////		}
////	x=search(a, c);//ע�⺯���ķ���ֵ��������int��һ��Ҫ��һ����������ס�������м�
////		printf("����Ԫ��Ϊ%d", x);
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
//	printf("������һ��3*4�ľ���:\n");
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	x = search(a);
//	printf("�����е����Ԫ��%d:\n",x);
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
	printf("��������ľ���\n");
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
	printf("�þ�������Ԫ��Ϊ%d", a[line][row]);
	
}
#include<stdio.h>//��׼�����������
#include<stdlib.h>//system("pause")Ҫ��
int main(void)
{
	int a[99][99]; int i, j,n;
	printf("���������Ǽ��׾���\n");
	scanf_s("%d", &n);
	printf("��ֱ�������ľ����Ԫ��\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)//����������forѭ�������׾����Ԫ�ض���
		{
			scanf_s("%d", &a[i][j]);
		}
	}//��һ��forѭ�������У��ڶ���forѭ��������
	int max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//�����������Ԫ�ر�max����ô�����max�Ͷ���Ϊ�µ��Ǹ������Ԫ��
			}
		}
	}
	//�õ�����������������max��
	printf("������Ϊ%d", max);//���������������max
	system("pause");////����ɫ����ͣ�����û����������Ż��˳�
	return 0;//������������Ҫ����һ��0
}
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(void)
{
	int a[N][N];
	int i, j, n; int max = 4;
	printf("��������ľ���Ľ���\n");
	scanf_s("%d", &n);
	printf("��ֱ���������Ԫ��\n");
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
	printf("��������Ԫ��Ϊ%d", max);
	system("pause");
	return 0;
}