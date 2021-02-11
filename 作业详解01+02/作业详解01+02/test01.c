#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
1、
编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:1999 2299
输出例子:7
*/

//法一：
/*
int count_differ_bit(int num1, int num2)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num1 >> i) & 1) != ((num2 >> i) & 1))
			count++;
	}
	return count;
}
*/
//法二：异或一下，然后数1的个数
/*
int count_differ_bit(int num1, int num2)
{
	int tmp = num1^num2;
	int count = 0;//计数
	while (tmp)
	{
		count++;
		tmp = tmp&(tmp - 1);
	}
	return count;
}


int main()
{
	int i = 0;
	int j = 0;
	scanf("%d %d",&i,&j);

	int ret = count_differ_bit(i,j);
	printf("%d\n",ret);

	return 0;
}
*/

/*
2、
打印整数二进制的奇数位和偶数位
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
0100101 00110101 00001011 00100110
int型的变量占32个字节，有16个偶数位，16个奇数位
*/

/*
void print(int k)
{
	int i = 0;
	//打印奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (k >> i) & 1);
	}
	printf("\n");
	//打印偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (k >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);

	return 0;
}
*/




/*
3、
统计二进制中1的个数：
写一个函数返回参数二进制中 1 的个数。
比如： 15    0000 1111    4 个 1
*/

//法一：正数可以，负数不行，比如num=-1，-1在内存中的补码形式是32个1，但是结果输出为0
/*
int print_one_count(int num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
*/

//法二：我们把num的数据类型改正无符号整型，这样-1就会被当作最大的数来对待。
/*
int print_one_count(size_t num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
*/

//法三：举例子：num的最低为和1进行与运算，如果结果为0，则说明num的最低位为0，如果结果为1，则说明num的最低位位1。
//int型占4个字节，总共32个比特位，我们将num向右依次移动，将每一位转换为最低为，并于1进行与运算。
//该方法的缺陷是：一定会循环32次，浪费空间。
/*
int print_one_count(int num)
{
	int i = 0;
	int count = 0;//计数
	for(i=0; i<32; i++)
	{
		if( ((num>>i)&1) == 1 )
			count++;
	}
	return count;
}
*/

/*
法四：
n = 15,n的二进制位：1111
我们对n进行运算：n = n & (n-1)
这个表达式会使得n的二进制中最右边的1消失

n:	1111
n-1:1110

n:	1110
n-1:1101

n:	1100
n-1:1011

n:	1000
n-1:0111

n:	0000

这个表达式进行了多少次，就说明有几个1
*/
/*
int print_one_count(int num)
{
	int count = 0;//计数
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	//先写函数是怎么实现的--这种方式叫做：TDD--测试驱动开发
	int count = print_one_count(num);
	printf("%d\n",count);

	return 0;
}
*/



//延申：写一个代码，判断n是否为2^m次方
//4 100
//8 1000
//16 10000

//这个n = n & (n-1)表达式运行一次，就会让唯一的1变为0
//因为2的m次方的数中，其二进制一定是只有1个1
/*
int main()
{
	int n = 0;
	scanf("%d",&n);
	if ((n & (n-1)) == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
*/
