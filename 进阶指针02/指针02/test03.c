#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


//回调函数：
/*
回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
条件进行响应。
*/
/*
void test1()
{
	printf("hehe\n");
}

void test2(void(*p)())
{
	//我们通过p去调用test1函数，此时test1函数被称为回调函数
	p();
}

int main()
{
	test2(test1);

	return 0;
}
*/



//利用回调函数机制改进计算器代码
/*
void menu()
{
	printf("******************************\n");
	printf("*******1、add    2、sub*******\n");
	printf("*******3、mul    4、div*******\n");
	printf("*******     0、exit    *******\n");
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


void calc(int(*p)(int,int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数：->");
	scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("结果为：%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//计算器
			break;
		case 2:
			calc(Sub);//计算器
			break;
		case 3:
			calc(Mul);//计算器
			break;
		case 4:
			calc(Div);//计算器
			break;
		case 0:
			printf("退出计算器！\n");
			break;
		default:
			printf("对不起，您输入的数字无效，请重新输入！\n");
			break;
		}


	} while (input);

	return 0;
}
*/


//进一步理解回调函数
/*
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//进行排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的内容
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//排成升序

	print_arr(arr,sz);

	return 0;
}
*/



//铺垫一个知识：
/*
//void*是不能直接解引用的
//因为void* 的指针，没有具体类型，所以不能解引用操作，不能++/--
int main()
{
	int a = 10;
	int* p = &a;
	//这个操作是可以的，因为我们知道指针p的类型是int*，在解引用操作的时候，我们自动访问4个字节的空间
	*p = 20;

	void *pv = &a;//这个接收操作是没问题的

	//pv的类型是void*，表示pv是没有具体类型的，是一个无类型指针，空类型指针
	//当他进行解引用操作时，不知道访问几个字节
	//*pv = 0;//这个是错误的！！！！！！
	//pv++;//这个是错误的！！！！！！

	int b = 10;
	//char * pc = &b;//报错：类型不兼容
	//void* 可以接收任意类型的指针，不会报错
	//无类型的指针可以接收任意类型的地址
	void * pc = &b;


	return 0;
}
*/



//库函数里面有一个-qsort -quick sort
//可以排序任意类型的数据
/*
void qsort(void *base, //需要排序的数组的起始位置
	size_t num, //数组中所含元素的个数
	size_t width, //数组中元素的大小，即占几个字节
	int(*cmp)(const void *e1, const void *e2));//自己定义一个比较函数，e1 e2是需要比较的两个函数的地址
*/

/*
//最初的想法：
//int cmp_int(const void *e1, const void *e2)
//{
//	//因为这是一个比较int型数据的函数，所以我们知道它的类型，我们强转为int*的指针
//	if (*(int *)e1 > *(int *)e2)
//		return 1;
//	else if (*(int *)e1 < *(int *)e2)
//		return -1;
//	else
//		return 0;
//}
//改进：
int cmp_int(const void *e1, const void *e2)
{
	return *(int *)e1 - *(int *)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test1()
{
	//qsort 排序整型数组
	int arr[] = { 1, 5, 2, 4, 3, 5, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}




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
	return strcmp(((struct Stu *)e1)->name,((struct Stu *)e2)->name);
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
	test1();
	test2();

	return 0;
}
*/



//模拟实现sqort
/*
void qsort(void *base, //需要排序的数组的起始位置
size_t num, //数组中所含元素的个数
size_t width, //数组中元素的大小，即占几个字节
int(*cmp)(const void *e1, const void *e2));//自己定义一个比较函数，e1 e2是需要比较的两个函数的地址
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
	{
		printf("%d ", arr[i]);
	}
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