////ʵ��һ��ð������������һ��������������
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ������������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
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
//	//arr�����飬��arr������д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	bubble_sort(arr,sz);//ð��������
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
//	printf("%d\n", *arr);//1   ������
//	return 0;
//}

//�����������������Ԫ�ص�ַ
//�������⣺
//1.sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ��������
//2.&��������ȡ��������ĵ�ַ��&����������������ʾ��������

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);//��������
	printf("%p\n", &arr + 1);

	return 0;
}