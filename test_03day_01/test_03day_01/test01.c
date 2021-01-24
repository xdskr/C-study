#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

/*
void test()
{
	int a = 1;
	a++;
	printf("%d ", a);
}
*/

void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}

/*
int main()
{
	//下标操作符
	int arr[10] = { 0 };//只是给第一个元素赋值0，其它元素默认赋值0
	arr[4] = 5;//下标为4(第五个元素)的元素赋值5，这个arr后面的[]就是下标操作符
	//这个下标操作符的操作数是：arr这个数组和4代表的这个元素

	//函数调用操作符
	//想要调用上面定义的Add函数就要用到函数调用操作符
	int ret = Add(2, 3);//Add后面的()就是函数调用操作符
	//这个函数调用操作符的操作数是：Add函数，数字2和3


	return 0;
}
*/

typedef unsigned int uint;

# define MAX 100
# define STR "Hello bit"

#define ADD(X,Y) (X+Y)
#define MAX(X,Y) ((X)>(Y)?(X):(Y))


//创建学生类型
struct Stu
{	
	//描述学生的属性
	char name[20];//名字--字符串--字符数组
	short age;//年龄--int
	char sex[8];//性别--字符串
};

//创建书类型
struct Book
{
	char name[20];
	double price;
	char id[20];
};

int main()
{
	/*
	//关键字
	//它的作用域就是他所在的大括号，它的生命周期是创建到销毁的过程
	//自动创建--自动销毁
	int a = 2;//局部变量--自动变量
	//auto int a = 2;
	//是有auto这个东西存在的，因为大部分变量都是自动变量，所以省略auto

	signed int age;//有符号，默认是有符号
	unsigned int age;//无符号
	*/


	/*
	//重定义类型（一定要是类型名）
	unsigned int age1 = 12;
	uint age2 = 13;//我们在main函数上面用重定义关键字，将unsigned int用uint代替，以后用uint就可以了。
	*/

	/*
	//static关键字--静态的
	//static修饰的局部变量----改变了局部变量的生命周期（跟全局生命周期一样），但是作用域没有变化。
	//static修饰的全局变量----把外部链接属性，改成了内部链接属性
	//static修饰的函数----

	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	//在没有用static修饰test函数里面的a时，输出10个2
	//在用static修饰test函数里面的a时，输出2-11
	//这时我们使用调试功能发现，当程序第二次进入test函数里面，不经过static int a = 1;这个语句了，直接蹦到下一句。
	
	//printf("%d\n",g_val);//报错：未声明的标识符

	//发布声明，才能使用全局变量g_val
	//声明：extern是声明外部符号的
	extern int g_val;
	printf("%d\n", g_val);
	//如果这时我们用static修饰全局变量g_val，就会报错：无法解析的外部符号
	//这是一个链接错误--链接的时候发现的错误
	//我们写的文件是一个.c文件，但文件运行的时候是运行.exe（这是一个可执行程序）
	//一个.c文件怎么变成.exe文件的呢？需要经过两个大的步骤：
	//编译  链接
	//其中编译还分为：预编译，编译，汇编
	//编译是检查语法错误，链接即是去链接变量


	//声明外部函数
	extern int Add(int x, int y);

	int c = 10;
	int d = 20;
	int sum = Add(c, d);
	printf("sum = %d\n",sum);
	//没有声明函数之前，会报错，所以在用之前应该先声明
	
	//所以在两个.c文件中，我们可以定义两个相同的变量名，只要前面有static修饰
	//只要其中一个用static修饰即可
	*/

	/*
	//register关键字
	int e = 10;
	//如果未来，这个e可能被重复大量使用，我们可以在int e前面加上register关键字，提升执行效率
	//register是建议把自己创建的变量存储到寄存器中
	//但这只是建议，最后会不会放到寄存器还取决于系统。
	//就算你没有写register，系统也会根据实际要求，自动把他放到寄存器

	//放到寄存器中就不能对变量进行取地址操作了。这时候&e，就会报错，寄存器变量是不会取地址的。
	//我们取地址，是取内存的地址，而寄存器是集成到CPU上的，和内存无关。
	*/

	/*
	//定义常量和宏
	//我们在main函数前面定义了# define MAX 100
	printf("%d\n",MAX);//100
	int m = MAX;
	printf("%d\n", m);//100

	printf("%s\n", STR);//Hello bit
	//#define也可以定义字符，代码 

	int f = 10;
	int g = 20;
	int ret2 = ADD(f, g);
	printf("%d\n",ret2);//30
	printf("%d\n",MAX(f,g));//20
	//宏是没有类型的，但也有自己的缺点，今天只是了解一下。
	*/

	//指针
	//&--取地址操作符
	//*--解引用操作符
	/*
	int a = 10;
	//int类型的a占用4个字节，所以在内存中占用4个内存单元
	//&a;//取地址操作，取地址，取的是首地址
	//取地址取的是第一个字节的地址

	int* pa = &a;//pa是专门用来存放地址的--把pa就叫指针变量
	//pa的类型就是int*
	//*放在这，就是表明pa是指针变量
	//int说明pa指向的变量是整形变量
	char ch = 'w';
	char* pc = &ch;

	//我们也会用指针进行解引用操作
	*pa = 2;
	printf("%d\n",a);
	*/
	
	/*
	double d = 3.14;
	printf("%lf\n",d);
	double *pd = &d;
	*pd = 3.5;
	printf("%lf\n", d);
	*/

	/*
	//指针变量的大小--4或者8个字节
	//32位4个字节，64位8个字节
	//指针变量的大小和类型无关
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(long*));//4
	printf("%d\n", sizeof(float*));//4
	*/
 
	
	/*
	//结构体
	//通过前面创建的结构体来创建变量
	//结构体的创建和初始化
	struct Stu s1 = {"张三",20,"男"};//s1就是一个对象
	struct Stu s2 = { "李四", 30, "女" };//s2就是一个对象

	//法一：
	printf("%s-%d-%s\n",s1.name,s1.age,s1.sex);//结构成员操作符 结构体.结构体成员

	struct Stu* ps = &s1;
	//法二：
	printf("%s-%d-%s\n", (*ps).name, (*ps).age, (*ps).sex );

	//法三：
	printf("%s-%d-%s\n", ps->name, ps -> age, ps -> sex);//结构成员访问操作符  结构体指针 -> 结构体成员
	// ps -> name 通过ps找到所指向的对象的成员name

	//法二法三性质一样，
	*/


	return 0;
}