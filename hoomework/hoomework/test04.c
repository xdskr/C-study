#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>


//计算一个数的每位之和（递归实现）
/*
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19
*/
//1729
//9 + D(172)
//9 + 2 + D(17)
//9 + 2 + 7 + 1
/*
int DigitSum(int k)
{
	if (k > 9)
		return(k % 10) + DigitSum(k / 10);
	else
		return k;
}

int main()
{
	int i = 0;
	scanf("%d", &i);

	int ret = DigitSum(i);
	printf("%d\n", ret);

	return 0;
}
*/

/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
例如：输入："abcdef"---输出："fedcba"
*/
//法一：非递归
/*
void reverse_string(char arr[],int sz)
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	int sz = sizeof(arr) / sizeof(arr[0]) - 2;
	
	printf("%s\n",arr);
	reverse_string(arr,sz);
	printf("%s\n", arr);

	return 0;
}
*/
//法二：递归
/*
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}
*/


//strlen的模拟（递归实现）
//递归和非递归分别实现strlen
//法一：非递归
/*
int My_Strlen(char arr[])
{
	int i = 0;
	int count = 0;
	while (1)
	{
		if (arr[i] != '\0'){
			count++;
			i++;
		}
		else
			break;
	}
	return count;

}

int main()
{
	char arr[] = "abcdef";

	int ret = My_Strlen(arr);
	printf("%d\n", ret);

	return 0;
}
*/
//法二：递归
/*
int My_Strlen(char arr[])
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + My_Strlen(arr + 1);
}

int main()
{
	char arr[] = "abcdef";

	int ret = My_Strlen(arr);
	printf("%d\n", ret);

	return 0;
}
*/