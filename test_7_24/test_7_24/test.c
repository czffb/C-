#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
////forѭ���ı���
////forѭ���ĳ�ʼ�����жϡ�����������ʡ�ԣ�����Ҫ���ʡ��
////forѭ�����жϲ��������ʡ�ԣ����ж�������Ϊ�棬������ѭ��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	//for (i=0; i < 10; i++)
//	//{
//	//	for (j=0; j < 10; j++)
//	//	{
//	//		printf("hehe\n");//100��
//	//	}
//	//}
//
//	for (; i <10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");//10��
//		}
//	}
//
//     return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//����ѭ����0�Σ�k=0Ϊ��

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}

//����n�Ľ׳�
// ���ҵ�˼·��err
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	ret = i++ * i;
//	for (i = 1;i< i++; i++)
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//���𰸣�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
////100�Ľ׳˱Ƚϴ�int�������ĸ��ֽڣ�װ����������ͻ����

//��׳˵ĺͣ�����⣩
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}



