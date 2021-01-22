//一个工程里可以有多个.c文件，
//但是多个.c文件中只能有一个main函数
int g_val = 2021;

#define MAX 123
int main()
{
	//1、子面常量
	100;//字面常量
	3.14;//字面常量

	//2、const修饰的常变量
	//不能修改
	/*
	int a = 10;
	printf("%d\n",a);//10
	a = 2;//改变a的值
	printf("%d\n", a);//2
	*/
	
	const int a = 10;
	printf("%d\n",a);//10
	//不能修改，报错
	/*
	a = 2;//改变a的值
	printf("%d\n", a);
	*/

	//数组的创建
	//C99标准之前 - 数组的大小的指定必须是常量
	//C99之后引入一个变长数组的概念，可以使用变量了
	int arr[10] = { 0 };
	/*
	int n = 10;
	int arr[n] = { 0 };
	*/

	//仍然报错，n被const修饰了，具有了常属性，但还是变量
	/*
	const int n = 10;
	int arr[n] = { 0 };
	*/

	//3、#define 定义的标识符常量
	int e = MAX;
	//MAX = 456;//报错
	printf("%d\n",e);

	int arr[MAX] = { 0 };//没有报错

	//4、枚举常量
	//枚举 - 一一列举
	//性别：男、女、保密

	//创建一个枚举类型
	//enum是一个枚举关键字
	enum Sex
	{
		//枚举常量
		//默认从0开始，0123递增
		//不能修改，是常量
		//必须用逗号隔开，结束后的大括号必须用分号
		//最开始初始化的时候，如果MALE=5;那么下面就是567
		MALE,
		FEMALE,
		SECRET
	};

	//enum Sex sex = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}