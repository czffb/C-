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

////�����ĵݹ�
//#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	main();//main�������޵����Լ������յ���ջ���
//	return 0;
//}
////�����ݹ飺�Լ������Լ�
////Stack overflow-ջ�����ջ���Ŀռ䱻ռ����

////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
////���磺����1234�����1 2 3 4
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
////�ݹ��������Ҫ������
////���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
////ÿ�εݹ����֮��Խ��Խ�ӽ������������

////��д��������������ʱ���������ַ�������
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
////�ݹ�ķ���
////˼·���Ѵ��»�С
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
////arr�����飬���鴫�δ���ȥ�Ĳ����������飬�������������Ԫ�صĵ�ַ

////�ݹ������
////��n�Ľ׳�
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
//	ret = Fac1(n);//��ѭ���ķ�ʽ
//	ret = Fac2(n);//�õݹ�ķ�ʽ
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

////���n��쳲��������������������
////1 1 2 3 5 8 ......
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}//�õݹ�д��Ч�ʹ���
//
////�õ�����ѭ����д
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
//	//TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//�κ���ҵ
//1����ŵ������
//2��������̨����