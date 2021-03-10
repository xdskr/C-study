#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//1、
下面关于"指针"的描述不正确的是：（ ）

A.当使用free释放掉一个指针内容后,指针变量的值被置为NULL
B.32位系统下任何类型指针的长度都是4个字节
C.指针的数据类型声明的是指针实际指向内容的数据类型
D.野指针是指向未分配或者已经释放的内存地址

A：free称为动态开辟空间，malloc/free
内存分为：栈区、堆区、静态区
堆区涉及：malloc/free、calloc/realloc

释放空间free，不会把指针置为空NULL，我们要手动置空

//2、
关于下面代码描述正确的是：（C）
char* p = "hello bit";

A.把字符串hello bit存放在p变量中
B.把字符串hello bit的第一个字符存放在p变量中
C.把字符串hello bit的第一个字符的地址存放在p变量中
D.*p等价于hello bit



//3、
关于数组指针的描述正确的是：（C）

A.数组指针是一种数组
B.数组指针是一种存放数组的指针
C.数组指针是一种指针
D.指针数组是一种指向数组的指针

A：数组指针是一种指针，指向数组的指针；指针数组是一种数组，用来存放指针的数组

//4、
下面哪个是数组指针（C）

A.int** arr[10]		- 二级整型指针数组
B.int (*arr[10])	- arr是个数组
C.char *(*arr)[10]	- arr先跟*结合，说明arr是个指针，然后和arr数组结合，说明arr是个数组指针，数组中每个元素是char*类型
D.char(*)arr[10]	- 等价于：char* arr[10] - arr是个数组，指针数组


//5、
下面哪个代码是错误的：D

#include <stdio.h>
int main()
{
	int *p = NULL;
	int arr[10] = {0};
	return 0;
}

A.p = arr;
B.int (*ptr)[10] = &arr;
C.p = &arr[0];
D.p = &arr;

p是一个整型指针，&arr取到的是数组地址，二者有类型上的差异


//6、
下面代码关于数组名描述不正确的是（A）

int main()
{
	int arr[10] = {0};
	return 0;
}

A.数组名arr和&arr是一样的
B.sizeof(arr)，arr表示整个数组
C.&arr，arr表示整个数组
D.除了sizeof(arr)和&arr中的数组名，其他地方出现的数组名arr，都是数组首元素的地址。

A：arr和&arr是不一样的，但是值是一样的，意义完全不一样


//7、
如何定义一个int类型的指针数组，数组元素个数为10个：(B)

A.int a[10]
B.int (*a)[10]
C.int *a[10];
D.int (*a[10])(int);


//8、
下面代码的执行结果：

#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if(str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if(str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

return 0;
}
A.str1 and str2 are same str3 and str4 are same
B.str1 and str2 are same str3 and str4 are not same
C.str1 and str2 are not same str3 and str4 are same
D.str1 and str2 are not same str3 and str4 are not same


str3和str4是常量字符串
*/