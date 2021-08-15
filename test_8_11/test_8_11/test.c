////实现一个冒泡排序函数，将一个整型数组排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr是数组，对arr数组进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//1   解引用
//	return 0;
//}

//数组名就是数组的首元素地址
//两个例外：
//1.sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组
//2.&数组名，取出的数组的地址。&数组名，数组名表示整个数组

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);//首元素地址
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);//整个数组
	printf("%p\n", &arr + 1);

	return 0;
}