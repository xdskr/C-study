#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>


//�ݹ�ķ�ʽ��ӡһ��������ÿһλ
//1234 
//123 4
/*
void print_every(int k)
{
	if (k > 9)
	{
		print_every(k / 10);
		printf("%d ",k % 10);
	}
	if (k > 0 && k < 10)
		printf("%d ",k);
}

int main()
{
	int i = 0;
	scanf("%d",&i);

	print_every(i);

	return 0;
}
*/


//��׳�
//��һ���ݹ�
/*
int mul_mul(int k)
{
	if (k == 0)
		return 0;
	if (k != 1)
		return k*mul_mul(k - 1);
	else
		return 1;
	
}
//5*mul_mul(4)
//5*4*mul_mul(3)

int main()
{
	int i = 0;
	scanf("%d",&i);

	int ret = mul_mul(i);
	printf("%d\n",ret);

	return 0;
}
*/
//�������ǵݹ�
/*
int main()
{
	int i = 0;
	scanf("%d", &i);

	int j = 0;
	int sum_mul = 1;
	for (j = i; j >=1 ; j--)
	{
		sum_mul *= j;
	}

	printf("%d\n",sum_mul);

	return 0;
}
*/


//����쳲�������
//1 1 2 3 5 8 13 21 34 55 89
//��һ���ݹ飺
/*
int old2_old1_now(int num)
{

	if (num > 0 && num <= 2)
		return 1;
	else if (num <= 0){
		printf("�������������Ч�����������룺");
		return -1;
	}
	else
	{
		return old2_old1_now(num - 2) + old2_old1_now(num - 1);
	}
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	int result = old2_old1_now(i);

	printf("%d\n",result);

	return 0;
}
*/
//�������ǵݹ�
//1 1 2 3 5 8 13 21 34 55 89
/*
int old2_old1_now(int num)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (num > 2)
	{
		c = a + b;
		a = b;
		b = c;
		num--;

	}

	return c;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int result = old2_old1_now(i);

	printf("%d\n", result);

	return 0;
}
*/


//�ݹ�ʵ��n��k�η�
//2��3�η����ǣ�3��2���
/*
int PowerFunction(int num1,int num2)
{
	if ((num1 != 0 && num2 == 0) || num1 == 1)
		return 1;
	else if (num1 == 0)
		return 0;
	else
	{
		while (num2 >= 1)
		{
			return num1 * PowerFunction(num1, num2 - 1);
		}
		
	}

}

int main()
{
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);

	int ret = PowerFunction(i,j);
	printf("%d\n",ret);

	return 0;
}
*/

