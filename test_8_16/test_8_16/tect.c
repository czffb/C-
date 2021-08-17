//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	//sizeof始终计算的是s的类型（短整型，2字节）
//	//sizeof括号里的表达式是不参与运算的，s的值没有发生变化
//	printf("%d\n", s);//0
//	return 0;
//}
////short短整型，2个字节

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~按（2进制）位取反
//	//00000000000000000000000000000000 正整数的原码、反码、补码相同
//	//11111111111111111111111111111111 按位取反后的补码
//	//11111111111111111111111111111110 补码倒回的反码码（-1）
//	//10000000000000000000000000000001 反码倒回的原码
//	//-1
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	//000000000000000000000000000000000000001011 a=11
//	//000000000000000000000000000000000000000100 1<<2
//	//000000000000000000000000000000000000001111 a=15
//	//111111111111111111111111111111111111111011 ~(1<<2)
//	//000000000000000000000000000000000000001011 a=11
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	return 0;
//}
////(类型)-强制类型转换

//#include<stdio.h>
//void test1(int arr[])//用指针的类型接收，此时的int是指针
//{
//	printf("%d\n", sizeof(arr));//4或8个字节
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4或8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));//4*10=40
//	printf("%d\n", sizeof(ch));//1*10=10
//
//	test1(arr);//数组传参传过去的是首元素的地址
//	test2(ch);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 3;//真
//	int b = 5;//真
//	int c = a && b;
//	printf("%d\n", c);//1
//	return 0;
//}
////&&-逻辑与，并且，两个都为真才为真，否则为假
////||-逻辑或，其中一个为真则为真

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//左边算出的结果如果为假，右边就不再进行运算
//	//a++=0为假，后面不再继续运算，故b，c，d不变
//	//结束后a自增1
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1,2,3,4
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	//左边为真时，就不再继续后面的运算
//	//a++=1为真，后面不再运算，b，c，d的值不变
//	//结束后a自增1
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2,2,3,4
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 4)
//		b = 3;
//	else
//		b = -3;
//
//	b = (a > 4 ? 3 : -3);//三目操作符/条件操作符
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("%d\n", c);//13
//	return 0;
//}
////逗号表达式，用逗号隔开的多个表达式，从左向右依次执行
////整个表达式的结果是最后一个表达式的结果

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//
//	/*a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}*/
//
//	while(a=get_val(),count_val(a),a>0)
//	//逗号表达式
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//[]-下标引用操作符，操作数为数组名和下标数（索引值）
//	return 0;
//}

//#include<stdio.h>
//int get_max(int x, int y)//此处的（）不是函数调用操作符
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	//调用函数时的（）就是函数调用操作符
//	//操作数：函数名、传递给函数的参数
//	printf("max=%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = {"张三",20,"2102070262"};
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//
//	struct Stu* ps = &s1;//指针
//
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//char占1个字节=8个比特位
//	//优先选取最低位的字节内容，截断
//	//00000011 a
//	char b = 127;
//	//00000000000000000000000001111111
//	//11111111 b
//	char c = a + b;
//	//a和b要先进行整型提升，再执行加法运算
//	//00000000000000000000000000000011 提升后的a （符号位为0）
//	//00000000000000000000000001111111 提升后的b
//	//00000000000000000000000010000010 相加后的结果
//	//10000010 c 
//	//11111111111111111111111110000010 提升后的补码 （符号位为1，补符号位）
//	//11111111111111111111111110000001 反码
//	//10000000000000000000000001111110 原码
//	//-126
//
//	printf("%d\n", c);//-126
//
//	return 0;
//}
////整型提升是按变量的数据类型的符号位来提升的
////表达式中的字符和短整型操作数在使用之前被转换为普通整型
////表达式中各种长度可能小于int长度的整型值，都必须先转换为int或unsigned int，然后才能送入CPU去执行运算

////整型提升的实例1
//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;//b6-10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//判断是否相等 
//		printf("a");
//	//11111111111111111111111110110110 -a整型提升
//	//!=0xb6
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)//不需要整型提升
//		printf("c");
//	//c
//	return 0;
//}

////实例2
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	//c只要参与表达式运算就会发生整型提升
//	//表达式+c，就会发生提升，所以sizeof（+c）是4个字节
//	//同理，表达式-c也会发生整型提升，所以sizeof（-c）是4个字节
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//p为指针变量，存放内存单元地址的变量，指针就是地址
//	//int* 为指针类型
//	return 0;
//}
////存放在指针中的值都被当成地址处理
////一个小的单元为一个字节
////在32位平台上，一个指针变量的大小为4个字节，64位平台上为8个字节

////指针类型的意义1
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;//0x11 22 33 44
//	int* pa = &a;
//	*pa = 0;           //  00 00 00 00  4个字节
//	printf("%p\n", pa);
//
//	char* pc = &a;
//	*pc = 0;           //  00 33 22 11  1个字节
//	printf("%p\n", pc);
//
//	return 0;
//}
////指针类型决定了指针进行解引用操作时，能够访问空间的大小
////int* p: *p能够访问4个字节
////char* p: *p能够访问1个字节
////double* p: *p能够访问8个字节

////意义2
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);    //006FFDAC  AC
//	printf("%p\n", pa + 1);//006FFDB0  B0
//	                       //跳过4个字节
//
//	printf("%p\n", pc);    //006FFDAC  AC
//	printf("%p\n", pc + 1);//006FFDAD  AD
//	                       //跳过1个字节
//
//	return 0;
//}
////指针类型决定了指针走一步能 走多远（指针的步长）
////int* p: p+1-->4
////char* p: p+1-->1
////double* p: p+1-->8

////野指针
//#include<stdio.h>
//int main()
//{
//	int* p;//局部的指针变量，就被初始化为随机值
//	*p = 20;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//当指针指向的范围超出数组arr的范围时，p就是野指针
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	//局部变量一旦出了这个范围就销毁了，意味着这个空间还给了操作系统，不再属于编译器
//	//a的地址 0x0012ff44
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//p中确实接收了返回的地址0x0012ff44
//	//但是p指向的这块空间已经还给了操作系统了，已被释放
//
//	*p = 20;
//
//	return 0;
//}
////指针指向的空间被释放，也会导致野指针问题

//如何避免野指针：
// 1.指针初始化
// 2.小心指针越界
// 3.指针指向空间释放即放置NULL
// 4.指针使用之前检查有效性
