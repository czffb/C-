//#define _CRT_SECURE_NO_WARNINGS

//д���뽫���������Ӵ�С���
// �ҵ�˼·��ʧ�ܣ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	b = a -= 3;
//	scanf("%d", &a);
//	for (i = a;i>b; i--)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//��ʦ��˼·��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);//�㷨ʵ�֣�a�з����ֵ��b�д�֮��c�з���С
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 100; i++)
//	{
//		if(i%3==0)//%��ʾ��������
//		printf("%d ", i);
//	}
//	return 0;
//}

//���������������������������Լ��
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��ӡ1000-2000��֮�������
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ������꣺
//		//1���ܱ�4�������Ҳ��ܱ�100����������
//		//2���ܱ�400������������
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ",year);
//			count++;
//		}*/
//
//		//������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//дһ�������ӡ100-200֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1���Գ���������2��i-1����
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//������
//#include<stdio.h>
//#include<math.h>
////aqrt��һ����ƽ������ѧ�⺯��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1���Գ���������2��i-1����
//		int j = 0;
//		for (j = 2; j <sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//��д������һ��1��100�����������г��ֶ�������9
//˼·����λ��ģ10��9��ʮλ�ϳ���10��9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3...=1+0+0...=1 ��0
//	printf("%lf\n", sum);
//	return 0;
//}

//��10�������е����ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�صĸ���
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-d ����룬%2d ��λ��
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�����ֲ��ҡ���д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//ʵ�ֲ�������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("**** 1.play 0.exit ****\n");
//	printf("***********************\n");
//}
////RAND_MAX 32767
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t*timer)
//	//time_t
//	ret = rand() % 100 + 1;//����1-100֮��������
//	//2.������
//	while (1)
//	{
//		printf("�������:\n");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//null ��ָ��
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//һ���ػ�����(goto���)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 60���ػ�
//	//shutdown -a ȡ���ػ�
//	//cmd command-������
//	//system() ִ��ϵͳ����,ͷ�ļ�Ϊ<stdlib.h>
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1����֮�ڹػ���������룺������Ů����ȡ���ػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������Ů") == 0)//�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

