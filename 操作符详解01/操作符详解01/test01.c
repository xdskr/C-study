#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//算数操作符： / %
/*
int main()
{
	// /操作符
	//除号操作符两端的两个操作数都是整数，执行的都是整数除法
	//除号的操作数有一个数是浮点数时，就执行的是浮点数的除法
	printf("%d\n", 7 / 2);//3
	printf("%.2f\n", 7 / 2.0);//3.5

	//注意：除号的除数不能为0
	//printf("%d\n", 7 / 0);//报错：被零除或对零求模

	// % 操作符
	//取模得到的是余数
	printf("%d\n", 7 % 2);//1
	//printf("%d\n", 7 % 2.0);////报错：“%”: 非法，右操作数包含“double”类型

	return 0;
}
*/


//移位操作符
//警告：对于移位操作符，不要移动负数位，这个是标准未定义的
//规律：左移一位相当于*2；右移一位相当于/2
// << -左移操作符
// >> -右移操作符
// -1 向右移动多少位都是-1

//整数的二进制位有三种表示形式：原码、反码、补码
//正整数的原码、反码、补码是相同的
//负整数的原码、反码、补码是需要计算的
//内存中存储的是补码
/*
int main()
{
	int a = 5;
	//左移移动的是存储在内存中二进制的补码
	//左移一位：左边丢弃一位，右边补0
	//a的二进制位：101，一个整型4个字节，32个比特位
	//00000000 00000000 00000000 00000101  -- 原码(反码)(补码)，左边第一位是符号位，为0是正数、为1是负数
	//00000000 00000000 00000000 00001010  -- 左移一位后的二进制，代表十进制10

	int b = a << 1;
	printf("%d\n",b);//10
	printf("%d\n",a);//5，a不变



	int i = -1; 
	//10000000 0000000 00000000 00000001  -- 原码
	//11111111 11111111 11111111 11111110  -- 反码 --负整数原码的反码是：符号位不变，其它位按位取反
	//11111111 11111111 11111111 11111111  -- 补码  -- 反码+1=补码

	//11111111 11111111 11111111 11111110  -- 左移1位后的数的补码，真实打印的值是原码，所以要求原码
	//11111111 11111111 11111111 11111101  -- 补码-1=反码
	//10000000 0000000 00000000 00000010  -- 原码 -- 符号位不变，其它位按位取反
	//-2


	int j = i << 1;
	printf("%d\n", j);//-2




	int m = 5;
	int n = m >> 1;
	printf("%d\n", n);//2
	//右移操作符
	//1、算术右移：右边丢弃一位，左边补原来的符号位
	//2、逻辑右移：右边丢弃一位，左边补0
	//正数无法区分算术右移和逻辑右移，需要用负数区分。

	int k = -1;
	int z = k >> 1;
	printf("%d\n", z);//-1
	//1、算术右移
	//10000000 0000000 00000000 00000001  -- 原码
	//11111111 11111111 11111111 11111110  -- 反码 --负整数原码的反码是：符号位不变，其它位按位取反
	//11111111 11111111 11111111 11111111  -- 补码  -- 反码+1=补码

	//11111111 11111111 11111111 11111111  -- 右移1位后的数的补码，真实打印的值是原码，所以要求原码

	//2、逻辑右移
	//10000000 0000000 00000000 00000001  -- 原码
	//11111111 11111111 11111111 11111110  -- 反码 --负整数原码的反码是：符号位不变，其它位按位取反
	//11111111 11111111 11111111 11111111  -- 补码  -- 反码+1=补码

	//01111111 11111111 11111111 11111111  -- 右移1位后的数的补码，真实打印的值是原码，所以要求原码

	//结果为-1
	//所以当前编译器采用的是算术右移


	return 0;
}
*/


//位操作符：& - 按位与、 | - 按位或、 ^ - 按位异或
//他们的操作数必须是整数，负数也可以，但浮点数不行
//符号位也是一起参与运算的
/*
int main()
{
	int a = 3;
	int b = 5;
	int c = a&b;//按(二进制)位与
	printf("%d\n", c);//1
	//a：00000000 00000000 00000000 00000011 --3
	//b：00000000 00000000 00000000 00000101 --5
	//c：00000000 00000000 00000000 00000001 --1

	int d = a|b;//按(二进制)位或
	printf("%d\n", d);//7
	//a：00000000 00000000 00000000 00000011 --3
	//b：00000000 00000000 00000000 00000101 --5
	//d：00000000 00000000 00000000 00000111 --7

	int e = a ^ b;//按(二进制)位异或
	printf("%d\n", e);//6
	//异或：相同位0，相异1
	//a：00000000 00000000 00000000 00000011 --3
	//b：00000000 00000000 00000000 00000101 --5
	//d：00000000 00000000 00000000 00000110 --6



	return 0;
}
*/

//交换两个数
/*
int main()
{
	int a = 5;
	int b = 3;
	int tmp = 0;//交换的时候，创建了一个tmp临时变量

	printf("a = %d，b = %d\n",a,b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d，b = %d\n",a,b);
	return 0;
}
*/
//写一个代码交换两个函数，不能使用第三个变量
/*


//这个方法会导致整型溢出
//整型是4个字节
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d，b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;//b此刻放的3，原来a的值，
	printf("a = %d，b = %d\n", a, b);

	return 0;
}
*/


//不会溢出，但可读性差，还是考虑临时变量，效率也不够高
/*
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d，b = %d\n", a, b);
	a = a^b;//a与b异或的结果为密码。
	b = a^b;//密码与b异或，能翻译出原来的a，并放到b里
	a = a^b;//密码与原来的a，此时的b异或，能翻译出原来的b，并放到a里
	printf("a = %d，b = %d\n", a, b);
	//详情见图片


	return 0;
}
*/

//练习1：求一个整数存储在内存中二进制中1的个数
/*
int main()
{
	int a = 15;
	//00000000 00000000 00000000 00001111
	//法一：模2 除2
	//法二：15的二进制与1的二进制按位与，最低位就知道 1还是 0，然后向右移动，再分别与1的二进制按位与


	return 0;
}
*/



//赋值操作符
/*
int main()
{
	int a = 15;//初始化
	int b;
	b = 10;//这才叫赋值

	a = b = b + 1;// 连续赋值
	//先把b+1的结果赋给b，再把b的结果赋给啊



	return 0;
}
*/


//复合赋值
/*
int main(){

	int b = 10;
	b += 10;

	b = b >> 1;
	b >>= 1;

	return 0;
}
*/


//单目操作符：只有一个操作数的操作符
/*
int main()
{
	// ! 逻辑反操作
	//if (!sorted){}

	// - 负值
	int a = -3;
	a = -a;
	a = +a;

	// + 正值

	// & 取地址操作符
	int a = 10;
	&a;


	// sizeof 操作数的类型长度(以字节为单位)
	//sizeof是一个操作符，不是函数，任何一个函数后面的括号是不能省略的。
	//strlen 是一个求字符串长度的函数，只能应用于字符串
	int b = 10;
	printf("%d\n",sizeof(a));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));

	int arr[10] = { 0 };
	printf("%d\n", sizeof(int[10]));//int[10]就是arr的类型
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	int arr2[5] = { 0 };//所以arr和arr2数组类型不一样


	// ~ 对一个数的二进制按位取反

	// -- 前置、后置--

	// ++ 前置、后置++

	// * 间接访问操作符（解引用操作符）
	int *p = &a;
	//int *整体说明 p是一个整型指针变量
	//*说明p是一个指针变量，int说明p指向的那个a是整型的
	*p = 20;

	// (类型) 强制类型转换


	return 0;
}
*/


//
int main()
{
	short s = 3;
	int a = 10;

	printf("%d\n",sizeof(s = a + 5));//2
	//a是一个整型，a+5还是一个整型，整型要放到s里面，这个表达式最后的大小还是由s说了算，非要把一个4个字节的放到2个字节里，只能截断


	printf("%d\n",s);//3
	//sizeof()括号中放的表达式是不参加计算的，即是上面的s=a+5;是不参加计算的
	//s=a+5 这个代码是在编译阶段调用的，编译完毕后，只剩下一个2
	//而表达式是在运行阶段调用的。
	//.c	到	.exe文件经过编译、链接、到.exe是运行文件。


	return 0;
}