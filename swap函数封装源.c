///*定义一个函数 swap，实现对两个整数的交换操作。在 main 函数中接收用户
//输入的两个整数，调用 swap 函数交换，输出交换后的结果。（注：要求使用
//指针实现，并且不能使用数组）。*/
//#include<stdio.h>
//void swap(int*, int*);
//int main(void)
//{
//	int i, j;
//	printf("请输入你要交换的两个数的值:\n");
//	scanf_s("%d%d", &i, &j);
//	swap(&i,&j);//注意这个要传地址进去！！！！！
//	printf("交换后的值为%d%d\t", i, j);
//}
//void swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
///*定义一个函数 swap，实现对两个整数的交换操作。在 main 函数中接收用户
//输入的两个整数，调用 swap 函数交换，输出交换后的结果。（注：要求使用
//指针实现，并且不能使用数组）。*/
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
void swap(int*, int*);//交换两个数的函数实现的原型
int main(void)
{
	int a, b;
	printf("请输入你要交换的整数:\n");
	scanf_s("%d%d", &a, &b);
	swap(&a, &b);
	printf("交换后的数为%d   %d", a, b);
}
void swap(int* a, int* b)
{
	int t = 0;
	t = *a;
	*a = *b;
	*b = t;
}
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
void change(int *a, int *b);//交换两个数的函数实现的原型
int main(void)
{
	int a, b;
	printf("请输入两个整数\n");
	scanf_s("%d", &a);//将两个整数读入到缓存区中去
	scanf_s("%d", &b);
	change(&a, &b);//为什么要传变量的地址，
	//因为如是是传值的话，那么当change函数退出时，a，b变量的
	//内存就会被释放，那么a，b 的值就是一个随机值了，这不是我们想要的结果
	//但是我们如果是传的指针的话，那么传进去就会改变变量的地址
	//，那么就可以修改两个变量的值了
	printf("交换后的整数为%d%d", a, b);//打印输出交换后的数
		system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
void change(int* a, int *b)
{
	int t = 0;
	t = *a;//t作为临时变量，用于交换两个数的值
	//注意要交换的数是上面类型的，那么你的临时变量就应该是什么类型的
	*a = *b;
	*b = t;
}