//#include<stdio.h>
//
//int main()
//{
//	int a = 0;//4个字节=32bit位
//	int b = ~0;//b是有符号的整型，符号位为最高的一位数
//	//~--按（2进制）位取反,原来为1的二进制位变为0,0变为1
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//原码除了符号位，其他位按位取反，得到反码
//	//反码加一得到补码
//	//1表示负数，负数在内存中存储时，存储的是二进制的补码
//	//11111111111111111111111111111111（补码）
//	//11111111111111111111111111111110（反码）
//	//10000000000000000000000000000001（原码）其中符号位的1表示负号，故打印出的结果为-1
//	printf("%d\n", b);//-1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//printf("a=%d b=%d\n", a, b);//11 10
//	//int b = ++a;//前置++，先++，再使用
//	//printf("a=%d b=%d\n", a, b);//11 11
//	//int b = a--;//后置--,先使用，再--
//	//printf("a=%d b=%d\n", a, b);//9 10
//	//int b = --a;//前置--，先--，再使用
//	//printf("a=%d b=%d\n", a, b);//9 9
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//(类型）--强制类型转换，double-->int
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 3;//真
//	//int b = 5;//真
//	//int c = a && b;
//	////真--非0，假--0
//	////&&--逻辑与
//	//printf("c=%d\n", c);//1
//	//int a = 0;//假
//	//int b = 5;//真
//	//int c = a && b;
//	//printf("c=%d\n", c);//0
//
//	//int a = 3;//真
//	//int b = 0;//假
//	//int c = a || b;//||--逻辑或
//	//printf("c=%d\n", c);//1
//	//int a = 0;//假
//	//int b = 0;//假
//	//int c = a || b;
//	//printf("c=%d\n", c);//0
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	exp1?exp2:exp3--条件操作符/三目操作符
//	若exp1为真，则结果为exp2，否则为exp3
//
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max=%d\n", max);
//	
//	return 0;
//}

