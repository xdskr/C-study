#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//C语言有一些内置类型：char、short、int、long、long long、float、double
//这些类型是远远不够的，我们需要自己创造/构造/自定义一些类型 -- 结构体、联合体、枚举
/*
结构体：
	1、结构体类型的声明
	2、结构体的自引用
	3、结构体变量的定义和初始化
	4、结构体内存对齐
	5、结构体传参
	6、结构体实现位段(位段的填充&可移植性)

结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
*/


//1、
/*
struct Book
{
	char name[20];
	char author[20];
	short price;
}b2,b3,b4;
//b2,b3,b4称为全局变量，b1称为局部变量

typedef struct Book1
{
	char name[20];
	char author[20];
	short price;
}Book1;
//这个Book1是类型名，

int main()
{
	struct Book b1 = { "C语言程序设计", "谭浩强", 55 };
	printf("%s %s %d\n", b1.name, b1.author, b1.price);

	Book1 bb = { "C++程序设计", "张三", 45 };

	return 0;
}
*/



//2、
/*
特殊的声明：
在声明结构的时候，可以不完全声明
比如：匿名结构体类型
*/
//匿名结构体类型：这个类型只能创建一次，创建一个全局变量x，不能在main函数里再创建局部变量了。
//虽然以下两个结构体成员变量相同，但这是两个不同的结构体
/*
struct
{
	int a;
	char b;
	float c;
}x;
struct
{
	int a;
	char b;
	float c;
}*ps;
int main()
{
	//ps = &x;//报错！

	return 0;
}
*/






//3、
/*
结构体的自引用：
	在结构中包含一个类型为该结构本身的成员是否可以呢？ 
*/
/*
//error：这样会无限下去，1里面有2，2里面有3.......
//struct Node
//{
//	int data;
//	struct Node n;
//};

//但我们可以将一个结点分为数据域和指针域，数据域存放数据，指针域存放下一个节点的地址
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};



//代码3：错误！！！我们没有定义struct Node，但是结构体里面的成员变量却先用了
typedef struct
{
	int data;
	Node* next;
}Node;
//这样写代码，可行否？
//解决方案：
typedef struct Node
{
	int data;
	struct Node* next;
}Node;
*/





//4、
/*
struct Point
{
	int x;
	int y;
}p1; //声明类型的同时定义变量p1
struct Point p2; //定义结构体变量p2

//初始化：定义变量的同时赋初值。
struct Point p3 = { 5,6 };

struct Stu	//类型声明
{
	char name[20];//名字
	int age;//年龄
};
struct Stu s1 = { "张三", 20 };//初始化

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, { 4, 5 }, NULL }; //结构体嵌套初始化
*/








//注意：整型提升发生在运算阶段。
//5、结构体内存对齐  --  结构体在计算大小的时候，会发生对齐
//offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量
/*
考点 如何计算？ 首先得掌握结构体的对齐规则：
1. 第一个成员在与结构体变量偏移量为0的地址处。
2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
		对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
			VS中默认的值为8
			Linux中的默认值为4
3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
*/

//练习1
/*
struct S1
{
	char c1;
	int i;
	char c2;
};

int main()
{
	printf("%d\n", offsetof(struct S1, c1));//0
	printf("%d\n", offsetof(struct S1, i));//4
	printf("%d\n", offsetof(struct S1, c2));//8

	printf("%d\n", sizeof(struct S1));//12
	return 0;
}
*/

//练习2
/*
分析：
c1存放在偏移量为0的起始位置，然后存放c2
c2占用1个字节，与vs下的对齐数8比较，1小于8，所以c2存放在偏移量为1的位置，紧挨着c1存放
然后存int i，i的大小占4个字节，4与8比较，4小于8，所以存放在偏移量为4的整数倍的偏移量上，偏移量此时已经为1，所以i存放在偏移量为4的位置，且i是int型，占用4个字节
假设0就是起始位置，
		0  1  2  3  4  5  6  7  8  9  10
	   c1 c2        i  i  i  i
然后计算整个结构体的大小，3个对齐数中，最大的为4，即整个结构体的大小为4的整数倍，目前内存已经用了8个字节，所以整个结构体的大小为8
*/
/*
struct S2
{
	char c1;
	char c2;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct S2));//8
	return 0;
}
*/


//练习3
// 0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20 
// d  d  d  d  d  d  d  d  c             i   i   i    i
//三个对齐数中，最大的为8，所以最后结构体的大小为8的倍数，已经占用16个字节，所以大小为16
/*
struct S3
{
	double d;//占用8个字节，且存放位置相对起始位置偏移量为0
	char c;//占用1个字节，与8比较小于8，所以相对偏移量为1的倍数
	int i;//占用4个字节，与8比较小于8，所以相对偏移量为4的倍数
};
int main()
{
	printf("%d\n", sizeof(struct S3));//16
	return 0;
}
*/



//练习4-结构体嵌套问题
//如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//struct S3 中的最大对齐数为8，所以在这里，对齐数为8
//在计算结构体大小的时候，不管c1，s3，d 三个中的最大对齐数是8，
// 0  1  2  3  4  5  6  7  8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40
// c1                     s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  s3  d   d   d    d   d   d  d   d

/*
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;//		  1  8
	struct S3 s3;//	 16  8
	double d;//		  8  8
};
int main()
{
	printf("%d\n", sizeof(struct S4));//32
	return 0;
}
*/


//我们为什么要进行内存对齐呢？
/*
为什么存在内存对齐?大部分的参考资料都是如是说的：

1. 平台原因(移植原因)： 不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
2. 性能原因： 数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。

总体来说：
结构体的内存对齐是拿空间来换取时间的做法。
那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
让占用空间小的成员尽量集中在一起。
*/




//那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
//让占用空间小的成员尽量集中在一起。





//6、修改默认对齐数
/*
// 0  1  2  3  4  5  6  7  8  9  10
// c1          i  i  i  i  c2

#pragma pack(4)//设置默认对齐数为4
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//恢复原来的默认对齐数


int main()
{
	printf("%d\n", sizeof(struct S1));//12
	return 0;
}
*/



//百度面试题：
//offsetof是一个宏，不可能是一个函数，因为offsetof可以传过去结构体的类型，所以不可能是函数
/*
百度笔试题：
写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
考察： offsetof 宏的实现
注：这里还没学习宏，可以放在宏讲解完后再实现。
*/
