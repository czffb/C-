#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Add(int x, int y)
//{
//	 int z = 0;
//	 z = x + y;
//	 return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}
//����Ҫ�к������������ͷ�������

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] ="bit";
//	char arr2[] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//strcpy-string copy-�ַ�������
//strlen-string length-���ַ����������
//strcpy(Ŀ�ĵ�,Դ)
//��Դͷ��Ŀ�ĵس�����Ȼ�����

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}
//memset-memory set
//memory-�ڴ� set-����
//memset(Ҫ�����ڴ�飬Ҫ���õ�ֵ��ֵ���ֽ���)

//�Զ��庯��
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ���������Խ����������α���������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//tmp-��ʱ����
//	printf("a=%d b=%d\n", a, b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//#include<stdio.h>
//void Swap1(int x, int y)//�����������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)//�β�
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//  ����Swap1����-��ֵ����
//	Swap1(a, b);
//  ����Swap2����-��ַ����
//	Swap2(&a, &b);//ʵ��
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void-�գ�������û�з���ֵ
//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ���ã��Ѻ����ⲿ�����������ڴ��ַ���ݸ���������
//          �����ú����ͺ�����ߵĺ�����������������ϵ�������ڲ�����ֱ�Ӳ���������ı���

//дһ�����������ж�һ�����ǲ�������
//��ӡ100-200֮�������
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	if (n == j)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//дһ�������ж�һ���Ƿ�Ϊ����
//��ӡ1000-2000֮�������
//#include<stdio.h>
//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//		return 1;
//	else if (i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
//#include<stdio.h>
//                     //������arr��һ��ָ��
//int binary_search(int arr[],int k,int sz)//�β���ʵ�ε����ֿ�����ͬ
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	                       //���ݹ�ȥ����arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//}

//��ʽ����
//#include<stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);//��ͨд��
//
//	printf("%d\n", strlen("abc"));//��ʽ����
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//printf�ķ���ֵ�ǣ���ӡ����Ļ���ַ��ĸ���

//��������
//#include<stdio.h>
////��������
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	��������
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//����������һ����ں���ʹ��֮ǰ
//����������һ��Ҫ����ͷ�ļ���
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��

