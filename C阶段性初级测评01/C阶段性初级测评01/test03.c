#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
【倒置字符串】
将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I 
输入描述：每个测试输入包含1个测试用例： I like beijing.输入用例长度不超过100
输出描述：依次输出倒置之后的字符串, 以空格分割
示例1： 
输入：I like beijing.
输出：beijing.like I
*/

//补充：scanf遇到空格就会停止，不会读取空格
/*
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	printf("%s\n", arr);
	//输入：ac def
	//打印：ac
	//所以遇到空格会停止

	return 0;
}
*/


//自己写：strtok
//9、strtok
//char * strtok(char * str, const char * sep);
/*
sep参数是个字符串，定义了用作分隔符的字符集合
第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
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

/*
void reverse(char* pparr, int k)
{
	char* start = pparr;
	char* end = pparr + k - 1;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	char arr2[100] = { 0 };
	strcpy(arr2, arr);//一般建立一个临时数组进行拷贝，因为strtok函数会修改源字符串

	char* ps[100] = { 0 };

	char* p = " ";//分隔符的集合的字符串 - 没有先后顺序


	char* ret = NULL;
	int i = 0;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p),i++)
	{
		ps[i] = ret;
		//printf("%s\n", ret);
	}
	

	reverse(ps,i);

	//下面这段代码可以正常打印出数组中的元素
	int j = 0;
	for (j = 0; j < i; j++)
	{
		printf("%s ", ps[j]);
	}


	return 0;
}
*/








//老师写：思路：
//先把整个字符串逆序一下：I like beijing. --> .gnijieb ekil I
//然后再把每个单词逆序；beijing. like I


/*
//逆序字符串的函数
void reverse(char* left, char * right)
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	
	//输入：
	gets(arr);

	//处理：abc def ghi
	//1、逆序整个字符串
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2、逆序每一个单词
	char* start = arr;

	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		//此时跳出来后，end是空格的地址
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
		
	}


	//输出：
	printf("%s\n", arr);
	
	return 0;
}
*/








