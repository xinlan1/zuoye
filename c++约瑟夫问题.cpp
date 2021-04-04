//目的：用c++来实现约瑟夫问题
//编写人：唐嘉慧
//修改日期：4月1日
#include<iostream>//c++中标准的输入和输出流
using namespace std;//使用标准的名空间std
#include<list>//因为后面要有list容器，所以要引用list的头文件
#include<stdlib.h>//system("pause")要用
void list1(int m, int n);//具体实现形式
int main()//主函数
{
	int m, n;//定义两个整形的变量m，n
	printf("请输入两个数字\n");//提示用户输入两个数字
	scanf_s("%d%d", &m, &n);//将用户输入的两个数字从缓冲区中读入
	 if(m!=0 || n!=0)
	{
		list1(m, n);//如果m!=0 || n!=0的话，就调用解决约瑟夫问题的这个函数
	}
	 system("pause");////将黑色窗口停留，用户按任意键后才会退出
	 return 0;//程序正常运行要返回一个0
}
void list1(int m, int n)
{

	list<int> a;//定义一个整形的list容器a
	int i;//定义一个整形的变量i
	for (i = 1; i <= m; i++)
	{
		a.push_back(i);//利用尾插法的形式将从1~m
		//的整数插入到list容器中
	}
	list<int> ::iterator it = a.begin();//list容器的起始迭代器
	//list迭代器容器的类型必须要与list容器的类型相一致
	while (a.size() > 1)//当list容器的大小大于1时，就会执行该循环
	{//a.size()可以计算list容器中的元素的个数
		for (i = 1; i < n; i++)
		{
			it++;//
			if (it == a.end())//a.end()是指向终止迭代器的下一个元素
			{//当it == a.end()说明已经到末尾了，
				//但是约瑟夫问题是循环的，
				//所以a.end()必须指向起始迭代器，
				//即第一个元素
				it = a.begin();
			}
		}
		list<int>::iterator It = ++it;
		//当it这个list容器的迭代器的下一个元素是指向
		//最后一个元素的时候，那么也需要将这个下一个元素
		//指向第一个元素，即其实迭代器
		if (It == a.end())
		{
			It = a.begin();
		}
		--it;//因为需要删除的元素是it元素这个迭代器所指向的上一个元素
		//但是，在前面判断的过程中，it容器已经++了，
		//所以要将it--指向所要删除的元素之后，
		//才将需要退出的元素删除
		a.erase(it);
		it = It;//下一个元素指向刚刚被删除元素的下一个元素
	}
	//所以It这个迭代器既可以判断有没有到末尾，
	//也可以使下一轮循环到被删除元素的下一个元素中
	printf("%d", *it);//这个时候容器里只有一个人了，
	//但是我们还是需要打印它的信息，*it是解引用的意思，可以打印出该元素的值
}
