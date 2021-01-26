#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//二分法查找/折半查找
/*
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//有序数组
	//想在arr这个有序数组中查找一个数字k

	int k = 0;
	//sizeof(arr)--计算的是数组的总大小，单位是字节--40
	//sizeof(arr[0])--计算的是数组第一个元素的大小--4
	int sz = sizeof(arr) / sizeof(arr[0]); // 10
	scanf("%d",&k);

	//折半查找
	//1、找出数组的中间元素	（不断利用元素下标进行中间元素的确定）
	//2、中间元素和k比较，确定新的查找范围
	//left = 0  5 8 9	10
	//right = 9 9 9  9	9
	//mid = 4(5) 7(8) 8(9) 9(10)
	//k = 22      22    22  22

	int left = 0;
	int right = sz - 1;

	while (left <= right){
		//int mid = (left + right) / 2;//这个地方不太好，如果一个题目，left和right都没有超出int范围，但加起来超过了，就会丢掉一些值，导致后续结果发生错误

		int mid = left + (right - left) / 2;//这种方法肯定不会溢出
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		} 
		else
		{
			printf("找到了，下标是：%d\n",mid);
			break;
		}

	}

	//来到以下代码的时候有两种情况：
	//1、while里面的判断表达式不满足
	//2、满足else，然后break，跳出来，说明找到了
	//所以我们下面，应该处理跳出来的代码，即left>right

	if (left > right)
	{
		printf("找不到了\n");
	}



	return 0;
}
*/


/*
#include <limits.h>

int main()
{
	//int a = INT_MAX;//INT_MAX是int整型的最大值：2147483647
	int a = 2147483646;
	int b = 2147483646;
	int c = (a + b) / 2;
	printf("%d\n",c);//-2


	return 0;
}
*/


/*
//编写代码，演示多个字符从两端移动，向中间汇聚。
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//。。。
//welcome to bit!!!!!

#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	char buf[] = "bit";
	//[b i t \0]
	// 0 1 2  3
	//sizeof(buf)/sizeof(buf[0]) - 2//后面有\0
	//strlen(buf) - 1

	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	Sleep(1000);//毫秒
	system("cls");

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//毫秒
		system("cls");//system这个函数是执行系统命令的函数，cls清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);


	return 0;
}
*/


/*
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序）
//如果密码中有空格我们用gets来读取，getchar是读取字符的，像scanf，%d，%s，没必要考虑空格
int main()
{
	int i = 0;
	//用来存放密码
	char password[20] = { 0 };

	//假设正确的密码是字符串：123456

	for (i = 0; i < 3; i++)//明确提示循环几次，用for最好
	{
		printf("请输入密码：->\n");
		scanf("%s",password);//数组名本来就有地址，这里不需要取地址操作

		//两个字符串的比较，不能使用==，应该使用strcmph函数
		//strcmph函数--研究返回值--返回int型
		//<0：string 1 小于 string 2
		//0：string 1 等于 string 2
		//>0：string 1 大于 string 2
		//abcdef < abcf //比较的是ASCii

		if (strcmp("123456",password) == 0)//两个字符串比较，绝对不能用等号！！！！！！！
		{
			printf("密码正确，登录成功！\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}

	}
	
	if (i == 3)
	{
		printf("三次密码错误，退出程序！\n");
	}



	return 0;
}
*/
