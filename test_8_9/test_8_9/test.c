#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Add(int x, int y)
//{
//	 int z = 0;
//	 z = x + y;
//	 return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}
//函数要有函数名，参数和返回类型

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] ="bit";
//	char arr2[] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//strcpy-string copy-字符串拷贝
//strlen-string length-与字符串长度相关
//strcpy(目的地,源)
//若源头比目的地长，必然会溢出

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}
//memset-memory set
//memory-内存 set-设置
//memset(要填充的内存块，要设置的值，值得字节数)

//自定义函数
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//tmp-临时变量
//	printf("a=%d b=%d\n", a, b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//#include<stdio.h>
//void Swap1(int x, int y)//不能完成任务
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)//形参
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//  调用Swap1函数-传值调用
//	Swap1(a, b);
//  调用Swap2函数-传址调用
//	Swap2(&a, &b);//实参
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void-空，代表函数没有返回值
//传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用：把函数外部创建变量的内存地址传递给函数参数
//          可以让函数和函数外边的函数建立起真正的联系，函数内部可以直接操作函数外的变量

//写一个函数可以判断一个数是不是素数
//打印100-200之间的素数
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	if (n == j)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//写一个函数判断一年是否为闰年
//打印1000-2000之间的闰年
//#include<stdio.h>
//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//		return 1;
//	else if (i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找
//#include<stdio.h>
//                     //本质上arr是一个指针
//int binary_search(int arr[],int k,int sz)//形参与实参的名字可以相同
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	                       //传递过去的是arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//}

//链式访问
//#include<stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);//普通写法
//
//	printf("%d\n", strlen("abc"));//链式访问
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//printf的返回值是，打印在屏幕上字符的个数

//函数声明
//#include<stdio.h>
////函数声明
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	函数调用
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//函数的声明一般放在函数使用之前
//函数的声明一般要放在头文件中
//函数的定义是指函数的具体实现，交代函数的功能实现

