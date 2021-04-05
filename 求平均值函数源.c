/////*输入一组整数，编写函数 filter 求出它们的平均值，并输出所有大于平均值
////的数。
////输入格式 第一行，一个正整数 n，表示一共输入 n 个数字（n <= 100）
////成都大学信息科学与工程学院 《 C 语言程序设计》编程练习题
////4 / 19
////第二行，n 个整数
////输出格式
////第一行，一个浮点数 average，表示 n 个数的平均值（保留两位小数）
////第二行，所有大于平均值的整数，每个数用空格隔开*/
////#include<stdio.h>
////int  filter(int a[],int b[],int n);
////int main(void)
////{
////	int i = 0; int b[99];
////	int a[99], n = 0; int x = 0;
////	printf("请输入你有几个整数:\n");
////	scanf_s("%d", &n);
////	printf("请输入你的元素、\n");
////	for(i = 0; i < n; i++)
////	{
////		scanf_s("%d", &a[i]);
////
////	}
////	x=filter(a,b,n);
////	if (x == 0) printf("没有");
////	else 
////	for (i = 0; i < x; i++)
////	{
////		printf("%d", b[i]);
////	}
////}
////int  filter(int a[], int b[],int n)
////{
////	float sum = 0, aver; int i = 0;
////	int count = 0; int j = 0;
////while(i<n)
////{
////
////	sum +=*(a+i);
////		i++;
////}
////aver = sum / n;
////for (i = 0; i < n; i++)
////{
////	if (a[i] > aver)
////	{
////		*(b + j) = *(a + i);//注意这个是b+j！！！
////		count++;
////	}
////}
////return count;
////}
/////*输入一组整数，编写函数 filter 求出它们的平均值，并输出所有大于平均值
////的数。
////输入格式 第一行，一个正整数 n，表示一共输入 n 个数字（n <= 100）
////成都大学信息科学与工程学院 《 C 语言程序设计》编程练习题
////4 / 19
////第二行，n 个整数
////输出格式
////第一行，一个浮点数 average，表示 n 个数的平均值（保留两位小数）
////第二行，所有大于平均值的整数，每个数用空格隔开*/
//#include<stdio.h>
//int  filter(int a[],int b[], int n);
//int main(void)
//{
//	int a[99],b[99], i, j = 0;
//	int n = 0; int sum = 0;
//	printf("请输入你有多少个正整数:\n");
//	scanf_s("%d", &n);
//	printf("请输入你的正整数:\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	sum=filter(a, b,n);
//	printf("大于平均值的数有%d个:\n", sum);
//	printf("他们分别是:\n");
//	for (i = 0; i < sum; i++)
//	{
//		printf("%d\t", b[i]);
//	}
//}
//int  filter(int a[], int b[],int n)
//{
//	float sum = 0, aver = 0; int j = 0;
//	int i = 0; int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	aver = sum / n;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > aver)
//			b[j++] = a[i];
//	}
//	return j;
//	printf("他们的平均值为%f", aver);
//}
