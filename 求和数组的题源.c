////////a+aa+aaa+~~~~
////////#include<stdio.h>
////////int main(void)
////////{
////////	int a, n, sum = 0, ans = 0; int i = 1;//注意这个i为1
////////	printf("请输入你的a和n");
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
//////	printf("请输入你的a和n:\n");
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
////	printf("请输入你的a和n " );
////	scanf_s("%d%d", &a, &n);
////	while (i < n)
////	{
////		ans += a;
////		sum += ans;
////		a *= 10;
////		i++;
////
////	}
////	printf("和为%d", sum);
////}
////a+aa+aaa+~~~~
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a, n, sum=0, tmp=0;
//	int i = 0;
//	printf("请输入你的a和n\n");
//	scanf_s("%d%d", &a, &n);
//	while (i < n)
//	{
//		tmp += a;
//		sum += tmp;
//		tmp *= 10;
//		i++;//注意一定要有i++
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}