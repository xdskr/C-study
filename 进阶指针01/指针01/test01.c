#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//字符指针
/*
int main()
{
	char ch = 'a';
	//定义了一个char类型的ch变量，里面存放的是字符a
	
	char* pc = &ch;
	//定义了一个char*类型的pc变量，pc也叫指针，然后对变量ch里面存放的字符进行取地址操作，并将取到的地址放到了pc里

	//这里的"abcdef"是一个常量字符串，是不能改变的。
	char* p = "abcdef";
	//这个代码的意思是将abcdef这个字符串首字母a的地址放到p里面去，指针p一定是存放地址的

	printf("%c\n",*p);//验证p里面是否存储的是a的地址。
	printf("%s\n",p);//abcdef
	//这个printf打印的是字符串，就是从a开始往后打印字符串，因为字符串在内存中是连续存放的
	//%s打印字符串的时候，只提供这个字符串的起始位置即可

	char arr[] = "abcdef";
	printf("%s\n",arr);//跟printf("%s\n",p)一个性质
	//但是字符串放在数组中是可以改变的，上述中的字符串是一个常量字符串

	return 0;
}
*/

//例题1：
/*
str1和str2是两个数组，对于数组来说，开辟空间的时候是互不相干，各自开辟各自的。
str1和str2指向的是各自开辟内存空间的首地址，肯定是不相同的。即：str1和str2是不相同的

str3和str4是两个指针，但是"hello bit."是一个常量字符串。常量字符串是不能被修改的，内存中不可能储存两份一模一样的常量字符串，
所以str3和str4两个指针指向的是同一个字符串常量。
*/
/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

	return 0;
}
*/

/*
int main()
{
	//char* p = "abcdef";
	//这个写法是不严谨的，因为等号后面的字符串属于常量字符串，而把他赋给了指针变量p，p在被修改的时候就会发生错误。

	//修改以后:
	const char* p = "abcdef";
	//这个时候，const修饰的是*p，这样*p就不能被修改。这样代码更加严谨。

	return 0;
}
*/



//指针数组 -- 数组
//指针数组是数组，是用来存放指针的数组。
/*
int main()
{
	int arr1[10];//整型数组
	int* arr2[10];//整型指针数组
	char* ch1[20];//一级字符整型数组
	char** ch2[20];//二级字符指针数组

	return 0;
}
*/


//数组指针
/*
数组指针是指针？还是数组？-----指针。
整型指针：int* p;能够指向整型数据的指针。
浮点型指针：float* p;能够指向浮点型数据的指针。
数组指针：能够指向数组的指针。
*/
/*
int main()
{
	int a = 10;
	int* pi = &a;
	char ch = 'a';
	char* pc = &ch;

	//数组指针
	//&arr 取地址符号后面+数组名。此时这里的数组名是整个数组，取出的是数组的地址
	//arr  这是数组首元素的地址
	int arr[10] = { 0 };
	int(*pa)[10] = &arr;//!!!!!!!!!!!!!!!
	//int* pa[10];这样的话，pa和[]结合，成为了指针数组
	//上面没有注释的代码就是一个数组指针--指向数组的指针


	return 0;
}
*/


//&数组名和数组名的比较
//sizeof(数组名);这里的数组名也是代表整个数组
//除了以上两种，所有遇到的数组名都是数组首元素的地址
/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	int* p1 = arr;//数组首元素的地址
	int(*p2)[10] = &arr;//数组的地址
	printf("%p\n", p1);//008CFCB4
	printf("%p\n", p1 + 1);//008CFCB8
	printf("%p\n", p2);//008CFCB4
	printf("%p\n", p2 + 1);//008CFCDC
	//他们两个在值上相同，但是代表的意义是不一样的。
	//p1 + 1 代表的是在数组中移动指针类型的大小--int--4个字节
	//p2 + 1 跳过一个数组

	return 0;
}
*/

//之前学的用指针遍历数组
/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = &arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}

	return 0;
}
*/

//用数组指针遍历数组
//数组指针不是这么用的，一般数组指针用在二维数组中
/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*p)[10] = &arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	//*p <==> arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *((*p) + i));
	}
	//arr[1] <==> *(arr + 1)

	return 0;
}
*/


//二维数组中应用数组指针
//在传参的时候，实际上接受的是对数组的一个降维处理，给函数传的是一维数组，函数形参接收的就是数组首元素地址的指针
//给函数传的是二维数组，函数形参接收的就是二维数组的第一行数组的地址指针--二维数组的数组名为行指针
/*
//用原来的方式遍历二维数组
void print1(int arr[3][5],int ral,int cow)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ral; i++)
	{
		for (j = 0; j < cow; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
//用数组指针的方式遍历二维数组
void print2(int(*p)[5], int ral, int cow)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ral; i++)
	{
		//*(p+i) -- 找到了第i行（i从0开始）
		for (j = 0; j < cow; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

void print3(int*p,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	//二维数组传参，数组名也是首元素的地址，二维数组的首元素是第一行。
	//传过去的就是第一行的地址
	int arr1[5] = {9,8,7,6,5};
	print3(arr1, 5);
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	

	return 0;
}
*/