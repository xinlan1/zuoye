#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  N 100
int main(void)
{
	char a[N][N];
	char b[] = "aaa";//��ʾһ���ַ�����
	int n; int i = 0;
	printf("����������ַ����ĸ���\n");
	scanf_s("%d", &n);
	printf("��ֱ���������ַ���\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%s", a[i], N);
	}
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i], b) == 0)
		{
			printf("�ҵ��� \n");
			printf("����%s", b);
			break;
		}
	}
	if (i == n)
	{
		printf("û���ҵ�\n");
	}
	system("pause");
	return 0;
}