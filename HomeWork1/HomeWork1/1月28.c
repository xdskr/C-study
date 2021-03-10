#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
1、栈溢出属于运行时错误

C程序常见的错误分类不包含：（C）
A.编译错误
B.链接错误
C.栈溢出
D.运行时错误


2、ctrl+F5 是开始执行不调试，F5是启动调试

关于VS调试快捷键说法错误的是：（A）
A.F5-是开始执行，不调试
B.F10-是逐过程调试，遇到函数不进入函数
C.F11-是逐语句调试，可以观察调试的每个细节
D.F9是设置断点和取消断点


3、release版本不可以做任何调试

关于Debug和Release的区别说法错误的是：（D）
A.Debug被称为调试版本，程序调试找bug的版本
B.Release被称为发布版本，测试人员测试的就是Release版本
C.Debug版本包含调试信息，不做优化。
D.Release版本也可以调试，只是往往会优化，程序大小和运行速度上效果最优


4、p的值不能修改，即const修饰的是p

语言中哪一种形式声明了一个指向char类型变量的指针p，p的值不可修改，但p指向的变量值可修改？(C)
A.const char *p
B.char const *p
C.char*const p
D.const char *const p


5、

以下关于指针的说法,正确的是(C)
A.int *const p与int const *p等价
B.const int *p与int *const p等价
C.const int *p与int const *p等价
D.int *p[10]与int (*p)[10]等价



6、解释程序为什么死循环：
变量i和数组arr都是局部变量，局部变量保存在栈中，而栈在内存分配上是先使用高地址，再使用低地址
代码中先创建i，再创建arr，所以i的地址高于arr的地址，随着数组下标的增长，内存是由低到高的，所以数组下标适当的越界，是有可能到i的内存地址上去的
会修改i，然后导致死循环

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<=12; i++)
	{
	arr[i] = 0;
	printf("hello bit\n");
	}
	return 0;
}

*/

//8、strcpy函数的实现
/*
void my_strcopy(char* dest, const char* src)
{
	while (*dest++ = *src++)
		;
}
int main()
{
	char arr[] = "I like beijing.";
	char arr2[100] = { 0 };

	my_strcopy(arr2, arr);

	printf("%s\n", arr2);
	printf("%s\n", arr);

	return 0;
}
*/



//9、
/*
调整奇数偶数顺序：调整数组使奇数全部都位于偶数前面。

题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，5
所有偶数位于数组的后半部分。
*/

//法一：浪费空间，重新创建一个数组；并且不知道新创建的数组的大小应该怎么设置
/*
int main()
{
	int arr[10] = { 1, 8, 9, 7, 5, 6, 2, 4, 3, 10 };
	int arr2[10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2)
		{
			arr2[j] = arr[i];
			j++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (!(arr[i] % 2))
		{
			arr2[j] = arr[i];
			j++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
*/

//法二：一直找，每找到一个奇数就互换位置。


//法三：整个数组只遍历一遍
/*
void move_num(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//从前向后找一个偶数
		//防止全是偶数和奇数，left一定要小于right
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		//从后向前找一个奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}
int main()
{
	int arr[10] = { 1, 8, 9, 7, 5, 6, 2, 4, 3, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move_num(arr, sz);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
*/