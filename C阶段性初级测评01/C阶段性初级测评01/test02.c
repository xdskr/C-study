#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
【求最小公倍数】 
正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。 
输入描述：输入两个正整数A和B。
输出描述：输出A和B的最小公倍数。
示例：											
输入：5 7
输出：35
*/


//自己写：注意数据类型应该为size_t
/*
int find_max(int x, int y)
{
	return (x >= y ? x : y);
}

int find_mul(int x, int y)
{
	int max = find_max(x, y);
	//经过上面这个函数我们可以得到x和y的最大值

	if ((max % x == 0) && (max % y == 0))
		return max;
	else
	{	
		while (1)
		{
			max++;
			if ((max % x == 0) && (max % y == 0))
				break;
		}
		return max;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int ret = find_mul(a, b);
	printf("%d\n", ret);

	return 0;
}
*/



//老师写：
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%%d %d", &a, &b);

	//假设min就是我们设定的最小公倍数
	int min = a > b ? a : b;

	while (min % a != 0 || min % b != 0)
	{
		min++;
	}

	printf("%d\n", min);

	return 0;
}
*/


//其他方法：
//1、最大公约数：
/*
如果a和b的最大公约数为c，
那么a和b的最小公倍数为：a*b/c
*/



//方法三：
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%%d %d", &a, &b);

	//假设min就是我们设定的最小公倍数
	int i = 1;

	//我们假设i已经可以整除a了，i最小就是1，然后看i是否可以整除b
	while (a*i % b != 0)
	{
		i++;
	}

	printf("%d\n", a*i);

	return 0;
}
*/