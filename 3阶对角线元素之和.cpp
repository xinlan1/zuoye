
#include<stdio.h>//��׼�����������
#include<stdlib.h>//system("pause")Ҫ��
int main(void)
{
	int a[3][3]; //����һ�����׵ľ���ǰ���3��ʾ�У��ڶ�����ʾ��
	int i, j; int sum = 0;
	printf("���������׾���\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);//��������forѭ�������׾�������ڴ浱��ȥ
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += a[i][i];//���׶Խ�Ԫ�����
	}
	printf("֮��Ϊ%d", sum);//������
	system("pause");//����ɫ����ͣ�����û����������Ż��˳�
	return 0;//������������Ҫ����һ��0
}