#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	//a：5 6 7 8 9
	//b：7 23
	//c：6 7 8

	printf("%d\n", a);//9
	printf("%d\n", b);//23
	printf("%d\n", c);//8

	return 0;
}
*/

//交换两个变量
//法一：
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);

	printf("打印前，a = %d，b = %d\n",a,b);

	a = a + b;//a此时存储的是a与b的和
	b = a - b;//a中存储的是a与b的和，减去b就是原来a的值，并把它放在b中
	a = a - b;//a中仍是a与b的和，b中此时存储的是原来a的值，减去它就是原来b的值，并把它赋值给a


	printf("打印前，a = %d，b = %d\n", a, b);

	return 0;
}
*/

//法二：
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("打印前，a = %d，b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;


	printf("打印前，a = %d，b = %d\n", a, b);


	return 0;
}
*/