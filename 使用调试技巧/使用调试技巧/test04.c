#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>



//模拟实现strlrn函数
//1、计数器的写法
//2、递归的写法
//3、指针的写法

//我们只是对arr这个数组求长度，并不想着他被修改，我们要把它保护起来
//在库里面，strlen的返回值类型为：size_t，因为求长度，长度最少为1，不可能小于0
//size_t= unsigned int
/*
int my_strlen(const char * str)
{
	//防止指针变量为空指针
	assert(str != NULL);

	//因为在形参列表中，str是被const修饰的，所以赋值给start的时候，尽量也加一个const，保持前后一致
	const char* start = str;

	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("len = %d\n",len);

	return 0;
}
*/


//举例说明unsigned int的返回值没有负数
//结果输出大于：3-6=-3，但是strlen的返回值是unsigned int，无符号整型
//unsigned int没有负数，两个无符号数乡间，一定是无符号数
//unsigned int -3，-3在内存中是以补码的形式存在的，转换为无符号整型，会直接将这个补码拿出来当原码用，就是对应的无符号整型，所以这个数会很大，一定大于0
/*
int main()
{
	if ((strlen("abc") - strlen("abcdef")) > 0)
		printf("大于\n");
	else
		printf("小于\n");

	return 0;
}
*/