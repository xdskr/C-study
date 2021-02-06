#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//二级指针
//指针变量也是变量，是变量就有地址，那指针变量的地址存放在那里？这就是二级指针
//二维数组和二级指针没有关系，不要联系在一起

/*
int main()
{
	int a = 10;
	int *p = &a;//p是一级指针
	int ** pp = &p;//pp是二级指针

	// *pp;//这样找到p
	// **pp;//这样找到a
	**pp = 20;
	printf("%d\n",a);

	//int *** ppp = &pp;
	//int **** pppp = &ppp;

	return 0;
}
*/


//指针数组
//指针数组是指针还是数组？答案：是数组。是存放指针的数组。
//数组我们知道有整型数组，字符数组等。
//整型数组 -- 存放整型的数组
//字符数组 -- 存放字符的数组
//指针数组 -- 存放的是指针

/*
int main()
{
	int arr[10] = { 0 };//整型数组
	char ch[5] = { 'a', 'b' };//字符数组
	
	int a = 10;
	int b = 20;
	int c = 30;
	//&a, &b, &c;//存放的都是int*类型的指针

	//存放整型指针的数组
	int * arr[3] = {&a, &b, &c};//arr就是指针数组
	char * ch[5];//存放字符指针的数组


	return 0;
}
*/

/*
int main()
{
	char * p = "abcdef";//把这个字符串的首元素a的地址放到p中
	printf("%s\n",p);//打印字符串，从a开始往后打印

	char * arr[] = { "abcdef", "hello", "bit" };//把三个字符串的首元素的地址放到字符指针数组中
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n",arr[i]);
	}


	return 0;
}
*/