#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
////for循环的变种
////for循环的初始化、判断、调整都可以省略，但不要随便省略
////for循环的判断部分如果被省略，则判断条件恒为真，陷入死循环

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	//for (i=0; i < 10; i++)
//	//{
//	//	for (j=0; j < 10; j++)
//	//	{
//	//		printf("hehe\n");//100个
//	//	}
//	//}
//
//	for (; i <10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");//10个
//		}
//	}
//
//     return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//代码循环了0次，k=0为假

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}

//计算n的阶乘
// （我的思路）err
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	ret = i++ * i;
//	for (i = 1;i< i++; i++)
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//（答案）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
////100的阶乘比较大，int类型是四个字节，装不下这个数就会溢出

//求阶乘的和（不理解）
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}



