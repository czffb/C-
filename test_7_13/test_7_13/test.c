#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a' 'b' 'c' '\0'--'\0'���ַ����Ľ�����־�������ַ���������
//	char arr2[] = { 'a','b','c' ,0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", strlen(arr1));//strlen-string length-�����ַ�������
//    printf("%d\n", strlen(arr2));//���ֵ
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//printf("c:\test\32\test.c");
//	// \t-ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c");
//	// \\-���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
//	return 0;

//#include<stdio.h>
////#include<string.h>

//int main()
//{
//	/*printf("%d\n",strlen("c:\test\32\test.c"));*/
//	//\32--�������˽������֣���һ������һ���ַ�
//	//32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//\ddd--ddd��ʾ1~3���˽��Ƶ�����
//	printf("%c\n", '\x61');//a   ��һ���ַ�
//	//\xdd--dd��ʾ2��ʮ�����Ƶ�����
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("����ô�����(ѡ��0/1):");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	 int z = x + y;
//	 return z;
//
//}//������
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);//����
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����ʮ���������ֵ�����
//	printf("%d\n", arr[4]);//4������5���±꣬n���±�Ϊn-1  ������Ϊ5
//	//���±�ķ�ʽ����Ԫ�أ�arr[�±�]
//	/*char ch[20];
//	float arr[5];*/
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while(i<0)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}//�������û���гɹ�

//#include<stdio.h>
//
//int main()
//{
//	int a = 5 % 2;//%ȡģ,����
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//����1ռ4���ֽ�=32bitλ
//	//00000000000000000000000000000001
//	int b = a << 1;
//    //�ƣ������ƣ�λ������
//	//<<����
//	//>>����
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//��2���ƣ�λ����
//	//int a = 3;//          3=011
//	//int b = 5;//          5=101
//	//int c = a & b;//&��λ�� 001=1
//
//	//int a = 3;//           3=011
//	//int b = 5;//           5=101
//	//int c = a | b;//|��λ��  111=7
//
//	//int a = 3; //           3=011
//	//int b = 5; //           5=101
//	//int c = a ^ b;//^��λ��� 110=6
//	////��λ���ļ�����ɣ���Ӧ�Ķ�����λ��ͬ����Ϊ0��������Ϊ1
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ  ==�ж����
//	a = a + 10;//����һ
//	a += 10;//������
//	a =a- 20;
//	a -= 20;
//	//���ϸ�ֵ����+=  -=  *=  /= >>=  <<= �ȵ�
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	////��Ŀ������ ����������
//	////˫Ŀ������ ����������
//	////��Ŀ������ ����������
//	//int a = 10;
//	//int b = 20;
//	//a + b;//˫Ŀ������  ����������
//	//��c�����б�ʾ��٣�0-��  ��0-��
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);//!-���߼�������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	////sizeof������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
//	////�������ʱ��������ʡ�ԣ���������ʱ����ʡ��
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//	////���������С
//	//int arr[10] = { 0 };//10������Ԫ�ص�����
//	////10*sizeof(int)=40
//	//printf("%d\n", sizeof(arr));
//
//	////���������Ԫ�ظ���
//	////����=������ܴ�С/ÿ��Ԫ�صĴ�С
//	//int arr[10] = { 0 };
//	//int sz = 0;
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz=%d\n", sz);
//    return 0;
//}

//��ҵ1 ���������еĽϴ�ֵ
// ����һ
//#include<stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//
//	return 0;
//}

//������
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y; 
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
