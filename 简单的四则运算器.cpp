//目的：根据用户输入的四则元素的不同进行简单的计算
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	char ch;//定义一个字符形的变量ch，
	//之后根据ch值的不同利用switch case进入不同的分支
	float a, b;//为什么要定义为浮点型的，因为我们输入的数有可能是小鼠，不一定都是整数
	int flag = 0;//定义并初始化flag的值为0
	do
	{//按照规范“每一个分支都需要由break退出循环
		printf("请输入你的两个数字");//提示用户输入两个数字
		scanf_s("%f%f", &a, &b);//将你刚才输进缓冲区域的两个变量都进去
		printf("请输入你想要的四则运算");
		getchar();//为什么要用一个getchar(),
		//因为输入第二个数字的时候，还想缓冲区中输入了一个换行符
		//如果不用getchar（）将刚刚的那个\n读掉的话，
		//那么字符ch就会将那个换行符读入，就不能读入我们想要
		//的那个字符
		scanf_s("%c", &ch);//也可以用ch=getchar();的形式
		switch (ch)
		{//利用switch进行开关
			//即利用ch的不同的值来进入不同的路径
			//注意每一个路径都要有一个break；
		case '+':
			printf("%f+%f=%f", a, b, a + b);
			//为什么直接输入a+b的值可以直接将a+b的值
			//打印出来，因为a+b是由返回值的，
			//它的返回值就是相加后的结果
			break;
		case '-':
			printf("%f-%f=%f", a, b, a - b);
			break;
		case '*':
			printf("%f*%f=%f", a, b, a * b);
			break;
		case '/':
			if(b!=0)
			{//当除数不为0的情况下，才可以相除，否则会发生错误
				printf("%f/%f=%f", a, b, a / b);
			}
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
		printf("请判断是否还需要再次计算\n");
		printf("如果需要请输入1,如果不需要请输入0\n");
		scanf_s("%d", &flag);
	} while (flag);//利用flag的值来判断用户是否还需要进行计算
	//当flag=0的时候就退出，当flag的值为非0的时候就继续执行循环
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}