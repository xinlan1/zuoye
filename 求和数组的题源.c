////////a+aa+aaa+~~~~
////////#include<stdio.h>
////////int main(void)
////////{
////////	int a, n, sum = 0, ans = 0; int i = 1;//ע�����iΪ1
////////	printf("���������a��n");
////////	scanf_s("%d%d", &a, &n);
////////	while (i <= n)
////////	{
////////		ans += a;
////////		sum += ans;
////////		ans *= 10;
////////		i++;
////////	}
////////	printf("%d", sum);
////////
////////}
////////a+aa+aaa+~~~~
//////#include<stdio.h>
//////int main(void)
//////{
//////	int a, n, sum = 0, ans = 0;
//////	int i = 0;
//////	printf("���������a��n:\n");
//////	scanf_s("%d%d", &a, &n);
//////	for (i = 0; i < n; i++)
//////	{
//////		ans += a;
//////		sum += ans;
//////		a *= 10;
//////
//////	}
//////	printf("%d", sum);
//////
//////}
////////a+aa+aaa+~~~~
////#include<stdio.h>
////int main(void)
////{
////	int a, n, sum = 0, ans = 0;
////	int i = 0;
////	printf("���������a��n " );
////	scanf_s("%d%d", &a, &n);
////	while (i < n)
////	{
////		ans += a;
////		sum += ans;
////		a *= 10;
////		i++;
////
////	}
////	printf("��Ϊ%d", sum);
////}
////a+aa+aaa+~~~~
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a, n, sum=0, tmp=0;
//	int i = 0;
//	printf("���������a��n\n");
//	scanf_s("%d%d", &a, &n);
//	while (i < n)
//	{
//		tmp += a;
//		sum += tmp;
//		tmp *= 10;
//		i++;//ע��һ��Ҫ��i++
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}