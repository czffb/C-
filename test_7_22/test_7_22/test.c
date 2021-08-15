//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]-下标引用操作符
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数调用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	auto int a = 10;//局部变量-自动变量
//
//	register int a = 10;//建议把a定义成寄存器变量
// 
//  signed int;//int定义的变量是有符号的
//  unsigned int num=1;//无符号的
// 
//  struct--结构体关键字
//  union--联合体/共用体
// 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;//typedef-类型定义-类型重定义
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	//int a = 1;
//	//a++;
//	//printf("a=%d\n", a);//2 2 2 2 2
//
//	static int a = 1;//a是一个静态的局部变量
//	//static修饰局部变量，局部变量的生命周期变长
//	//static修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法再使用了
//	a++;
//	printf("a=%d\n", a);//2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//extern int Add(int, int);//声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}//static修饰函数，改变了函数的链接属性，变为了内部链接属性
////正常的函数是具有外部链接属性的

//#include<stdio.h>
////#define MAX 100//#define定义标识符常量
////int main()
////{
////	int a = MAX;
////	return 0;
////}
//
////#define可以定义宏-带参数
//
////int Max(int x, int y)//函数的实现
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int max = Max(a, b);
////	printf("max=%d\n", max);//函数的方式
////	return 0;
////}
//
////#define MAX(X,Y)(X>Y?X:Y)//宏的定义
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int max = MAX(a, b);//max=(a>b?a:b);三目操作符
////	printf("max=%d\n", max);//宏的方式
////	return 0;
////}

//#include<stdio.h>
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//&-取地址；int*-类型；p是一个变量-指针变量
//	printf("%p\n", p);//%p-打印地址
//	printf("%p\n", &a);
//	//有一种变量是用来存放地址的-指针变量
//
//	*p = 20;
//	//*-解引用操作符/间接引用操作符，找到它的操作对象a
//	printf("a=%d\n", a);
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//4
//	//指针大小在32位平台是4个字节，在64位平台是8个字节
//	*pc = 'a';
//	printf("%c\n", ch);//a
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };//利用结构体类型-创建一个该类型的结构体变量
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	b1.price = 15;
//  strcpy(b1.name,"C++");//strcpy-string copy-字符串拷贝-库函数-string.h
//  printf("%s\n",b1.name);
//	printf("修改后的价格:%d\n", b1.price);*/
//
//	struct Book* pb = &b1;
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	//. 结构体变量 .成员
//
//	printf("%s\n", pb->name);
//	print("%d\n", pb->price);
//	//-> 结构体指针 ->成员
//	return 0;
//}

