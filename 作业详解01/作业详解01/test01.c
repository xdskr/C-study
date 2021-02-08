#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//函数递归

/*
1、
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba
*/

//法一：非递归
/*
int my_strlen(char * string)
{
	assert(string != NULL);
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
void reverse_string(char * string)
{
	int len = my_strlen(string);
	char * left = string;
	char * right = string + len - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
*/

//法二：递归
/*
int my_strlen(char * string)
{
	assert(string != NULL);
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
char reverse_string(char * string)
{
	int len = my_strlen(string);
	char tmp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (my_strlen(string + 1) >= 2)
		reverse_string(string + 1);

	*(string + len - 1) = tmp;
}


int main()
{
	char arr[] = "abcdefgh";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}
*/



/*
2、
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19
*/

/*
int DigitSum(unsigned int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	//size_t num = 0;
	//这两种写法一样
	unsigned int num = 0;
	scanf("%u",&num);
	unsigned int sum = DigitSum(num);
	printf("%u\n",sum);

	return 0;
}
*/


/*
3、
编写一个函数实现n的k次方，使用递归实现。
*/

/*
double Pow(int n,int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n*Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);

	return 0;
}
*/

/*
3、
递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
1 1 2 3 5 8 13 21 34 55 89
*/

//法一：非递归
/*
int my_function(int m)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (m > 2)
	{
		c = a + b;
		a = b;
		b = c;
		m--;
	}
	return c;
}
*/
//法二：递归
/*
int my_function(int m)
{
	if (m > 0 && m <= 2)
		return 1;
	else if (m < 0){
		printf("您输入的数字有误，请重新输入：");
		return -1;
	}
	else
		return my_function(m - 1) + my_function(m - 2);
		
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	int ret = my_function(i);
	printf("%d\n",ret);

	return 0;
}
*/