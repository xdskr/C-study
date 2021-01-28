#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
//函数嵌套
//以下三个函数是独立平等的，存在的是调用关系。
//！！！函数是不能嵌套定义的！！！

//main函数也是被其他函数调用的，

void new_line()
{
printf("hehe\n");
}

void three_line()
{
int i = 0;
for (i = 0; i < 3; i++)
{
new_line();
}
}

int main(){
three_line();

return 0;
}
*/


/*
//链式访问
int main()
{
//法一：
int ret = strlen("abcdef");
printf("%d\n",ret);

//法二：
printf("%d\n", strlen("abcdef"));
//把strlen函数的返回值，作为printf函数的参数-----链式访问

printf("%d",printf("%d",printf("%d",43))); //4321
//研究一下我们printf的返回值，printf返回的是打印的字符的个数；如果出错，会打印一个负数。
//所以，最里面的printf打印43，返回的是字符的个数2，中间的printf打印2，返回的是字符的个数1，最外边的printf打印1。

return 0;
}
*/


//下面的函数会报错：未定义Add。
//因为编译器是自上而下进行扫描的，扫描到int sum = Add(a,b);时，前面未曾出现过Add，往后扫描扫到Add也没用了，因为已经报警了。
//！！！！所在当我们函数的定义放在函数的使用之后的时候，在这个函数使用的时候必须先声明！！！！

/*
//声明函数
int Add(int x, int y);
int main()
{
int a = 10;
int b = 20;
int sum = Add(a, b);
printf("%d\n",sum);


return 0;
}


//如果我们只声明函数，而不去定义函数（即把下面的代码注释掉），编译是可以通过的，编译只检查语法问题，
//但是我们如果ctrl+F5，这时候就会报错。因为ctrl+f5是编译+链接的，链接期间就会去找这个函数在不在，
int Add(int x,int y)
{
return x + y;
}
*/


/*
//未来我们在公司写代码的时候，真正的函数的声明、使用、定义是这样的。
//先创建一个Add.c和Add.h的两个文件，实现代码的模块化。
# include "Add.h"
int main()
{
int a = 10;
int b = 20;
int sum = Add(a, b);
printf("%d\n", sum);


return 0;
}
*/


/*
//史上最简单的递归
int main()
{
printf("hehe\n");
main();
return 0;
}
//以上代码会报异常：Stack overflow栈溢出
//每一次函数调用都要在栈区上开辟一块空间的，运行时堆栈！
*/


/*
//递归的应用：
void print(int num)
{
if (num > 9)
print(num / 10);
print("%d ",num % 10);
}

int main()
{
int num = 0;
scanf("%d",&num);
//打印num的每一位
//1 2 3 4
print(num);//print函数就可以把num的每一位打印在屏幕上


return 0;
}
*/


/*
//满足递归的两个必要条件，递归一定正确吗?
void test(int num)
{
if (num < 10000)
test(num + 1);
}

int main()
{
test(1);
return 0;
}
//以上代码仍然出错，导致栈溢出。
//递归层次太深了。
*/


//练习：编写函数不允许创建临时变量，求字符串的长度
//编译器可能提供了库函数的参考代码，并不一定是执行代码。

//循环
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++; //代表指针++
	}
	return count;
}
*/

/*
//递归
//读到a，此时长度至少是1
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef")
//1+1+1+my_strlen("def")
//1+1+1+1+my_strlen("ef")
//1+1+1+1+1+my_strlen("f")
//1+1+1+1+1+1my_strlen("")
//1+1+1+1+1+1+0
//6

//arr传给my_strlen函数，实际上是传的数组首元素地址，所以形式参数列表应该用char * ，
//而str是指的地址，*str解引用-指的是地址存放的值。
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "abcdef";
	//数组名是首元素的地址（- char*）：即字符a的地址
	int len = my_strlen(arr);
	printf("%d\n",len);

	return 0;
}
*/


/*
//写一个函数求n的阶乘
int Fac(int n){
	if (n <= 1)
		return 1;
	else
		return 5 * Fac(n - 1);

}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = Fac(n);

	printf("%d\n",ret);
	
	return 0;
}
*/


/*
int count = 0;
int Fic(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fic(n-1) + Fic(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fic(n);

	printf("%d\n", ret);
	printf("%d\n", count);//导致大量重复的计算，n=40，第三个被算了好几十万次。
	//所以这个用递归效率比较低。

	return 0;
}
*/

//优化：
/*
int Fic(int n)
{
	int a = 1;
	int b = 1;

	int c = 1;
	while (n > 2)
	{
		c = a + b;

		a = b;
		b = c;
		
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fic(n);

	printf("%d\n", ret);

	return 0;
}
*/


