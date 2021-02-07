#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一些调试实例

//实例1：求1! + 2! + ... +n!不考虑溢出
/*
int main()
{
	int n = 0;
	//scanf("%d",&n);
	//求n的阶乘
	int i = 0;
	int ret = 1;
	int sum = 0;

	for (n = 1; n <= 3; n++)
	{
		//每次进入的时候，ret应该置1
		//不断进行调试，找出原因
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}

	printf("%d\n",sum);

	return 0;
}
*/

//实例2：用Release可以避免，所以Release版本可以优化代码，让i的地址小于arr[9]
//经过调试发现，arr[12]就是i

//所以，当数组适当的越界情况下，就会导致越界访问到循环变量i。改变i，就可能导致死循环
//Linux下空1个，vs空2个，vc6.0不空
//其实：main函数开辟的栈区没那么大，所以数组和i的地址距离不远，一旦越界，就会造成上述问题。
/*
int main()
{
	//如果先定义arr，再定义i，就会避免这种问题
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", &i);
	printf("%p\n", arr[9]);
	//arr[9]的地址一定比i小

	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}
*/