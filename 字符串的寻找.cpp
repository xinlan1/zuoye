#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  N 100
int main(void)
{
	char a[N][N];
	char b[] = "aaa";//表示一个字符数组
	int n; int i = 0;
	printf("请输入你的字符串的个数\n");
	scanf_s("%d", &n);
	printf("请分别输入你的字符串\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%s", a[i], N);
	}
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i], b) == 0)
		{
			printf("找到了 \n");
			printf("他是%s", b);
			break;
		}
	}
	if (i == n)
	{
		printf("没有找到\n");
	}
	system("pause");
	return 0;
}