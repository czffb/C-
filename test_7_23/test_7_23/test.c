#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	//�������������Ҫִ�ж�����䣬Ӧ��ʹ�ô����
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("��������\n");
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
//	    else//����else��else�����������δƥ���ifƥ��
//		    printf("haha\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	//if (num = 5)//=��ֵ��==�ж����
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
//	switch (day)//switch(���ͱ��ʽ��
//	{
//	case 1://case������������ͳ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//		{//switch����Ƕ��ʹ��
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
//	//breakֹͣ���ڵ�����ѭ����ֱ����ֹѭ��
//	//while�е�break��������ֹѭ����
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1 2 3 4
//		i++;
//	}
//	//continue������ֹ����ѭ��
//	//����ѭ����continue����Ĵ��벻����ִ��
//	//����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();//����/�����ַ�
//
//	putchar(ch);//����ַ�
//	printf("%c\n", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF-end of file �ļ�������־--> -1
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
//	char password[20] = { 0 };//����������������׵�ַ�����鲻��Ҫȡ��ַ
//	printf("����������:");
//	scanf("%s", password);//�������벢�����password��
//	//��������ʣ��һ��'/n'
//	//��ȡһ��'/n'��ʹ�䲻����
//	while ((ch=getchar()) != '\n')
//	{
//		;//�����
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
////for(���1�����2�����3��
////���1����ʼ��
////���2���ж�
////���3������

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{   if(i=5)
//		printf("haha\n");//ѭ�����ڵ�ѭ���������ı�
//	printf("hehe\n");//��ѭ��
//	}
//	return 0;
//}
//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//����for����ѭ�����Ʊ�����ȡֵ��ȡ��ǰ�պ����䡱��д���������Ǿ���

