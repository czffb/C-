//#include<stdio.h>
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;
//	//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
//	//���ֵ��Ϊһ����ַʱ�Ͳ���һ����Ч�ĵ�ַ
//	*p = 20;
//	//����p�������ĵ�ַ���н����ò���ʱ�����൱���������һ���ռ��20�Ž�ȥ
//	//�Ƿ�����
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
//	//Խ����ʣ������˲������Լ������򣬵���Ұָ������
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	//aΪ�ֲ�����
//	//���������ʱ���ڴ�����4���ֽڣ����������Χ����4���ֽڻ�������ϵͳ
//	//����a�ռ�ĵ�ַΪ0x0012ff44
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	//p����ʱ��ס��a�Ŀռ��ַ0x0012ff44
//	//������ַ�Ѿ����ز���ϵͳ�������ڱ�������
//	//��ͨ�������ַ���ʻ�ȥ�ǷǷ��ģ����ʵ��ǻ���ȥ�Ŀռ�
//
//	return 0;
//}
////���ʵĿռ䱻�ͷ�

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//ָ���ʼ��
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}
////����Ұָ�룺
//// 1.ָ���ʼ��
//// 2.С��ָ��Խ��
//// 3.ָ��ָ��ռ��ͷ�ʱʹ�ÿ�ָ��NULL
//// 4.ָ��ʹ��֮ǰ�����Ч��

////ָ�������
////ָ��+-����
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//������������Ԫ�صĵ�ַ
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
//	printf("%d\n", &arr[9] - &ch[0]);*///error ���Ͳ�����
//
//	return 0;
//}
////ָ��-ָ�� �õ�����ָ���ָ��֮ǰԪ�صĸ���
////����ָ�����ʱָ�����ͬһ��ռ䣬ָ��������ͬ

////��ָ��-ָ�� �ķ������ַ�������
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
//	                          //���4���ֽ�
//
//	printf("%p\n", &arr[0]);  //00AFFB0C
//	printf("%p\n", &arr[0]+1);//00AFFB10
//	                          //���4���ֽ�
//
//	printf("%p\n", &arr);     //00AFFB0C
//	printf("%p\n", &arr+1);   //00AFFB34
//	                          //���40���ֽ� 4*10
//
//	return 0;
//}
////������-��Ԫ�ص�ַ
////�������⣺
//// 1.&arr -&������-������������Ԫ�صĵ�ַ����������ʾ�������� -&������ȡ��������������ĵ�ַ
//// 2.sizeof(arr) -sizeof(������)-��������ʾ�����������飬���������������Ĵ�С

////����ͨ��ָ��������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//arr��ʾ������Ԫ�صĵ�ַ������p��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  ======  %p\n", p + 1, &arr[i]);//��ַһ��
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//һ��ָ��
//	int** ppa = &pa;//����ָ��
//	//�ڶ���*��ʾppa��ָ�룬����һ��*��ʾppaָ���������int*
//	//ppa��������pa�ĵ�ַ
//	//*ppa�ҵ�����pa�ĵ�ַ
//	//**ppa�ҵ�����a�ĵ�ַ
//	int*** pppa = &ppa;//����ָ��
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

	//ָ������-���ָ�������
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));//10,20,30
	}
	return 0;
}