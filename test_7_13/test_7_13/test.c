#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' '\0'--'\0'是字符串的结束标志，不算字符串的内容
//	char arr2[] = { 'a','b','c' ,0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度
//    printf("%d\n", strlen(arr2));//随机值
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//printf("c:\test\32\test.c");
//	// \t-水平制表符
//	printf("c:\\test\\32\\test.c");
//	// \\-用于表示一个反斜杠，防止它被解释为一个转义序列符
//	return 0;

//#include<stdio.h>
////#include<string.h>

//int main()
//{
//	/*printf("%d\n",strlen("c:\test\32\test.c"));*/
//	//\32--是两个八进制数字，这一整体是一个字符
//	//32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//\ddd--ddd表示1~3个八进制的数字
//	printf("%c\n", '\x61');//a   算一个字符
//	//\xdd--dd表示2个十六进制的数字
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会敲代码吗？(选择0/1):");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	 int z = x + y;
//	 return z;
//
//}//函数体
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);//函数
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放十个整型数字的数组
//	printf("%d\n", arr[4]);//4是数字5的下标，n的下标为n-1  输出结果为5
//	//用下标的方式访问元素，arr[下标]
//	/*char ch[20];
//	float arr[5];*/
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while(i<0)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}//这个代码没运行成功

//#include<stdio.h>
//
//int main()
//{
//	int a = 5 % 2;//%取模,余数
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//整型1占4个字节=32bit位
//	//00000000000000000000000000000001
//	int b = a << 1;
//    //移（二进制）位操作符
//	//<<左移
//	//>>右移
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//（2进制）位操作
//	//int a = 3;//          3=011
//	//int b = 5;//          5=101
//	//int c = a & b;//&按位与 001=1
//
//	//int a = 3;//           3=011
//	//int b = 5;//           5=101
//	//int c = a | b;//|按位或  111=7
//
//	//int a = 3; //           3=011
//	//int b = 5; //           5=101
//	//int c = a ^ b;//^按位异或 110=6
//	////按位异或的计算规律：对应的二进制位相同，则为0；相异则为1
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值  ==判断相等
//	a = a + 10;//方法一
//	a += 10;//方法二
//	a =a- 20;
//	a -= 20;
//	//复合赋值符：+=  -=  *=  /= >>=  <<= 等等
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	////单目操作符 单个操作数
//	////双目操作符 两个操作数
//	////三目操作符 三个操作数
//	//int a = 10;
//	//int b = 20;
//	//a + b;//双目操作符  两个操作数
//	//在c语言中表示真假：0-假  非0-真
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);//!-反逻辑操作符
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	////sizeof计算的是变量或类型所占空间的大小，单位是字节
//	////计算变量时（）可以省略，计算类型时不能省略
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//	////计算数组大小
//	//int arr[10] = { 0 };//10个整形元素的数组
//	////10*sizeof(int)=40
//	//printf("%d\n", sizeof(arr));
//
//	////计算数组的元素个数
//	////个数=数组的总大小/每个元素的大小
//	//int arr[10] = { 0 };
//	//int sz = 0;
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz=%d\n", sz);
//    return 0;
//}

//作业1 求两个数中的较大值
// 方法一
//#include<stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//
//	return 0;
//}

//方法二
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y; 
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
