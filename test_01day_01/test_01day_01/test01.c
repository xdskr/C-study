//第一个代码一般都是：hello world

# define _CRT_SECURE_NO_WARNINGS	1
//除了上面这行代码，还有一种方法：
//# pragma warning(disable:4996)

# include <stdio.h>
//stdio -std 标准，-i input，-o output，标准输入输出头文件
//.h-头文件

# include <stdlib.h>

//main -主函数
//代码是从main函数的第一行执行，main函数是程序的入口。
//一个程序里不能没有入口，但也只能有且只有一个入口。

//这里的int是什么意思，main函数也是被其它函数调用的，main函数执行完毕，
//会返回一个int整型，返回一个0，return 0

/*
//这个void是明确表示我们的main函数不需要参数
int main(void)
{
	return 0;
}
*/

/*
//需要设置参数
int main(int argc,char* argv[])
{
return 0;
}
*/

//以下方法已经过时
/*
void main(void)
{
	printf("hehe\n");
}
*/

//-printf 输出
//-scanf 输入

/*
int main()
{
	int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);

	return 0;
}
*/

//程序报错：
//error C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
//这个函数或变量可能不安全，建议使用scanf_s这个函数，如果不想看到这个警告，请使用：_CRT_SECURE_NO_WARNINGS
//scanf_s 这个函数是VS提供的，如果把代码放在gcc或者其他编译器，则不可跨平台使用了。

//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;//返回0表示正确返回
//}
//想看一下程序是怎么运行的，按F10

/*
int main()
{
	//printf-打印函数-库函数
	//库函数的使用，要引用头文件，引用格式：# include <stdio.h>
	printf("hello world\n");
	
	//system("pause");
	//system是一个执行系统命令的函数-pause暂停
	//system是库函数，需要引用头文件
	//每写一个主函数，都要加这句话，比较麻烦。
	//设置项目属性的方法，一个项目设置一次就可以。

	return 0;
}
*/

//运行文件
//ctrl+F5
//如果ctrl+f5没反应，fn+ctrl+f5或者关掉fn，按ctrl+f5
//fn-辅助功能键，
//程序运行完直接结束了，所以没有看到结果。
//1、设置项目属性：test_01day_01右键，属性，链接器，系统，子系统，控制台
//2、system("pause");