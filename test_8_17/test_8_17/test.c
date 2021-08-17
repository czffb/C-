//#include<stdio.h>
//int main()
//{
//	//未初始化的指针变量
//	int* p;
//	//局部变量不初始化，里面默认放的是一个随机值
//	//随机值作为一个地址时就不是一个有效的地址
//	*p = 20;
//	//当对p这个随机的地址进行解引用操作时，就相当于随便找了一个空间把20放进去
//	//非法访问
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		/**p = i;
//		p++;*/
//		*p++ = i;
//	}
//	//越界访问，访问了不属于自己的区域，导致野指针问题
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	//a为局部变量
//	//进入大括号时向内存申请4个字节，出了这个范围将这4个字节还给操作系统
//	//假设a空间的地址为0x0012ff44
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	//p返回时记住了a的空间地址0x0012ff44
//	//但这块地址已经还回操作系统，不属于编译器了
//	//再通过这个地址访问回去是非法的，访问的是还回去的空间
//
//	return 0;
//}
////访问的空间被释放

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//指针初始化
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}
////避免野指针：
//// 1.指针初始化
//// 2.小心指针越界
//// 3.指针指向空间释放时使用空指针NULL
//// 4.指针使用之前检查有效性

////指针的运算
////指针+-整数
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//传的是数组首元素的地址
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *p);//1 2 3 4 5 6 7 8 9 10
//	//	/*p = p + 1;*/
//	//	p++;
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);//1 3 5 7 9
//		p += 2;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//
//	/*char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &ch[0]);*///error 类型不兼容
//
//	return 0;
//}
////指针-指针 得到的是指针和指针之前元素的个数
////两个指针相减时指向的是同一块空间，指针类型相同

////用指针-指针 的方法求字符串长度
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);//3
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);      //00AFFB0C 
//	printf("%p\n", arr + 1);  //00AFFB10
//	                          //相差4个字节
//
//	printf("%p\n", &arr[0]);  //00AFFB0C
//	printf("%p\n", &arr[0]+1);//00AFFB10
//	                          //相差4个字节
//
//	printf("%p\n", &arr);     //00AFFB0C
//	printf("%p\n", &arr+1);   //00AFFB34
//	                          //相差40个字节 4*10
//
//	return 0;
//}
////数组名-首元素地址
////两个例外：
//// 1.&arr -&数组名-数组名不是首元素的地址，数组名表示整个数组 -&数组名取出的是整个数组的地址
//// 2.sizeof(arr) -sizeof(数组名)-数组名表示的是整个数组，计算的是整个数组的大小

////数组通过指针来访问
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//arr表示的是首元素的地址，放入p中
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  ======  %p\n", p + 1, &arr[i]);//地址一样
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	//第二颗*表示ppa是指针，而第一颗*表示ppa指向的类型是int*
//	//ppa里面存的是pa的地址
//	//*ppa找到的是pa的地址
//	//**ppa找到的是a的地址
//	int*** pppa = &ppa;//三级指针
//
//	printf("%d\n", **ppa);//10
//	return 0;
//}\

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/

	//指针数组-存放指针的数组
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));//10,20,30
	}
	return 0;
}