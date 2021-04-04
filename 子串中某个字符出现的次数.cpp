//目的：寻找字符串中子串中某个字符串出现的次数
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
#include<string.h>//strlen（）函数要用到
int func(char str1[], char str2[99]);//进行字符查找的函数
int main(void)//主函数
{
	char str1[99], str2[99];
	//定义两个长度为99的字符数组
	printf("请输入一串字符串\n");//提示用户输出一串字符串
	scanf_s("%s", str1, 99);//将刚刚用户输入的字符串从缓冲区中方读入
	getchar();//将缓存区的空格读入，以免后期如果是输入一个字符
	//那么程序就不会读入你想要的那个字符，会从缓冲区中读入那个换行符
	printf("请输入你要查找的字符串\n");
	scanf_s("%s", str2, 99);
	int m = func(str1, str2);//调用func函数返回字符串中子串出现的次数，用变量m来接收它
	printf("%d次\n", m);//打印出字符串中某个字符出现的次数
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0

}
int func(char str1[], char str2[99])
{
	int i, j;
	int count = 0;//计数器
	for (i = 0; i < strlen(str1); i++)
	{//外循环是控制进行的次数
		for (j = 0; j < strlen(str2); j++)
		{//内循环是控制我们要查找的字符应该是小于等于strlen（str2）的，
			//又因为j是从0开始的，所以只需要小于strlen（str2）即可
			if (*(str1 + j + i) != *(str2 + j))
				//不是*（str2+i+j）是*(str2 + j))
			//	*(str1 + j + i)这个加i的原因只是因为表示循环到了第几轮了
			{
				break;
				//如果不满足(*(str1 + j + i) != *(str2 + j))
				//这个情况的话，那么说明该字符与字符
				//串中某个字符串不对应，所以只需要
				//break掉，进入下一层循环即可
			}
		}
		if (j == strlen(str2))
		{
			count++;
			//字符串的子串中如果不满足和我们输入的字符串
			//完全相同的关系的时候，就会break掉，
			//那么j是小于strlen（str2）的
			//，那么当等于srtlen（str2）时，
			//说明他们时相等的，计数器就可以加加
		}
	}
	return count;//返回得到的结果
}
