////数组是一组同类元素的集合
////数组的创建方式：type_t   arr_name   [const_n]
////type_t 是指数组的元素类型
////const_n 是一个常量表达式，用来指定数组的大小
////注：数组创建，[]中要给一个常量才可以，不能使用变量
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b','c' };
//	char arr3[5] = "abc";
//	char arr4[3] = { 'a',98,'c' };//数字会转成阿斯克码表
//
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算arr4所占空间的大小
//	//7个元素-char 7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度-'\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//
//	/*int n = 5;
//	char ch[n];*///err,[]中只能放常量
//
//	return 0;
//}
////1.strlen 和 sizeof 没有什么关联
////2.strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用得引用头文件
////3.sizeof 计算变量、数组、类型的大小-单位是字节-操作符
//
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);//d
//	//int i = 0;
//	///*for (i = 0; i < 6; i++)*/
//	//for(i=0;i<strlen(arr);i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//		return 0;
//}
////[]-下标引用操作符
//
////总结：
////1.数组是使用下表来访问的，下标是从0开始。
////2.数组的大小可以通过计算得到。

////一维数组在内存中的存放
////数组在内存中是连续存放的
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

////二维数组
//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = { {1,2,3} ,{4,5} };
//	//一个3行4列的二维数组
//	//{{第一行},{第二行}}
//
//	int arr2[][4] = { {2,3},{4,5} };
//	//二维数组的列[]不能省略
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////二维数组在内存中的存储
////二维数组在内存中的存放也是连续的
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}