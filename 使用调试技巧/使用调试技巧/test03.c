#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


//如何写出好(易于调试)的代码
/*
优秀的代码：
1、代码运行正常
2、bug很少
3、效率高
4、可读性高
5、可维护性高
6、注释清晰
7、文档齐全
*/

/*
常见的coding技巧：（编程技巧）
1、使用assert
2、尽量使用const
3、养成良好的编码风格
4、添加必要的注释
*/


//模拟实现strcpy
//1、了解strcpy函数
//char *strcpy( char *strDestination, const char *strSource );
//2、模拟实现

//版本1：
/*
void my_strcpy(char * dest,char * src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0')
	{
		*dest = *src;
	}

}
*/
//版本2：
/*
void my_strcpy(char * dest, char * src)
{
	//0为假就会停下来，'\0'的ASCii的值为0
	//先赋值再++
	while (*dest++ = *src++)
	{
		;
	}
}
*/
//版本3：
/*
//assert - 断言 - 括号中的表达式为真，什么都不发生，括号中的表达式为假，就会报错，精确那里错误显示
#include <assert.h>
char * my_strcpy(char * dest, char * src)
{
//0为假就会停下来，'\0'的ASCii的值为0
//先赋值再++

	char * ret = dest;

	//断言
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
	;
	}
	return ret;//这样才能使这个函数实现链式访问
}
*/
//版本4：加了const后，把将来运行可能会出现的一个错误，扼杀在编译阶段
//const修饰src，并且放在*的左边，所以*src不能改变
/*
#include <assert.h>
char * my_strcpy(char * dest, const char * src)
{
	char * ret = dest;

	assert(src != NULL);
	assert(dest != NULL);

	//while (*src++ = *dest++)//如果误写，将目标文件，拷贝到源文件中，这时候，编译不报错，但运行崩溃
	//但是，我们加上const，编译就不会通过。

	//可以添加注释：拷贝src指向的内容到dest指向的空间，包含\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}


int main()
{
	//strcpy - string copy
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	//char *p = NULL;
	//如果把这个p传过去，空指针不能解引用，会出错，所以上述代码第三个版本还可以优化
	char *p = arr2;
	printf("%s\n", my_strcpy(arr1, p));


	return 0;
}
*/


//const
//const修饰指针，放在*的左边，修饰的是指针指向的内容，使得指针指向的内容，不能通过指针来改变，但是指针变量本身是可以修改的
//const修饰指针，放在*的右边，修饰的是指针变量本身，使得指针变量本身不能直接修改，但是指针指向的内容可以通过指针来改变
/*
int main()
{
	int num = 10;
	num = 20;//因为num是变量，所以可以更改
	printf("%d\n",num);
	int * p = &num;
	*p = 30;//通过指针也可以更改
	printf("%d\n", num);

	const int num2 = 1;
	//num2 = 2;//不可更改，编译报错
	//const修饰的num2是具有常属性的变量，具有常属性的意思是不能直接修改

	int * p2 = &num2;
	*p = 3;
	printf("%d\n", num2);//这样就改掉了，虽然有警告，但最终改掉了
	//这样打破了const原有的语法，我们把受const保护的num2变量给了p2指针，我们把一个安全的变量，给了一个不安全的指针
	//所以才报出了警告


	const int num3 = 100;
	const int * p3 = &num3;
	int n = 500;
	//*p3 = 300;//报错：这样又保护起来了
	p = &n;//允许

	//const修饰指针，放在*的左边，修饰的是指针指向的内容，使得指针指向的内容，不能通过指针来改变
	//但是指针变量本身是可以修改的
	//*p3 = 300;//报错：这样又保护起来了
	printf("%d\n", num3);


	int * const p4 = &num;
	*p4 = 20;//可以
	//p4 = &n;//报错：
	printf("%d\n", num);

	const int * const p4 = &num;
	//*p4 = 20;//报错：
	//p4 = &n;//报错：
	//都不可以改变

	return 0;
}
*/



//上面讲了，const修饰普通变量和const修饰指针

//以上目的都是为了提高代码的健壮性
//健壮性又叫鲁棒性，让代码不至于遇到一点问题就崩溃