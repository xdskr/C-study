#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


/*
//����ָ������
//����ָ�� - ָ��
//����ָ������ - ��ź���ָ�������
//ָ������ - ���ָ�������
//����ָ������ - �������ָ�������
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x,int y)
{
	return x - y;
}
int main()
{
	int a = 10;
	int b = 20;
	//����ָ������
	int* arr[] = { &a, &b };
	
	//����ָ������
	int(*pf1)(int, int) = Add;
	int(*pf2)(int, int) = Sub;

	//���pfarr���Ǻ���ָ������
	int(*pfarr[2])(int, int) = { Add, Sub };

	return 0;
}
*/


//����ָ�������Ӧ��
//���������Ӽ��˳�
/*
//ԭʼ��ʽ��
void menu()
{
	printf("******************************\n");
	printf("*******1��add    2��sub*******\n");
	printf("*******3��mul    4��div*******\n");
	printf("*******     0��exit    *******\n");
	printf("******************************\n");
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
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������������������->");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d �� %d ��ӵĽ��Ϊ��%d\n", x, y, ret);
			break;
		case 2:
			printf("������������������->");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d �� %d ����Ľ��Ϊ��%d\n", x, y, ret);
			break;
		case 3:
			printf("������������������->");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d �� %d ��˵Ľ��Ϊ��%d\n", x, y, ret);
			break;
		case 4:
			printf("������������������->");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d �� %d ����Ľ��Ϊ��%d\n", x, y, ret);
			break;
		case 0:
			printf("�˳���������\n");
			break;
		default:
			printf("�Բ����������������Ч�����������룡\n");
			break;
		}


	} while (input);

	return 0;
}
*/

/*
//�Ľ���ʽ��
//����ָ������ - ת�Ʊ�
void menu()
{
	printf("******************************\n");
	printf("*******1��add    2��sub*******\n");
	printf("*******3��mul    4��div*******\n");
	printf("*******     0��exit    *******\n");
	printf("******************************\n");
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
	int ret = 0;
	//����һ������ָ������
	//�����һ��Ԫ�ط���һ��0����Ϊ�˺Ͳ˵���Ӧ��1�Ǽӣ�2�Ǽ���3�ǳˣ�4�ǳ�
	int(*pfarr[])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		if (0 == input)
		{
			printf("�˳���������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("������������������->");
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("���Ϊ��%d\n", ret);

		}
		else
		{
			printf("�Բ����������������Ч�����������룡\n");
			break;
		}



	} while (input);

	return 0;
}
*/





/*
//ǰ�潲�˺���ָ�����飺��ź���ָ�������
//��ô���ǵĺ���ָ���������ȡ��ַ����?--����
//��ô���ǰ��������ĵ�ַ���� ָ����ָ�������ָ����

int main()
{
//ָ��ӷ�����ĺ���ָ��
int(*p)(int, int);//����ָ��
//����ָ������
int(*parr[4])(int, int);

//ָ����ָ�������ָ��
//��� pparr ����һ��ָ�룬��һ��ָ����ָ�������ָ��
int(*(*pparr)[4])(int, int);

return 0;
}
*/