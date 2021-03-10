#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//1、模拟实现memmove
/*
void * my_memove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前 ——> 后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后 ——> 前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}

	return ret;
}

//memmove是可以处理重叠内存的拷贝的
void test1()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);

}

int main()
{
	test1();

	return 0;
}
*/







//2、模拟实现memcpy
/*
void * my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}

	return ret;
}

//拷贝的两个数组是两个独立的空间
void test1()
{
	//模拟实现
	int arr3[] = { 1, 2, 3, 4, 5, 6 };
	int arr4[20] = { 0 };
	my_memcpy(arr4, arr3, 16);
}


int main()
{
	test1();

	return 0;
}
*/