//#define _CRT_SECURE_NO_WARNINGS

//写代码将三个数按从大到小输出
// 我的思路（失败）：
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
//老师的思路：
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);//算法实现，a中放最大值，b中次之，c中放最小
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

//写一个代码打印1-100之间所有3的倍数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 100; i++)
//	{
//		if(i%3==0)//%表示的是余数
//		printf("%d ", i);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
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

//打印1000-2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否是闰年：
//		//1、能被4整除并且不能被100整除是闰年
//		//2、能被400整除的是闰年
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
//		//法二：
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//写一个代码打印100-200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数：
//		//1、试除法：产生2到i-1的数
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
//法二：
//#include<stdio.h>
//#include<math.h>
////aqrt是一个开平方的数学库函数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数：
//		//1、试除法：产生2到i-1的数
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

//编写程序数一下1到100的所有整数中出现多少数字9
//思路：个位上模10余9，十位上除以10商9
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

//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
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
//	//1/1+1/2+1/3...=1+0+0...=1 商0
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素的个数
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

//在屏幕上输出9*9乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-d 左对齐，%2d 两位数
//		}
//		printf("\n");
//	}
//	return 0;
//}

//【二分查找】编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//实现猜数字游戏
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
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t*timer)
//	//time_t
//	ret = rand() % 100 + 1;//生成1-100之间的随机数
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:\n");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//null 空指针
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//一个关机程序(goto语句)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 60秒后关机
//	//shutdown -a 取消关机
//	//cmd command-命令行
//	//system() 执行系统命令,头文件为<stdlib.h>
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟之内关机，如果输入：我是仙女，就取消关机\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是仙女") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

