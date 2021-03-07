#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


//内存操作函数



//1、memcpy
//memcpy 函数在实现的时候，不知道未来会被用来拷贝什么类型的数据，所以用void*类型的指针接收是比较合适的
//从test1()和test2()中我们可以看出：memcpy函数是用拷贝这种不相关的内存块的，但memmoce函数可以
//void * memcpy ( void * destination, const void * source, size_t num );
/*
函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
这个函数在遇到 '\0' 的时候并不会停下来。
如果source和destination有任何的重叠，复制的结果都是未定义的。
*/
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
		//((char*)dest)++;//因为++的优先级大
		//((char*)src)++;
	}

	return ret;
}

//拷贝的两个数组是两个独立的空间
void test1()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	memcpy(arr2, arr1, 16);//4*sizeof(arr[0])


	//模拟实现
	int arr3[] = { 1, 2, 3, 4, 5, 6 };
	int arr4[20] = { 0 };
	my_memcpy(arr4, arr3, 16);//4*sizeof(arr[0])
}

//我们想要吧1234拷贝到3456的位置上
void test2()
{
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//memcpy函数是做不到的。
	my_memcpy(arr+2, arr, 16);//结果为：1 2 1 2 1 2 7 8 9 10

}

//memmove是可以处理重叠内存的拷贝的
void test3()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memove(arr + 2, arr, 16);

}
int main()
{
	test1();
	test2();
	test3();

	return 0;
}
*/





//2、memmove
//memmove在拷贝的时候，有时候从前向后拷贝，有时候从后向前拷贝
//void * memmove ( void * destination, const void * source, size_t num );
/*
和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
如果源空间和目标空间出现重叠，就得使用memmove函数处理。
*/
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

//接上一个函数memcpy
//我们试一下库函数的memcpy函数是否可以完成内存重叠的数据拷贝 - 完成了
void test2()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memcpy(arr + 2, arr, 16);
	//标准规定：memcpy函数能够能够实现不重叠拷贝就行
	//发现VS中memcpy函数可以实现重叠拷贝

}
int main()
{
	test1();
	test2();

	return 0;
}
*/







//3、memcmp
//比较从ptr1和ptr2指针开始的num个字节
/*
int memcmp ( const void * ptr1,
			const void * ptr2,
			size_t num );

Return Value			Relationship of First count Bytes of buf1 and buf2
< 0							buf1 less than buf2
0							buf1 identical to buf2
> 0							buf1 greater than buf2

*/
/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
	int arr2[] = { 1, 2, 5, 6, 7 };//01 00 00 00 02 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00

	//前八个字节比较的是12
	int ret = memcmp(arr1, arr2, 8);//最后一个数是以字节为单位
	printf("%d\n", ret);//0

	int ret2 = memcmp(arr1, arr2, 9);
	printf("%d\n", ret2);//-1


	//memset

	return 0;
}
*/



//4、memset
//void *memset( void *dest, int c, size_t count );

int main()
{
	char arr[10] = { 0 };
	memset(arr, '*', 10);//一个一个设置，以字节为单位设置

	//报错：一个一个字节设置，设置后的不是1
	char arr2[10] = { 0 };// 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
	memset(arr2, 1, 20);// 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01

	return 0;
}