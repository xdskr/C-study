#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


//以上讲的是字符串函数
//下面这些是字符函数 - 这些都是判断一个字符的，转换的也是
/*
字符分类函数：
		函数							如果他的参数符合下列条件就返回真
	  iscntrl								任何控制字符
	  isspace								空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
	  isdigit								十进制数字 0~9
	  isxdigit								十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
	  islower								小写字母a~z
	  isupper								大写字母A~Z
	  isalpha								字母a~z或A~Z
	  isalnum								字母或者数字，a~z,A~Z,0~9
	  ispunct								标点符号，任何不属于数字或者字母的图形字符（可打印）
	  isgraph								任何图形字符
	  isprint								任何可打印字符，包括图形字符和空白字符
*/
/*
字符转换：
int tolower ( int c );
int toupper ( int c );
*/



//1、isspace
//返回0则不是，返回一个非零数字说明是
/*
int main()
{
	printf("%d\n", isspace('a'));//0
	printf("%d\n", isspace(' '));//8

	return 0;
}
*/

//2、isdigit
//返回0则不是，返回一个非零数字说明是
/*
int main()
{
	printf("%d\n", isdigit('a'));//0
	printf("%d\n", isdigit('1'));//8

	return 0;
}
*/

//3、tolower/toupper - 转成大写小写
/*
int main()
{
	char arr[20] = { 0 };
	gets(arr);//Hello Bit!
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}

	return 0;
}
*/