#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//1、
/*
以下代码输出结果：
先定义一个int类型的arr数组，初始化值为1 2 3 4 5
将arr数组的首元素地址赋值给指针变量p，并强转为short型
 1：00000000 00000000 00000000 00000001
 2：00000000 00000000 00000000 00000010
 3：00000000 00000000 00000000 00000011
 4：00000000 00000000 00000000 00000100
 5：00000000 00000000 00000000 00000101
short类型的变量占2个字节，也就是16个比特位：
 1：00000000 00000001
 2：00000000 00000010
 3：00000000 00000011
 4：00000000 00000100
 5：00000000 00000101
 循环4次，但是将p每一次右移一个short类型的据离，也就是每次移动两个字节，只更改8个字节的二进制为0，
 对应的arr数组中，之更改了int类型的前8个字节，也就是两个int类型的数，所以是0 0 3 4 5
 */
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


//2、
/*
以下代码输出结果：
定义了一个无符号长整型的数组，并赋初始值：6 7 8 9 10，然后定义了一个无符号长整形的指针，
然后将数组首元素的地址赋值给指针，即指针目前指向数组的首元素
6： 00000000 00000000 00000000 00000110
7： 00000000 00000000 00000000 00000111
8： 00000000 00000000 00000000 00001000
9： 00000000 00000000 00000000 00001001
10：00000000 00000000 00000000 00001010
无符号长整形在内存中占4个字节，即32个比特位
将首地址+3，往前挪动3个unsigned int的长度，即3*4=12个字节
即指向9，然后进行下列表达式：*(pulPtr + 3) = *(pulPtr + 3) + 3
并进行解引用操作，让其值+3=12
此时打印*pulPtr扔为6不变，*(pulPtr + 3)为12
*/
/*
int main(){
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
}
*/


//3、下列代码的运行结果：
/*
函数进入主函数，然后定义结构体类型的变量，并放入students数组中，总共定义3个临时变量
num：	9801	9802	9803
name：	zhang	wang	zhao
age：	 20		 19		 18
然后进入fun函数：进入fun函数时，此时指针指向第二个临时变量。
fun函数接收指针变量，并进行打印：此时打印wang
*/
/*
//定义一个struct stu的结构体类型
struct stu
{
	int num;
	char name[10];
	int age;
};

//定义一个fun方法，返回类型为空
void fun(struct stu *p)
{
	printf("%s\n", (*p).name);
	return;
}


int main()
{
	struct stu students[3] = { { 9801, "zhang", 20 },
	{ 9802, "wang", 19 },
	{ 9803, "zhao", 18 }
	};
	fun(students + 1);
	return 0;
}
*/



//4、下列代码的运行结果
/*
定义了一个整形变量a，并给a赋予了地址，
对a变量进行取地址操作，并强转为char类型的指针变量，并将a的地址赋值给指针变量pc
先令*pc=0，即是让a=0，
*/
/*
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/


//5、
/*
使用指针打印数组内容：
写一个函数打印arr数组的内容，不使用数组下标，使用指针。
arr是一个整形一维数组。
*/
/*
void init(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void print_arr(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(arr + i));
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print_arr(arr,sz);

	return 0;
}
*/


//6、
/*
字符串逆序
写一个函数，可以逆序一个字符串的内容。
*/
/*
void revise_str(char *str, int sz)
{
	int start = 0;
	int end = sz-1;
	while (start < end)
	{
		int tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}

}
int main()
{
	char str[100] = {0};
	gets(str);

	int sz = strlen(str);
	printf("%s\n", str);
	revise_str(str, sz);
	printf("%s\n", str);

	return 0;
}
*/





//7、
/*
计算求和：
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
2=0+(2*1)
22=2+(2*10)
222=22+(2*100)
2222=222+(2*1000)
22222=2222+(2*10000)
*/
//自己写：
/*
int Sum_a(int a)
{
	int sum = 0;
	int ret = 0;
	int i = 0;
	static int k = 0;
	for (i = 0; i < 5; i++)
	{
		//sum=0+(2*1)=2				k=2
		//sum=2+(2*10)=22			k=22
		//sum=22+(2*100)=222		k=222
		//sum=222+(2*1000)=2222		k=2222
		//sum=2222+(2*10000)=22222	k=22222
		ret = (k + (a * pow(10, i)));
		sum += ret;
		k = ret;
	}
	return sum;
	
}

int main()
{
	printf("%d\n", 2 + 22 + 222 + 2222 + 22222);
	int a = 0;
	scanf("%d", &a);
	int Sn = Sum_a(a);
	printf("%d\n", Sn);
	

	return 0;
}*/
//老师写：
/*
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d",&a,&n);
	int sum = 0;
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n",sum);

	return 0;
}
*/


//8、
/*
打印水仙花数
求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
*/
/*
int judge_number(int k)
{
	int count = 0;
	while (k != 0)
	{
		k /= 10;
		count++;
	}
	return count;
}
int judge_water(int i,int ret)
{
	int n = 0;
	int sum = 0;
	int m = i;
	while (i != 0)
	{
		n = i % 10;
		i = i / 10;
		sum += (int)pow(n, ret);
	}
	if (sum == m)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int ret = judge_number(i);
		int num = judge_water(i,ret);
		if (num)
			printf("%d ",i);
	}
}
*/
//老师写
/*
int main()
{
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		int sum = 0;
		//判断i是否为自幂数
		//1、计算i的位数n
		int tmp = i;//123
		int n = 1;
		while(tmp/10)
		{
			n++;
			tmp /= 10;
		}
		//2、获取i的每一位，并计算每一位的n次方之和
		tmp = i;
		while(tmp)
		{
			sum += pow(tmp % 10);
			tmp /= 10;
		}
		//3、判断并输出
		if(sum == i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
*/



//9、打印菱形
/*
      *
	 ***
	*****
   *******
    *****
	 ***
	  *
上面打印line行，下面打印line-1行，分开实现
*/
/*
int main()
{
	int line = 0;
	scanf("%d",&line);
	//打印上半部分--line
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行
		//空格
		int j = 0;
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//*号
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分--line-1
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		//空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*号
		for (j = 0; j < 2 * (line -1-i)- 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}

	return 0;
}
*/



//10、
/*
喝汽水问题
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
*/
/*
int main()
{
	int money = 0;
	scanf("%d",&money);//20
	
	int total = 0;
	int empty = 0;

	total += money;
	empty += money;

	//置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = (empty / 2) + (empty % 2);
	}
	printf("total = %d\n",total);

	return 0;
}
*/

//经过多次运算：我们发现total=money*2 - 1
//优化代码
/*
int main()
{
	int money = 0;
	scanf("%d", &money);//20
	int total = 0;

	if (money > 0)//如果不加这个判断条件，给的钱为0，还要欠一瓶
		total = money * 2 - 1;
	printf("total = %d\n", total);

	return 0;
}
*/