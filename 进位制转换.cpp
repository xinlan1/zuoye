//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int binary(int m);
//int bajinzhi(int m);
//int shiliu(int m);
//int main(void)
//{
//	int a=0; int b,c=0;
//	printf("������һ��ʮ������\n");
//	scanf_s("%d",&a);
//	getchar();
//	printf("������һ�������������Ҫת��Ϊ�����Ƶľ�����1���������Ҫת��Ϊ�˽��Ƶľ�����2���������Ҫת��Ϊ16���Ƶľ�����3\n");
//	scanf_s("%d", &b);
//	switch (b)
//	{case 1:
//		c = binary(a);
//		printf("ת��Ϊ�����Ƶ���Ϊ%d\n", c);
//		break;
//	case 2:
//		printf("ת��Ϊ�˽��Ƶ���Ϊ");
//		c = bajinzhi(a);
//		printf("%d\n", c);
//		break;
//	case 3:
//		printf("ת��Ϊʮ�����Ƶ���Ϊ");
//		c = shiliu(a);
//		printf("%d\n", c);
//		break;
//	default:
//		printf("�����������������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//int binary(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 2;
//		m = m / 2;
//		sum += a * pow(10, i++);
//	}
//	return sum;
//}
//int bajinzhi(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 8;
//		m= m/ 8;
//		sum += a*pow(10, i++);
//	}
//	return sum;
//}
//int shiliu(int m)
//{
//	int i = 0;
//	int a;
//	int sum = 0;
//	while (m)
//	{
//		a = m % 16;
//		m=m/ 16;
//		sum += a*pow(10, i++);
//	}
//	return sum;
//}