//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]-�±����ò�����
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--�������ò�����
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�����
//
//	register int a = 10;//�����a����ɼĴ�������
// 
//  signed int;//int����ı������з��ŵ�
//  unsigned int num=1;//�޷��ŵ�
// 
//  struct--�ṹ��ؼ���
//  union--������/������
// 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;//typedef-���Ͷ���-�����ض���
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	//int a = 1;
//	//a++;
//	//printf("a=%d\n", a);//2 2 2 2 2
//
//	static int a = 1;//a��һ����̬�ľֲ�����
//	//static���ξֲ��������ֲ��������������ڱ䳤
//	//static����ȫ�ֱ������ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷���ʹ����
//	a++;
//	printf("a=%d\n", a);//2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//extern int Add(int, int);//�����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}//static���κ������ı��˺������������ԣ���Ϊ���ڲ���������
////�����ĺ����Ǿ����ⲿ�������Ե�

//#include<stdio.h>
////#define MAX 100//#define�����ʶ������
////int main()
////{
////	int a = MAX;
////	return 0;
////}
//
////#define���Զ����-������
//
////int Max(int x, int y)//������ʵ��
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int max = Max(a, b);
////	printf("max=%d\n", max);//�����ķ�ʽ
////	return 0;
////}
//
////#define MAX(X,Y)(X>Y?X:Y)//��Ķ���
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int max = MAX(a, b);//max=(a>b?a:b);��Ŀ������
////	printf("max=%d\n", max);//��ķ�ʽ
////	return 0;
////}

//#include<stdio.h>
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//&-ȡ��ַ��int*-���ͣ�p��һ������-ָ�����
//	printf("%p\n", p);//%p-��ӡ��ַ
//	printf("%p\n", &a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//
//	*p = 20;
//	//*-�����ò�����/������ò��������ҵ����Ĳ�������a
//	printf("a=%d\n", a);
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//4
//	//ָ���С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
//	*pc = 'a';
//	printf("%c\n", ch);//a
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };//���ýṹ������-����һ�������͵Ľṹ�����
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//  strcpy(b1.name,"C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
//  printf("%s\n",b1.name);
//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//
//	struct Book* pb = &b1;
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	//. �ṹ����� .��Ա
//
//	printf("%s\n", pb->name);
//	print("%d\n", pb->price);
//	//-> �ṹ��ָ�� ->��Ա
//	return 0;
//}

