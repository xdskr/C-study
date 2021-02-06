#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
指针运算：
1、指针 + - 整数
2、指针 - 指针
3、指针的关系运算
*/

//指针 + - 整数
/*
#define N_VALUES 5
int main()
{
	int arr[10] = { 0 };//相当于在内存中开辟了一条连续的空间
	int * p = arr;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//法一：这个过程p是不变的
		*(p + i) = i;

		//法二：这个过程p是不断变化的
		//p++，先使用再++，刚开始，p指向首地址0，然后解引用，赋值0，然后p++，p向后挪一位
		//*p++ = i;
		//使用这种方法，在下面遍历打印之前，进入for循环之前，要先让p指向首元素地址

	}

	//p = arr;//这是使用法二后，在进行遍历打印前进行的操作

	for (i = 0; i < 10; i++)
	{
		//这是法二对应的方法
		//printf("%d ", *p++);

		printf("%d ", *(p + i));
	}

	//下面这个即用到了指针 + - 整数，又用到了指针的关系运算
	float values[N_VALUES];
	float *vp;
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}



	return 0;
}
*/


//指针 - 指针
/*
int main()
{
	int arr[10] = { 0 };
	printf("%d\n",&arr[9] - &arr[0]);//9
	printf("%d\n", &arr[0] - &arr[9]);//-9
	//指针 - 指针 之后的值的绝对值得到的是指针和指针之间的元素个数

	char ch[5] = { 0 };
	printf("%d\n", &arr[9] - &arr[3]);//得不到一个准确结果：err，代码是错误的。
	//因为我们只知道数组中这5个元素的地址是连续的，其它连续不连续我们不知道。

	//指针 - 指针 计算的前提：两个指针指向的是同一块连续的空间的。



	return 0;
}
*/

//指针 - 指针实例

//1、计数器的方法
/*
int my_strlen(char * str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
*/
//2、递归的方法
/*
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
*/
//3、指针 - 指针的方法
/*
int my_strlen(char * str)
{
	char * start = str;
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
	printf("%d\n",len);//6

	return 0;
}
*/



//指针的关系运算
/*
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float *vp;

	//法一：推荐
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}

	//法二：C语言标准并不保证可行
	//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向
	//第一个元素之前的那个内存位置的指针进行比较。
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
	}


	return 0;
}
*/






//指针和数组
/*
int main()
{
int arr[5] = {1,2,3,4,5};
int * p = arr;

int i = 0;
for (i = 0; i < 5; i++)
printf("%d ", *(p + i));

for (i = 0; i < 5; i++)
printf("&arr[%d] = %p <=====> %p\n", i, &arr[i], p+i);

return 0;
}
*/

/*
int main()
{
int arr[3][5] = { 0 };
arr;//二维数组的数组名也是数组首元素的地址
//表示的是第一行的地址！！！！！！！！！！
//第一行是个一维数组，表示的是这个数组的地址
//而数组的地址在数值上等于数组首元素的地址，但是意义不一样
//数组地址+1，跳到下一个数组
//数组首元素地址+1，跳到下一个元素

return 0;
}
*/