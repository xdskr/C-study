#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//枚举 - 把可能的值一一列举出来
//比如：性别、一周有几天、月份
/*
enum Day//星期
{
	//枚举类型的可能取值
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//性别
{
	MALE,
	FEMALE,
	SECRET
};
enum Color//颜色
{
	//RED,//0
	//GREEN,//1
	//BLUE//2

	//RED,//0
	//GREEN = 5,//5
	//BLUE//6

	RED = 8,//8
	GREEN,//9
	BLUE//10
};

int main()
{
	enum Sex s = MALE;

	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);

	return 0;
}
*/



//举例说明枚举的应用
/*
enum Option
{
	EXIT,//默认为0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4 - 跟菜单对应起来了
};
void menu()
{
	printf("*****************************\n");
	printf("******1、add	 2、sub******\n");
	printf("******3、mul	 4、div******\n");
	printf("******	   0、exit	   ******\n");
	printf("*****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择：-->");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			printf("输入两个操作数：-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case SUB:
			printf("输入两个操作数：-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case MUL:
			printf("输入两个操作数：-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case DIV:
			printf("输入两个操作数：-->");
			scanf("%d %d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case EXIT:
			printf("退出程序！\n");
			break;
		default:
			printf("您输入的数字不在范围内，请重新输入：\n");
			break;
		}

	} while (input);

	return 0;
}
*/

/*
枚举的优点：
我们可以使用 #define 定义常量，为什么非要使用枚举？ 枚举的优点：
1. 增加代码的可读性和可维护性
2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
3. 防止了命名污染（封装）
4. 便于调试
5. 使用方便，一次可以定义多个常量
*/