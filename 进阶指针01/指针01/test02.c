#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//区分下列指针类型
/*
int main()
{
	int arr[5];//整型数组
	int* parr1[10];//整型指针数组，10个元素
	int(*parr2)[10];//数组指针，指向的数组有10个元素

	//一步一步分析：
	//parr3先和[10]这个结合，说明parr3是一个数组，把parr3拿走，剩下的int* [5]
	//剩下的是一个数组指针--指向数组的指针
	//所以parr3是一个：存放数组指针的数组
	int(*parr3[10])[5];

	return 0;
}
*/


//数组参数、指针参数
//在写代码的时候难免要把【数组】或者【指针】传给函数，那函数该如何设计呢？
/*
//一维数组传参
void test(int arr[])
{}
void test(int arr[10])
{}
void test(int *arr)
{}
void test2(int *arr2[20])
{}
void test2(int **arr2)
{}
int main()
{
	int arr[10] = { 0 };
	int *arr2[20] = { 0 };//指针数组
	test(arr);
	test2(arr2);

	return 0;
}
*/

/*
//二维数组传参
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但必须知道一行有多少元素，这样才方便运算。
void test(int arr[3][5])
{}
//void test(int arr[][]){}//错误！！！！
void test(int arr[][5])
{}
//void test(int *arr){}//错误！！！
//void test(int *arr[5]){}//错误！！！
void test(int (*arr)[5])
{}
//void test(int **arr){}//错误！！！
int main()
{
	int arr[3][5] = { 0 };
	test(arr);

	return 0;
}
*/





//一级指针传参
/*
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//一级指针p，传给函数
	print(p, sz);
	return 0;
}
*/

//思考：当一个函数的参数部分为一级指针的时候，函数能接受什么参数？
//比如：
/*
void test1(int *p)
{}
//test1函数能接收什么参数？
//只要test(表达式)，这个表达式里面算出来的值是一个*p类型的就可以
int main()
{
	int a = 10;
	int* pa = &a;
	int arr[10] = { 0 };
	test1(&a);
	test1(pa);
	test1(arr);

	return 0;
}
*/






//二级指针传参
/*
void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}
int main()
{
	int n = 10;
	int*p = &n;
	int **pp = &p;
	test(pp);
	test(&p);
	return 0;
}
*/


//思考：当函数的参数为二级指针的时候，可以接收什么参数？
/*
void test(char **p)
{}
int main()
{
	char c = 'b';
	char*pc = &c;
	char**ppc = &pc;
	char* arr[10];
	test(&pc);
	test(ppc);
	test(arr);

	return 0;
}
*/
