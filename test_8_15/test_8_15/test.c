#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//��2��1
//	printf("%d\n", a);//2
//
//	int b = 5 % 2;
//	printf("%d\n", b);//1
//
//	double c = 5 / 2.0;
//	printf("%lf\n", c);//2.500000
//
//	//double c = 5 % 2.0;//err
//
//	return 0;
//}
////����%֮�⣬�����ļ��������������������������͸�����
////����/�����������������������Ϊ������ִ��������������ֻҪ�и�������ִ�еľ��Ǹ���������
////%����������������������Ϊ���������ص�������֮�������

//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d\n", b);//4
//	//00000000000000000000000000010000--16
//	//00000000000000000000000000000100--4
//
//	int n = -1;
//	int m = n << 1;
//	printf("m=%d\n", m);//-2
//	
//	int c = 5;
//	int d = c << 1;
//	printf("%d\n", d);//10
//	//000000000000000000000000000000101--5
//	//000000000000000000000000000001010--10
//
//	return 0;
//}
////>>--���Ʋ��������ƶ����Ƕ�����λ
////1.�������ƣ��ұ߶�������߲�ԭ����λ��������0��������1
////2.�߼����ƣ��ұ߶�������߲�0
////�����г�����Ч��
//
////�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
////�洢���ڴ���ǲ���
//// ��������ԭ�롢���롢��������ͬ��
//// 100000000000000000000000000001-ԭ��
//// 111111111111111111111111111110-���� ����λ���䣬����λ��λȡ��
//// 111111111111111111111111111111-���� �����һ
//
////���Ʋ���������߶������ұ߲�0��  
////�����г˶���Ч��
//
////���棺������λ���������Ҫ�ƶ�����λ������Ǳ�׼δ�����
//int num=0;
//num >> -1;//error
//
////��λ������ֻ������������

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);//1
//	//00000000000000000000000000000011--3
//	//00000000000000000000000000000101--5
//	//00000000000000000000000000000001--1
//
//	int d = a | b;
//	printf("%d\n", d);//7
//	//00000000000000000000000000000011--3
//	//00000000000000000000000000000101--5
//	//00000000000000000000000000000111--7
//
//	int e = a ^ b;
//	printf("%d\n", e);//6
//	//00000000000000000000000000000011--3
//	//00000000000000000000000000000101--5
//	//00000000000000000000000000000110--6
//
//	return 0;
//}
////&-��λ��������λ����
////|-��λ��������λ����
////^-��λ��������λ�������ͬΪ0����ͬΪ1
////һ��Ҫ�ò����������

////ʵ���������Ľ���
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	////����һ����ʱ����
//	//int tmp = 0;
//	//printf("before:a=%d,b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after:a=%d,b=%d\n", a, b);
//
//	////���������Ӽ���-���ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d ,%d \n", a, b);
//
//	//�����������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d ,%d \n", a, b);
//
//	return 0;
//}

////��д���룬��һ�������洢���ڴ��еĶ�������1�ĸ���
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	//��������
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))	
//		    count++;
//	}
//
//	//ͳ�Ʋ������м���1
//	//����һ��
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}*/
//
//	printf("%d\n", count);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));
	//sizeof����������ʱ����������ʡ��

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));//4��8
	printf("%d\n", sizeof(char*));

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int[10]));
	//����Ҳ�������͵ģ�ȥ���������������������

	return 0;
}
//sizeof������Ǳ�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�


