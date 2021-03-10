#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//1、
下面哪个是函数指针？(C)

A.int* fun(int a, int b);
B.int(*)fun(int a, int b);
C.int (*fun)(int a, int b);
D.(int *)fun(int a, int n);

fun先跟*结合，说明fun是指针，然后后面跟括号结合，说明指向的函数，然后里面指向的是形参，前面是返回类型

//2、
定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数？下面哪个是正确的？（A）

A.int (*(*F)(int, int))(int)
B.int (*F)(int, int)
C.int (*(*F)(int, int))
D.*(*F)(int, int)(int)



//3、
在游戏设计中，经常会根据不同的游戏状态调用不同的函数，我们可以通过函数指针来实现这一功能，下面哪个是：一个参数为int *，返回值为int的函数指针（B）

A.int (*fun)(int)
B.int (*fun)(int *)
C.int* fun(int *)
D.int* (*fun)(int *)



//4、
声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，该函数的返回值是int，参数是int*，正确的是（C）

A.(int *p[10])(int*)
B.int [10]*p(int *)
C.int (*(*p)[10])(int *)
D.int ((int *)[10])*p



//5、
关于回调函数描述错误的是（D）

A.回调函数就是一个通过函数指针调用的函数
B.回调函数一般通过函数指针实现
C.回调函数一般不是函数的实现方调用，而是在特定的场景下，由另外一方调用。
D.回调函数是调用函数指针指向函数的函数。



//6、
设有以下函数void fun(int n,char *s){……},则下面对函数指针的定义和赋值均是正确的是：（B）

A.void (*pf)(int，char); pf=&fun;
B.void (*pf)(int n，char *s); pf=fun;
C.void *pf(); *pf=fun;
D.void *pf(); pf=fun;


*/



/*
qsort模拟实现：

模仿qsort的功能实现一个通用的冒泡排序
*/

/*
void _swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (size_t i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void *base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	size_t i = 0;
	//进行排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的内容
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻两个元素的比较
			//base[j] base[j+1]
			if (cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
			{
				//如果不满足顺序就交换，如果cmp>0.即说明前面元素大于后面元素，不是升序
				_swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}

		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int cmp_int(const void *e1, const void *e2)
{
	return *(int *)e1 - *(int *)e2;
}

void test3()
{
	//qsort 排序整型数组
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

int main()
{
	test3();

	return 0;
}
*/





/*
qsort使用练习

练习使用库函数，qsort排序各种类型的数据
*/

/*
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void *e1, const void *e2)
{
	return ((struct Stu *)e1)->age - ((struct Stu *)e2)->age;
}

int cmp_stu_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct Stu *)e1)->name, ((struct Stu *)e2)->name);
}

void test2()
{
	//qsort 排序结构体
	struct Stu arr2[] = { { "xzh", 22 }, { "zzd", 23 }, { "xd", 24 } };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	//按照名字来排序？还是按照年龄来排

	//假设按照年龄
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_stu_by_age);

	//假设按照名字
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_stu_by_name);

}

int main()
{
	test2();

	return 0;
}
*/
