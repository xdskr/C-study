#include <stdio.h>

int main()
{
	//数组
	//数组一定是连续的，怎么进行访问--数组下标，从0开始
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
	int arr[10] = {1,2,3};//不完全初始化，其他默认为0

	//1、操作符
	// / %
	//%f 打印小数
	printf("%d\n",7 / 2);//3
	printf("%d\n",7 % 2);//1

	//除法要得到小数，/两端必须至少有一个操作数是浮点数
	printf("%f\n", 7 / 2.0);//3.5
	//printf("%f\n", 7 % 2.0);//报错

	//2、移位操作符
	int a = 12;//a是整型-4个字节-32个bit
	//把a的二进制位向右移动一位
	//12的二进制位：1100
	//00000000 00000000 00000000 00001100
	//右移位变为b
	//00000000 00000000 00000000 00000110
	//变为十进制的6
	//左移位变为c
	//00000000 00000000 00000000 00011000
	int b = a >> 1;
	int c = a << 1;
	printf("%d\n",b);//6
	printf("%d\n",c);//24


	//3、位操作符
	//& 按位与，二进制
	//| 按位或，二进制
	//^ 按位异或，二进制，相同为0，相异为1
	int e = 5;
	int d = 3;
	int f = e&d;
	printf("%d\n", f);//1

	//4、赋值操作符
	int g = 1;
	g = g + 1;
	g += 1;
	printf("%d\n",g);


	//5、单目操作符 - 只有一个操作数
	//2 + 3;双目操作符
	//0表示假，非0表示真（负数也包括）
	int h = !3;//3本来非0，为真，!3 变为假
	printf("%d\n", h);//0
	//sizeof 操作数的类型长度
	//~按位取反
	//++ -- 后置前置
	//后置++，先使用，后++
	//前置++，先++，后使用

	//强制类型转换
	int i = (int)3.14;
	printf("%d\n",i);//3
	

	//6、关系操作符

	//7、逻辑操作符
	//&& 逻辑与
	//|| 逻辑或
	int j = 0;
	int k = 1;
	int l = j && k;
	printf("%d\n", l);//0

	//8、条件操作符/三目运算符
	int m = 3;
	int n = 0;
	if (m > 5)
	{
		n = 10;
	}
	else
		n = 20;
	//转为三目运算符
	n = (m > 5 ? 10 : 20);


	//9、逗号表达式
	//逗号表达式会从左到右依次计算，整个表达式结果只看最后一个
	int o = ( 2, 3, 4, 5, 6 );
	printf("%d\n",o);//6


	return 0;
}