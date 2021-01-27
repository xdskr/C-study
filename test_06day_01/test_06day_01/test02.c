#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



/*
//is_prime(i)
//返回1--是素数
//返回0--不是素数
//实参名和形参名是可以一样的。
int is_prime(int i)
{
	//判断i是否为素数
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0){
			return 0;
			break;
		}

	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	

	return 0;
}
*/


//判断闰年那个地方可以这么写：
//return (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
//因为上面这个表达式若为真则返回1，若为假，则返回0





/*


//二分法查找
//int binary_research(int arr[10000],int k ,int sz)
//这里面写数字多大都行，不会去创建数组。

//形参接收数组 int arr[] 和int *arr都可以是吧
int binary_research(int arr[],int k ,int sz)

{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else{
			return mid;
			//break;//return 已经返回了，这时候break没什么意义。
			//return比break强大，遇到return直接返回，而break只是跳出最近的for循环
		}
	}

	//if (left > right)
	//可以不用判断，只要循环结束，就证明没有正常找到。直接返回-1就可以。
		return -1;

}
int main()
{
	//有序的
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//二分查找：找到了返回下标；找不到返回-1
	int sz = sizeof(arr) / sizeof(arr[0]);

	//arr是数组，arr作为参数，传参的时候，不会把整个数组传过去。
	//实际传递的是数组首元素的地址，而不是数组的地址。
	//int binary_research(int *arr[],int k)实际在方法里是这样传递的，传过去的是首元素的地址。
	//int ret = binary_research(arr, k);
	//报错

	int ret = binary_research(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到!\n");
	}
	else
	{
		printf("找到了，下标是：%d\n",ret);
	}

	return 0;
}

*/


//写一个函数，每一次调用都会让num+1
//因为要调用Add函数，使外部函数的变量发生变化，所以要传址

void Add(int *ps)
{
	(*ps)++;
	//在这里，如果不加括号，这个++，是对ps进行的；如果带括号，则是作用于*ps。
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);//1

	Add(&num);
	printf("%d\n", num);//2

	Add(&num);
	printf("%d\n", num);//3

	Add(&num);
	printf("%d\n", num);//4

	Add(&num);
	printf("%d\n", num);//5


	return 0;
}