#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数


/*
int Add(int x,int y)
{
	return (x + y);
	//尽量不要在函数里写有打印等功能，这样的函数不具备独立性。
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n",ret);



	return 0;
}
*/


/*
//--------------------------strcpy
int main()
{
	char arr1[] = "bit";//数据源
	char arr2[] = "xxxxxxxxxxxxxxxx";//目的地
	//其实拷贝过去，下标4往后还有剩下的x，和默认的0，但是打印只打印bit，因为把arr1中的bit\0，都打印过来了，遇到\0就停止。

	strcpy(arr1, arr2);
	printf("%s\n",arr2);//bit



	return 0;
}
*/


//--------------------------memset
/*
int main()
{
	char arr[] = "hello bit";//我们把hello bit放到数组中去了，放到了连续的内存中去，可以称之为内存块
	memset(arr, 'x', 5);

	printf("%s\n", arr);//xxxxx bit



	return 0;
}
*/


/*
//int  返回值类型
//get_max  函数名
//int x，int y，参数列表
//{}函数体-函数的实现
int get_max(int x,int y)
{
	return (x > y) ? (x) : (y);
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//找出两个整数中的较大值

	printf("max = %d\n",max);



	return 0;
}
*/

/*
void Swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;

}

int main()
{
	int a = 10;
	int b = 20;
	//写个函数交换a和b的值
	printf("a = %d b = %d\n", a, b);//交换前
	Swap(a, b);
	printf("a = %d b = %d\n", a, b);//交换后

	//我们在运行结束以后，结果运行错误，没有改变。
	//在Swap函数里面，x和y的值确实发生了交换，但是主函数main里面的a和b的值没有改变。
	//在主函数运行的时候，a和b各自创建了自己的内存空间，在Swap函数里，s和y也各自创建了自己的内存空间。
	//在进入Swap函数时，x和y确实得到了a和b的值，10和20，但是有各自的内存空间，我们在函数里，借助temp这个临时变量，将x和y进行了交换。
	//交换x和y之后，不影响a和b，因为是两个不同的内存空间。

	return 0;
}
*/



/*

//改进：用指针
//void Swap1(int x, int y)//形参
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//
//}

//为什么Swap1不行，而Swap可以实现呢？
//函数传参的时候：
//实参传递给形参，形参是实参的一份临时拷贝。
//对形参的修改不会影响实参。

//Swap传的是地址，形参如果得到的是实参的地址，通过地址可以找回到实参。

void Swap(int* px, int* py)//形参
{
	int temp = *px;
	*px = *py;
	*py = temp;

}

int main()
{
	int a = 10;
	int b = 20;
	//写个函数交换a和b的值
	printf("a = %d b = %d\n", a, b);//交换前
	//Swap1(a, b);//实参
	Swap(&a, &b);//实参
	printf("a = %d b = %d\n", a, b);//交换后

	//不去调用这个Swap函数，系统不会给 px和py 分配空间。


	return 0;
	}

*/

/*
int main(){
	
	int a = 10;
	int b = 20;

	int * pa = &a;
	int * pb = &b;

	test1(pa,pb);//传值
	test1(&pa,&pb);//传址


	return 0;
}
*/