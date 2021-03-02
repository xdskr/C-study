#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


/*
//函数指针数组
//函数指针 - 指针
//函数指针数组 - 存放函数指针的数组
//指针数组 - 存放指针的数组
//整型指针数组 - 存放整型指针的数组
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x,int y)
{
	return x - y;
}
int main()
{
	int a = 10;
	int b = 20;
	//整型指针数组
	int* arr[] = { &a, &b };
	
	//函数指针数组
	int(*pf1)(int, int) = Add;
	int(*pf2)(int, int) = Sub;

	//这个pfarr就是函数指针数组
	int(*pfarr[2])(int, int) = { Add, Sub };

	return 0;
}
*/


//函数指针数组的应用
//计算器：加减乘除
/*
//原始方式：
void menu()
{
	printf("******************************\n");
	printf("*******1、add    2、sub*******\n");
	printf("*******3、mul    4、div*******\n");
	printf("*******     0、exit    *******\n");
	printf("******************************\n");
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
	int ret = 0;
	do
	{
		menu();
		printf("请选择：->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数：->");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d 和 %d 相加的结果为：%d\n", x, y, ret);
			break;
		case 2:
			printf("请输入两个操作数：->");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d 和 %d 相减的结果为：%d\n", x, y, ret);
			break;
		case 3:
			printf("请输入两个操作数：->");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d 和 %d 相乘的结果为：%d\n", x, y, ret);
			break;
		case 4:
			printf("请输入两个操作数：->");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d 和 %d 相除的结果为：%d\n", x, y, ret);
			break;
		case 0:
			printf("退出计算器！\n");
			break;
		default:
			printf("对不起，您输入的数字无效，请重新输入！\n");
			break;
		}


	} while (input);

	return 0;
}
*/

/*
//改进方式：
//函数指针数组 - 转移表
void menu()
{
	printf("******************************\n");
	printf("*******1、add    2、sub*******\n");
	printf("*******3、mul    4、div*******\n");
	printf("*******     0、exit    *******\n");
	printf("******************************\n");
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
	int ret = 0;
	//定义一个函数指针数组
	//数组第一个元素放了一个0，是为了和菜单呼应，1是加，2是减，3是乘，4是除
	int(*pfarr[])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		menu();
		printf("请选择：->");
		scanf("%d", &input);
		if (0 == input)
		{
			printf("退出计算器！\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：->");
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("结果为：%d\n", ret);

		}
		else
		{
			printf("对不起，您输入的数字无效，请重新输入！\n");
			break;
		}



	} while (input);

	return 0;
}
*/





/*
//前面讲了函数指针数组：存放函数指针的数组
//那么我们的函数指针数组可以取地址名吗?--可以
//那么我们把这个数组的地址放在 指向函数指针数组的指针中

int main()
{
//指向加法运算的函数指针
int(*p)(int, int);//函数指针
//函数指针数组
int(*parr[4])(int, int);

//指向函数指针数组的指针
//这个 pparr 就是一个指针，是一个指向函数指针数组的指针
int(*(*pparr)[4])(int, int);

return 0;
}
*/