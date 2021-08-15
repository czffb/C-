//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

////函数的递归
//#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	main();//main函数无限调用自己，最终导致栈溢出
//	return 0;
//}
////函数递归：自己调用自己
////Stack overflow-栈溢出，栈区的空间被占完了

////接收一个整型值（无符号），按照顺序打印它的每一位。
////例如：输入1234，输出1 2 3 4
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
////print(1234)
////print(123)4
////print(12)3 4
////print(1)2 3 4
////递归的两个必要条件：
////存在限制条件，当满足这个限制条件的时候，递归便不再继续。
////每次递归调用之后越来越接近这个限制条件

////编写函数不允许创建临时变量，求字符串长度
//#include<stdio.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
////递归的方法
////思路：把大事化小
////my_strlen("zxx")
////1+my_strlen("xx")
////1+1+my_strlen("x")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "zxx";//z x x \0
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//
//	return 0;
//}
////arr是数组，数组传参传过去的不是整个数组，而是这个数组首元素的地址

////递归与迭代
////求n的阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	ret = Fac1(n);//用循环的方式
//	ret = Fac2(n);//用递归的方式
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

////求第n个斐波那契数（不考虑溢出）
////1 1 2 3 5 8 ......
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}//用递归写，效率过低
//
////用迭代（循环）写
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//课后作业
//1、汉诺塔问题
//2、青蛙跳台问题