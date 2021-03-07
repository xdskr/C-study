#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//字符函数和字符串函数


//1、strlen：求字符串的长度
//size_t strlen ( const char * str );
/*
字符串以 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
参数指向的字符串必须要以 '\0' 结束。
注意函数的返回值为size_t，是无符号的（ 易错 ）
学会strlen函数的模拟实现
*/
/*
int main()
{
	//!!!
	//strlen返回的结果是无符号整型，两个无符号整型运算得到的结果仍是无符号型。
	//-3 当作无符号数，将是一个很大的数
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}

	return 0;
}
*/



//2、strcpy：字符串拷贝
//char* strcpy(char * destination, const char * source );
/*
Copies the C string pointed by source into the array pointed by destination, including the terminating null
character (and stopping at that point).
源字符串必须以 '\0' 结束。
会将源字符串中的 '\0' 拷贝到目标空间。
目标空间必须足够大，以确保能存放源字符串。
目标空间必须可变。
学会模拟实现。
*/
/*
char* my_strcpy(char* dest, const char* src)
{
	//断言
	//因为我们要对dest和src进行解引用操作，所以这两个不能为空指针
	//确保指针的有效性
	//断言可以用逻辑与逻辑或语句：assert(dest && src != NULL);
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;

	while (*dest++ = *src++)//拷贝字符串，包括"\0"
	{
		//*dest++ = *src++;
		;

		//优化代码
		//dest++;
		//src++;
	}
	//*dest = *src;
	return ret;//返回的是目标空间的起始地址
}

int main()
{
	//他会把arr2中的每一个元素依次拷贝到arr1中，把"\0"也会拷贝进去，所以arr1后面还会有部分*和本身的"\0"，但是打印的时候，遇到第一个"\0"就会停止打印。
	char arr1[20] = "***************";
	char arr2[] = "hello bit";

	strcpy(arr1, arr2);
	printf("%s\n", arr1);


	//模拟实现strcpy
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}
*/




//3、strcat：字符串追加
//char * strcat ( char * destination, const char * source );
/*
Appends a copy of the source string to the destination string. The terminating null character in
destination is overwritten by the first character of source, and a null-character is included at the end of
the new string formed by the concatenation of both in destination.
源字符串必须以 '\0' 结束。
目标字符串也必须以"\0"结束。
目标空间必须有足够的大，能容纳下源字符串的内容。
目标空间必须可修改。
字符串自己给自己追加，如何？
*/
/*
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* ret = dest;

	//1.找到目标空间的"\0"
	while (*dest)
	{
		dest++;
	}

	//2.追加
	while (*dest++ = *src++)
	{
		;
	}

	return ret;

}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	
	//strcat(arr1, arr2);
	//printf("%s\n", arr1);

	//模拟实现
	//printf("%s\n", my_strcat(arr1, arr2));
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);


	//strcat可不可以自己给自己追加！！！！！！！！！！！
	//不可以：\0被覆盖，没有终止条件了
	//char arr3[20] = "abc";
	//my_strcat(arr3, arr3);
	//printf("%s\n", arr3);

	return 0;
}
*/




//4、strcmp：字符串比较
//int strcmp ( const char * str1, const char * str2 );
/*
This function starts comparing the first character of each string. If they are equal to each other, it
continues with the following pairs until the characters differ or until a terminating null-character is
reached.
标准规定：
第一个字符串大于第二个字符串，则返回大于0的数字
第一个字符串等于第二个字符串，则返回0
第一个字符串小于第二个字符串，则返回小于0的数字
那么如何判断两个字符串？
*/
/*
int my_strcmp(const char* s1, const char* s2)
{
	//因为要进行指针的解引用操作，要保证指针的有效性
	assert(s1 && s2);

	while (*s1 == *s2)
	{
		if (*s1 == "\0")
		{
			return 0;
		}
		s1++;
		s2++;
	}
	//if (*s1 > *s2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}

	//代码优化
	return *s1 - *s2;

}

int main()
{
	//字符串比较-不是比较长度
	//比较的是字符串中对应位置的字符的ASCii值

	int ret1 = strcmp("abq", "abcdef");
	int ret2 = strcmp("abc", "abcd");
	printf("%d\n", ret1);
	printf("%d\n", ret2);

	
	//模拟实现strcmp
	int ret3 = my_strcmp("abq", "abcdef");
	int ret4 = my_strcmp("abc", "abcd");
	printf("%d\n", ret3);
	printf("%d\n", ret4);

	return 0;
}
*/



/*
//上面的函数：strcpy、strcat、strcmp 不关心长度，只关心"\0"
//所以称为：长度不受限制的字符串操作函数
//如果下面这种代码，目标函数长度不够，编译器会提醒警告，告诉你这是一个不安全的函数
int main()
{
	char arr[4] = { 4 };
	strcpy(arr,"hello");

	return 0;
}
//C语言还提供了：长度受限制的字符串操作函数：strncpy、strncat、strncmp
*/






//5、strncpy：有长度的进行字符串拷贝
//char * strncpy ( char * destination, const char * source, size_t num );
/*
Copies the first num characters of source to destination. If the end of the source C string (which is
signaled by a null-character) is found before num characters have been copied, destination is padded
with zeros until a total of num characters have been written to it.
拷贝num个字符从源字符串到目标空间。
如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。
*/
/*
int main()
{
	char arr1[20] = "********";
	char arr2[] = "abcdef";
	strncpy(arr1, arr2, 3);//让我们拷贝几个，就拷贝几个
	printf("%s\n", arr1);//abc*****

	char arr3[20] = "***********";
	char arr4[] = "abc";
	strncpy(arr3, arr4, 5);//如果拷贝的源字符串小于我们设定的长度
	printf("%s\n", arr3);//abc  第4个第5个以"\0"填充，后面就是剩下的*和"\0"，但打印的时候，遇到第一个"\0"就会停止打印

	return 0;
}
*/






//6、strncat：有长度的进行字符串追加
//char * strncat ( char * destination, const char * source, size_t num );
/*
Appends the first num characters of source to destination, plus a terminating null-character.
If the length of the C string in source is less than num, only the content up to the terminating null-
character is copied.
*/
/*
int main()
{
	char arr1[20] = "hello \0*****";
	printf("%s\n", arr1);
	strncat(arr1, "abcdef", 3);
	printf("%s\n", arr1);//hello abc - 在把abc追加过去后，还会追加过去一个"\0"


	char arr2[20] = "hello \0*****";
	printf("%s\n", arr2);
	strncat(arr2, "abc", 5);
	printf("%s\n", arr2);//hello abc - 不管长度给几个，我们只看源字符串长度，源字符串只有3个，不管给10还是20，只追加过去3个，然后再追加一个"\0"

	return 0;
}
*/









//7、strncmp：有长度的进行字符串比较
//int strncmp ( const char * str1, const char * str2, size_t num );
/*
int main()
{
	int ret = strncmp("abc", "abcdef", 3);
	printf("%d\n", ret);

	int ret2 = strncmp("abc", "abcdef", 4);
	printf("%d\n", ret2);

	return 0;
}
*/





//8、strstr - 在一个字符串中找子字符串
//找子字符串的方法还有一个KMP算法，可以了解一下
//char * strstr ( const char *, const char * );
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//_cdecl 是一种函数调用约定 - 函数传参的顺序 - 函数栈帧的创建方式
/*
char * my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);

	const char *cp = s1;

	if (*s2 == '\0')
		return (char*)s1;

	while (*cp)
	{
		const char *p1 = cp;
		const char *p2 = s2;
		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char *)cp;
		cp++;
	}
	return NULL;

}
int main()
{
	char arr1[] = "abcdefgbcdhi";
	char arr2[] = "bcdq";
	
	char * ret = strstr(arr1, arr2);//在arr1中查找arr2第一次出现的位置
	if (ret != NULL)
		printf("%s\n", ret);//bcdefgbcdhi
	else
		printf("找不到!\n");


	//模拟实现
	char arr3[] = "abcdef";
	char arr4[] = "bcd";

	char * ret2 = my_strstr(arr3, arr4);//在arr1中查找arr2第一次出现的位置
	if (ret != NULL)
		printf("%s\n", ret2);//bcdefgbcdhi
	else
		printf("找不到!\n");

	return 0;
}
*/






//9、strtok
//char * strtok(char * str, const char * sep);
/*
sep参数是个字符串，定义了用作分隔符的字符集合
第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
如果字符串中不存在更多的标记，则返回 NULL 指针。
*/
/*
int main()
{
	char arr[] = "zpw@bitedu.tech";//@ . 称为分隔符
	char arr2[30] = { 0 };
	strcpy(arr2, arr);//一般建立一个临时数组进行拷贝，因为strtok函数会修改源字符串

	char* p = "@.";//分隔符的集合的字符串 - 没有先后顺序

	//我们事先如果不知道字符串数组中有几个分隔符，只能一个一个打印，比较麻烦，所以我们应该使用循环。
	//printf("%s\n", strtok(arr2, p));
	//printf("%s\n", strtok(NULL, p));
	//printf("%s\n", strtok(NULL, p));

	char* ret = NULL;
	for (ret = strtok(arr2,p); ret != NULL; ret = strtok(NULL,p))
	{
		printf("%s\n", ret);
	}



	return 0;
}
*/







//10、strerror - 错误报告函数
//char * strerror ( int errnum );
/*
返回错误码，所对应的错误信息。
库函数在使用的时候，如果发生错误，都会有对应的错误码。
这些错误码会被存放在一个全局变量中：errno
使用这个全局变量需要引用一个头文件：#include <errno.h>
*/
/*
int main()
{
	//整数是一个错误码
	//后面打印出来的是错误信息
	printf("%s\n", strerror(0));//No error
	printf("%s\n", strerror(1));//Operation not permitted
	printf("%s\n", strerror(2));//No such file or directory
	printf("%s\n", strerror(3));//No such process
	printf("%s\n", strerror(4));//Interrupted function call

	return 0;
}
*/
/*
int main()
{
	printf("hehe\n");
	printf("%s\n", strerror(errno));//错误码默认为0，无错误。

	FILE* pf = fopen("test.txt", "r");//file open - 打开一个文件
	if (pf == NULL)
	{
		//strerror(errno) 可以拿到错误码对应错误信息字符串的首地址
		printf("%s\n", strerror(errno));//No such file or directory
		//perror不仅打印错误信息，还可以将自定义的信息打印出来加一个:
		perror("hehe");//hehe: No such file or directory
	}

	return 0;
}
*/






