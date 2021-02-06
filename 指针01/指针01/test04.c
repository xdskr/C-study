#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
结构体：
1、结构体类型的声明
2、结构体初始化
3、结构体成员访问
4、结构体传参
*/

//结构体的声明
//结构的基础知识：结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是b不同类型的变量

/*
//描述一个学生：名字、年龄、电话、性别
//结构的成员可以是标量、数组、指针，甚至是其它结构体
struct Stu
{
	//成员变量
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}s1,s2;
struct Stu s3;
//这里的s1,s2,s3也是创建变量的意思，可有可无
//区别在于：这里创建的s1，s2，s3是全局变量。而下面创建的s是局部变量

int main()
{
	//描述一个学生
	struct Stu s;//s是创建出来的变量，struct Stu是s变量的类型，通过类型创建变量的过程称为实例化！！

	return 0;
}
*/



//结构体变量的定义和初始化
/*
struct Point
{
	int x;
	int y;
};

struct S
{
	char arr[10];
	struct Point p;
	double d;
	int *ptr;
};

int main()
{
	//struct Point p = { 1, 2 };
	//printf("%d %d\n",p.x,p.y);
	int a = 2021;
	struct S s = { "ABCDEF", { 1, 2 }, 3.14, &a};
	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d, *(s.ptr));

	return 0;
}
*/



//结构体成员访问
/*
int main()
{


	return 0;
}
*/




//结构体传参
//结构体传参：尽量传递地址。效率高
//函数传参的时候，参数是需要压榨的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
/*
struct S
{
	char arr[1000];
	int num;
	double d;
	
};

//传值的时候，形参是实参的一份临时拷贝，struct S中，char arr数组较大，拷贝一份消耗太多内存，并且要把数据拿过去，从时间和空间都造成浪费
void print1(struct S s)
{
	printf("%s %d %lf\n",s.arr,s.num,s.d);
}

//相对较好：原因：
//
void print2(struct S * ps)
{
	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
}

int main()
{
	struct S s = { "ABCDEF", 100, 3.14};
	//传值
	print1(s);//print函数来打印结构体的数据
	//传址：好一些
	print2(&s);//print函数来打印结构体的数据

	return 0;
}
*/


//每一次函数调用，都要在栈区上为函数分配空间。
//传参是从右边开始传 -- 函数调用约定
//上课板书