#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//ö�� - �ѿ��ܵ�ֵһһ�оٳ���
//���磺�Ա�һ���м��졢�·�
/*
enum Day//����
{
	//ö�����͵Ŀ���ȡֵ
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//�Ա�
{
	MALE,
	FEMALE,
	SECRET
};
enum Color//��ɫ
{
	//RED,//0
	//GREEN,//1
	//BLUE//2

	//RED,//0
	//GREEN = 5,//5
	//BLUE//6

	RED = 8,//8
	GREEN,//9
	BLUE//10
};

int main()
{
	enum Sex s = MALE;

	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);

	return 0;
}
*/



//����˵��ö�ٵ�Ӧ��
/*
enum Option
{
	EXIT,//Ĭ��Ϊ0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4 - ���˵���Ӧ������
};
void menu()
{
	printf("*****************************\n");
	printf("******1��add	 2��sub******\n");
	printf("******3��mul	 4��div******\n");
	printf("******	   0��exit	   ******\n");
	printf("*****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��ѡ��-->");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			printf("����������������-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case SUB:
			printf("����������������-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case MUL:
			printf("����������������-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case DIV:
			printf("����������������-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("����������ֲ��ڷ�Χ�ڣ����������룺\n");
			break;
		}

	} while (input);

	return 0;
}
*/

/*
ö�ٵ��ŵ㣺
���ǿ���ʹ�� #define ���峣����Ϊʲô��Ҫʹ��ö�٣� ö�ٵ��ŵ㣺
1. ���Ӵ���Ŀɶ��ԺͿ�ά����
2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
3. ��ֹ��������Ⱦ����װ��
4. ���ڵ���
5. ʹ�÷��㣬һ�ο��Զ���������
*/