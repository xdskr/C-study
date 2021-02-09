#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>


//递归的方式打印一个整数的每一位
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


//求阶乘
//法一：递归
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
//法二：非递归
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


//计算斐波那契数
//1 1 2 3 5 8 13 21 34 55 89
//法一：递归：
/*
int old2_old1_now(int num)
{

	if (num > 0 && num <= 2)
		return 1;
	else if (num <= 0){
		printf("您输入的数字无效，请重新输入：");
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
//法二：非递归
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


//递归实现n的k次方
//2的3次方就是：3个2相乘
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

