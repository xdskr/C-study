#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//算术转换
//如果某个操作符各个操作数属于不同类型，那么除非其中一个操作数的转换为另一个操作数的类型，否则操作就无法进行，下面的层次体系称为寻常算术转换。
//下面已经是排序好的：从下往上转换：
//long double
//double
//float
//unsigned long int
//long int
//unsigned int 
//int
/*
int main()
{


	return 0;
}
*/



//操作符的属性
/*

复杂表达式的求值有三个影响的因素：
1、操作符的优先级
2、操作符的结合性
3、是否控制求值顺序
*/


//一些问题表达式：笔记


/*
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n",answer);
	//输出多少？
	//-2 或 -10
	//结果不一定，因为先算那个fun会影响结果

	return 0;
}
*/


//板书笔记
/*
int main()
{
	int i = 1;
	//4+4+4
	int a = (++i) + (++i) + (++i);
	printf("%d\n",a);

	return 0;
}
*/