////������һ��ͬ��Ԫ�صļ���
////����Ĵ�����ʽ��type_t   arr_name   [const_n]
////type_t ��ָ�����Ԫ������
////const_n ��һ���������ʽ������ָ������Ĵ�С
////ע�����鴴����[]��Ҫ��һ�������ſ��ԣ�����ʹ�ñ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b','c' };
//	char arr3[5] = "abc";
//	char arr4[3] = { 'a',98,'c' };//���ֻ�ת�ɰ�˹�����
//
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char 7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ����ĳ���-'\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//
//	/*int n = 5;
//	char ch[n];*///err,[]��ֻ�ܷų���
//
//	return 0;
//}
////1.strlen �� sizeof û��ʲô����
////2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ�����ͷ�ļ�
////3.sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������
//
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
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
////[]-�±����ò�����
//
////�ܽ᣺
////1.������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
////2.����Ĵ�С����ͨ������õ���

////һά�������ڴ��еĴ��
////�������ڴ�����������ŵ�
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

////��ά����
//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = { {1,2,3} ,{4,5} };
//	//һ��3��4�еĶ�ά����
//	//{{��һ��},{�ڶ���}}
//
//	int arr2[][4] = { {2,3},{4,5} };
//	//��ά�������[]����ʡ��
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

////��ά�������ڴ��еĴ洢
////��ά�������ڴ��еĴ��Ҳ��������
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