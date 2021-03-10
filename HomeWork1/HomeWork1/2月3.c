#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/*
//1、
下面test函数设计正确的是：（B、D）

char* arr[5] = {"hello", "bit"};
test(arr);

A.void test(char* arr);
B.void test(char** arr);
C.void test(char arr[5]);
D.void test(char* arr[5]);

arr是一个数组，每一个数组里面存放的是char*类型的元素，前两个是字符串首元素的地址，后面默认值为0


//2、
下面程序的结果是：（A）

int main()
{
int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
int *ptr1 = (int *)(&aa + 1);
int *ptr2 = (int *)(*(aa + 1));
printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
return 0;
}

A.1, 6
B.10, 5
C.10, 1
D.1, 5



//3、
下面代码中print_arr函数参数设计哪个是正确的？（C）

int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
print_arr(arr, 3, 5);

A.void print_arr(int arr[][],int row, int col);
B.void print_arr(int* arr, int row, int col);
C.void print_arr(int (*arr)[5], int row, int col);
D.void print_arr(int (*arr)[3], int row, int col);



//4、 
下面程序的结果是：（B）

int main()
{
	int a[5] = {5, 4, 3, 2, 1};
	int *ptr = (int *)(&a + 1);
	printf( "%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}

A.5, 1
B.4, 1
C.4, 2
D.5, 2
*/




/*
字符串旋转结果：写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.


AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/

//法一：
/*
法二的方法是依次挪动，我们可以在abcdefg后面再追加一个abcdefg
这样abcdefgabcdefg 这个字符串所有的情况都包含在法二的那种每次移动的情况里
这时候只需要判断那个字符串是否包含在abcdefgabcdefg里就可以。
*/
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}
int is_left_move(char* s1, char*s2)
{
	int len2 = strlen(s2);
	int len1 = strlen(s1);
	if (len1 != len2)
		return 0;

	strncat(s2, s2, len2);
	if (strstr(s2, s1))
		return 1;
	else
		return 0;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[] = "cdefgab";
	if (is_left_move(arr2, arr1))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
*/



//法二：
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(*str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}
int is_left_move(char* s1, char*s2)
{
	int len = strlen(s2);
	while (len--)
	{
		left_move(s2, 1);
		if (strcmp(s1, s2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "cdefgab";
	if (is_left_move(arr2, arr1))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
*/








/*
字符串左旋：实现一个函数，可以左旋字符串中的k个字符。

例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/

//不够高效
/*
char * left_move(char* str, int k)
{
	assert(*str != NULL);

	int len = strlen(str);

	int j = 0;
	for (j= 0; j < k; j++)
	{
		char tmp = *str;

		//剩下的len-1个字符往前挪动
		int i = 0;
		for (i = 0; i < len - 1; i++)
		{
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
	return str;
}
*/

//改进：
//abcedf 左旋两个
//ab cdef 分成两个，每一个逆序
//ba fedc 然后拼接成一个，再逆序
//cdefab
/*
void reverse(char* left, char* right)
{
	assert(*left && *right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char * left_move(char* str, int k)
{
	assert(*str != NULL);
	int len = strlen(str);

	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);

	return str;
}

int main()
{
	char arr[] = "abcdefg";
	int k = 0;
	scanf("%d", &k);

	left_move(arr, k);//假设左旋两个，结果为：cdefgab

	printf("%s\n", arr);

	return 0;
}
*/




/*
杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

要求：时间复杂度小于O(N);
*/

//下面就是一个杨氏矩阵：找右上角的元素，于我们要找的进行比较，如果小于可以去掉一行，如果大于，可以去掉一列
//根据这个思路，右上角可以，那么左下角也可以
//1 2 3
//4 5 6
//7 8 9
/*
int find(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;

	while (x < r && y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y] > k)
			y--;
		else
			return 1;
	}

	//经过循环仍然没找到
	return 0;


}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);
	int ret = find(arr, k, 3, 3);

	if (1 == ret)
		printf("找到了！\n");
	else
		printf("没找到！\n");

	return 0;
}
*/
