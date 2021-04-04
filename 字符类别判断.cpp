//目的：进行字符的类别判断（判断原则时根据他的ASCII码的大小）
//编写人：唐嘉慧
//修改日期：4月1日
#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)//主函数
{
	char ch;//定义一个char类型的字符
	printf("请输入一个字符\n");//提示用户应该输入一个字符
	ch = getchar();
	getchar();//将字符后的换行符利用getchar（）的形式吸收掉
	if (ch>='0'&&ch<='9')
	{//如果ch>='0'&&ch<='9'，说明他是一个数字
		printf("该为一个数字\n");
	}
	else if (ch < '32')
	{//如果ch < '32'，说明他是一个控制字符
		printf("该为一个控制字符\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{//如果ch >= 'a' && ch <= 'z'，说明他是一个小写字母
		printf("该为一个小写字母\n");
	}
	else if (ch >= 'A' && ch <= 'Z')
	{//如果ch >= 'A' && ch <= 'Z'，说明他是一个大写字母
		printf("该为一个大写字母\n");
	}
	else
	{//如果都不满足以上四种情况的话，说明他是一个其他字符
		printf("该为一个其他字符\n");
	}
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}