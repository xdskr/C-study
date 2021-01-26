#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//作业讲述：
//1、从大到小输出三个数：
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d",&a,&b,&c);
	//处理
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c){
		int tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c){
		int tmp = a;
		a = c;
		c = tmp;
	}

	//从大到小输出
	printf("%d %d %d\n",a,b,c);


	return 0;
}
*/


//2、打印1-100内3的倍数
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n"i);
	}


	return 0;
}
*/


//3、两个数的最大公约数
/*
int main()
{
	int a = 16;
	int b = 24;

	int i = (a > b) ? b : a;

	for (; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n",i);
			break;
		}
	}

	//法二：辗转相除法
	//最小公倍数：a*b/最大公约数



	return 0;
}
*/


//4、打印1000-2000年之间的闰年
/*
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		//判断闰年的规则：
		//1、被 4 整除，不能被100整除是闰年
		//2、被 400 整除也是闰年
		if ((year % a == 0) && (year % 100 != 0))
		{
			printf("%d ",year);
		}

		if (year % 400 == 0)
		{
			printf("%d ", year);
		}

		//上面两个可以归并
		if (((year % a == 0) && (year % 100 != 0)) || (year % 400 == 0))

	}



	return 0;
}
*/


//5、打印100-200之间的素数
/*
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <=100; i++)
	{
		int flag = 1;//假设是素数

		//判断i是否为素数：只能被1和它本身整除
		//判断i是否为素数，则拿2-（i-1）之间的数字试除一下，

		for (j = 2; j  < i; j ++)
		{
			if (i % j == 0)
			{
				flag = 0;//标识i不是素数
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ",i);
		}

	}


	return 0;
	}
*/

//优化以上代码：采用以上方法，j的取值范围是：2到i-1
/*
当判断i是否为素数的时候：
	如果i不是素数，一定可以写成：i=a*b 的方式
	而a和b中一定有一个数字是  <=sqrt(i) 的。
	所以我们判断2到 sqrt(i) 之间是否存在数可以整除，缩小j的范围
*/

//还可以继续优化：因为偶数永远不可能是素数，所以(i=101;i<=sqrt(i);i+=2)

/*
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 100; i++)
	{
		int flag = 1;//假设是素数

		//判断i是否为素数：只能被1和它本身整除
		//判断i是否为素数，则拿2-（i-1）之间的数字试除一下，

		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//标识i不是素数
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ", i);
		}

	}


	return 0;
}
*/


//6、数一下1-100中9出现的个数
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//无非分为个位数是9，十位数是9
		//个位数是9：19%10==9
		//十位数是9：91/10==9

		if (i % 10 == 9)
		{
			count++;
		}
		//else if (i / 10 == 9)//这样会导致99只判断一次，
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n",count);


	return 0;
}
*/


//7、分数求和
/*
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}

	//%f -- float
	//%lf -- double
	//%s -- 字符串
	//%c -- 字符
	//%d -- 有符号的整数
	//%u -- 无符号数
	printf("%lf\n",sum);



	return 0;
}
*/


//8、求10个整数中的最大值
/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}

	//找出最大值
	//以下代码是错误的，如果给定10个负数，则输出是0，因为max是0，没有比0还大的，所以这个地方是错误的。
	//int max = 0;
	//for (i = 0; i < 10; i++)

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);



	return 0;
}
*/


//9、输出99乘法表
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//打印一行
		int j = 0;
		for (j= 1; j <= i; j++)
		{
			printf("%d * %d = %2d ",i,j,i*j);
			//%2d 右对齐，不够的用空格填充
			//%-2d 左对齐，不够的用空格填充
		}
		printf("\n");
	}



	return 0;
}
*/