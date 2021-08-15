#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	//如果条件成立，要执行多条语句，应该使用代码块
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("长寿老人\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else//悬空else，else和离它最近的未匹配的if匹配
//		    printf("haha\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	//if (num = 5)//=赋值；==判断相等
//	//{
//	//	printf("hehe\n");
//	//}
//
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	//while (i <= 100)
//	//{
//	//	/*if (i % 2 == 1)*/
//	//	if(i%2!=0)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch(整型表达式）
//	{
//	case 1://case语句后必须是整型常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 1;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (n == 1)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);//5,3
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//
//	//while (i <= 10)
//	//{
//	//	printf("%d ", i);//1 2 3 4 5 6 7 8 9 10
//	//	i++;
//	//}
//
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);//1 2 3 4
//	//	i++;
//	//}
//	//break停止后期的所有循环，直接终止循环
//	//while中的break是用于终止循环的
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1 2 3 4
//		i++;
//	}
//	//continue用于终止本次循环
//	//本次循环中continue后面的代码不会再执行
//	//而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();//接收/输入字符
//
//	putchar(ch);//输出字符
//	printf("%c\n", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF-end of file 文件结束标志--> -1
//	//ctrl+z
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//数组名代表数组的首地址，数组不需要取地址
//	printf("请输入密码:");
//	scanf("%s", password);//输入密码并存放在password中
//	//缓冲区还剩余一个'/n'
//	//读取一下'/n'，使其不存在
//	while ((ch=getchar()) != '\n')
//	{
//		;//空语句
//	}
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			/*break;*///1 2 3 4
//			continue;//1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}
////for(语句1，语句2，语句3）
////语句1：初始化
////语句2：判断
////语句3：调整

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{   if(i=5)
//		printf("haha\n");//循环体内的循环变量被改变
//	printf("hehe\n");//死循环
//	}
//	return 0;
//}
//不可在for循环体内修改循环变量，防止for循环失去控制
//建议for语句的循环控制变量的取值采取“前闭后开区间”的写法，但并非绝对

