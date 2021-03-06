#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
#include<string.h>
void count(char arr[]);
#define N 10//宏定义： 将N替换为10  他只是简单的替换而已
//注意中间只能有一个分号，并且末尾不能有分号  否则变量或者常量会发生替换出错 
int lc = 0, uc = 0, d = 0, s = 0, o = 0;
//为什么要定义这些全局变量，因为便于在被调函数中修改后了以后，
//在主函数中也可以使用，
//如果定义为局部变量的话，那么该函数在程序结束后就已经将空间释
//放了，那么我们所得到的数就是一个随机的数，就不是我们想要的数了
int main(void)
{
	char arr[N + 1];//为什么要+1，因为字符的最后一个反斜杠0作为字符串的结束标志
	printf("请输入一百个以内的任意字符，如果超出了100个字符，只对100个字符进行统计\n");
	gets_s(arr);//可以用scanf_s以%s的形式将字符串进行输出
	//也可以用gets_s 的形式将字符串进行输入
	count(arr);//调用函数，进行各种字符的分类，并返回该字符的个数
	printf("小写字母的个数为%d\n", lc);
	printf("大写字母的个数为%d\n", uc);
	printf("0~9的数字的个数为%d\n", d);
	printf("空格的个数为%d\n", s);
	printf("其他字符的个数为%d\n", o);
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
void count(char arr[])
{
	int i = 0;
	char c;
	while (arr[i])
	{
		c = arr[i];
		if (c >= '0' && c <= '9')
		{
			d++;//当c >= '0' && c <= '9'表示为一个0~9的数字字符
		}
		else if (c >= 'a' && c < 'z')
		{
			lc++;//该语句表示不满足c >= '0' && c <= '9'但是满足c >= 'a' && c < 'z'
		}
		else if (c >= 'A' && c < 'Z')
		{
			uc++;//该语句表示不满足上面两种情况，但是满足c >= 'A' && c < 'Z'的情况
		}
		else if (c == ' ')
		{
			s++;//该语句表示不满足上面三种情况，但是满足c == ' '的情况
		}
		else
		{
			o++;//该语句表示都不满足上面的字符的情况，那么只有其他情况的字符了
		}
		i++;//每进行一轮，要将i++，否则会成为死循环
	}
}