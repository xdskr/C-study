#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//1、strlen实现，模拟实现库函数
/*
int my_strlen(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "bi te ren,bi te hun!";
	int ret = my_strlen(str);
	printf("%d\n", ret);

	return 0;
}
*/


//2、strcpy实现，模拟实现库函数
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void my_strcpy(const char * str1,char *str2,int length)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//	}
//
//}
//int main()
//{
//	char str1[] = "bi te ren,bi te hun!";
//	char str2[] = " ";
//	int ret = my_strlen(str1);
//	my_strcpy(str1, str2, ret);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}


//3、
/*
调整奇数偶数顺序：调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
/*
void revise_odd_even(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i+=2)
	{
		*arr = i;
		arr+=2;
	}
	for (i = 1; i < sz; i += 2)
	{
		*(arr+1) = i;
		arr+=2;
	}
}
void print(int arr[],int sz)
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
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	revise_odd_even(arr,sz);
	print(arr,sz);

	return 0;
}
*/