#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


/*
//回顾数组指针和指针数组
int main()
{
	//指针数组 - 存放指针的数组
	int* arr[5];

	//数组指针 - 指向数组的指针
	//pd的数据类型为：int (*)[10]
	int data[10] = { 0 };
	int (*pd)[10] = &data;

	return 0;
}
*/

/*
//回顾数组名
int main()
{
	//一维数组
	int arr1[5];
	int* p = arr1;//首元素的地址
	int (*pa1)[5] = &arr1;//数组的地址
	//这两个在值上是一样的，但是意义不同。

	//二维数组
	int arr2[3][4];
	//arr2取到的是二维数组首元素的地址，对于二维数组的首元素就是第一行的这个一维数组，所以arr2左边应该是一个一维数组的地址
	int(*pa2)[4] = arr2;//首元素的地址
	int(*pa2)[3][4] = &arr2;//数组的地址
	//这两个在值上是一样的，但是意义不同。

	return 0;
}
*/

/*
//整型指针 - 指向整型的指针
//数组指针 - 指向数组的指针 - 存放数组的指针
//函数指针 - 指向函数的指针(不会指向函数指针) - 存放函数的指针
int Add(int x,int y)
{
	return x + y;
}
void test(char * str)
{}
int main()
{
	//整型指针
	int a = 10;
	int* pa = &a;
	//数组指针
	char arr[5] = { 0 };
	char(*parr)[5] = &arr;

	//函数指针：只关心函数返回类型和形参，不关心函数体内部
	//观察打印结果
	printf("%p\n",&Add);
	int (*pAdd)(int,int) = &Add;
	void(*ptest)(char*) = &test;
	
	//以下两个打印结果一样：在函数里，取函数地址和函数都是一样的。
	printf("%p\n", &Add);
	printf("%p\n", Add);
	//int(*pAdd)(int, int) = Add;//这种写法也是可以的。

	//怎么用指针去调用函数
	int ret = (*pAdd)(2, 3);//int ret = Add(2, 3);
	int ret2 = (pAdd)(2, 3);//这个 * 可以省略，如果带 * 必要要加括号
	printf("%d\n", ret);//5
	printf("%d\n", ret2);//5


	return 0;
}
*/
/*
int my_strlen(const char * str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	//法一：
	int len = my_strlen(arr);
	printf("%d\n", len);
	//法二：
	//函数指针类型：int(* )(const char*)
	int(*plen)(const char*) = &my_strlen;
	int len2 = plen("bit");
	printf("%d\n", len2);

	len2 = plen("hellobit");
	printf("%d\n", len2);



	return 0;
}
*/



/*
//观察下面两个代码
//代码1：
//从0开始下手，0是一个数字，是int类型，0前面有个括号，括起来的东西 void(* )( )刚好是一个数据类型 - 是一个函数指针类型 - 返回类型是void，参数为空
//类型放到括号里 - 强制类型转换，将0进行强制类型转换，原来是int类型，强制转换为函数指针类型，转换之后，这个0就代表地址。平常的地址是一个16进制数字，这个0就代表地址
//此时这个0代表一个地址，表示一个函数的地址，然后我们进行解引用操作，找到这个函数，然后调用这个函数，这个函数的形参为空。
//所以下面这行代码的意思：调用0地址处的函数，该函数无参数，返回类型为void
//(*  (  void(* )( )  ) 0) ();

//代码2：
//从signal开始下手，signal和后面的()结合，signal只要跟()结合，说明signal是个函数，而()里面肯定是写的函数的参数，
//第一个参数是int类型，第二个参数是函数指针类型，意思是signal可能会接受一个函数的地址过来
//当我们把这个函数名和形参去掉后，剩下的就是函数的返回类型：void (   *    ) (int);
//这个返回类型还是一个函数指针，

//下面这行代码是一个函数声明：声明signal函数，signal函数有2个参数，第一个参数类型是int，第二个参数类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
void (   *signal (  int, void(*) (int)  )    ) (int);

//可以将以上代码进行简写：
//这个重命名的名字放在最后无法编译通过，所以要放在里面
//给函数指针类型：void(* )(int)		起一个别名：pfun_t
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
*/