//#include<stdio.h>//标准的输入输出流
//#include<stdlib.h>//system("pause")要用
//int main(void)
//{
//	int level, i = 0,j;
//	printf("level=");
//	scanf_s("%d", &level);//先输出你想打印金字塔的层数
//	for (i = 0; i < level; i++)
//	{
//		for (j = 0; j < level - i - 1; j++)
//		{
//			printf(" ");//在j < level - i - 1打印空格
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");//在j < 2 * i - 1打印*
//		}
//		printf("\n");//在每一行打印完成后要换行
//	}
//	system("pause");//将黑色窗口停留，用户按任意键后才会退出
//	return 0;//程序正常运行要返回一个0
//	
//}