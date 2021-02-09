#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>


/*
int main()
{
	int arr[20] = { 1 };
	float value = 0.0;

	scanf("%d", arr);

	int i = 0;
	for (i = 0; i<7; i++){
		printf("%d",arr[i]);
	}

	return 0;
}
*/



//用函数实现素数的判断
/*
int judgment(int k)
{
	int i = 0;
	for (i = 2; i <= sqrt(k); i++)
	{
		if (k % i == 0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <=200; i++)
	{
		int ret = judgment(i);
		if (ret == 1)
			printf("%d ", i);
	}
	

	return 0;
}
*/




//用函数判断是否是闰年
/*
int print_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;

}

int main()
{
	int i = 0;
	while (scanf("%d", &i) != EOF)
	{
		int ret = print_year(i);
		if (ret == 1)
			printf("%d--是闰年！\n", i);
		else
			printf("%d--不是闰年！\n", i);
	}


	return 0;
}
*/



//交换两个数的内容
/*
void exchange(int *pi, int *pj)
{
	int tmp = *pi;
	*pi = *pj;
	*pj = tmp;

}

int main()
{
	int i = 0;
	int j = 0;
	scanf("%d %d",&i,&j);
	printf("您输入的数字--%d %d\n",i,j);

	exchange(&i,&j);
	Sleep(1000);
	printf("交换后的数字--%d %d\n", i, j);


	return 0;
}
*/


//实现乘法口诀表
/*
void mul_table(int k)
{
	int i = 0;
	for (i = 1; i <= k; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			if (k < 10)
				printf("%d * %d = %2d ",i,j,i*j);
			else
				printf("%-2d * %-2d = %2d  ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);

	mul_table(i);

	return 0;
}
*/


//公务员打分，去掉最高最低求平均
/*
int Max(int arr[],int sz){
	int max = arr[0];
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int Min(int arr[], int sz){
	int min = arr[0];
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

float Value(int arr[], int sz,int arr_max,int arr_min){
	int i = 0;
	int sum = 0;
	for (i = 0; i < sz; i++)
	{
		sum += arr[i];
	}
	float value = (sum - arr_min - arr_max) / (sz - 2.0);
	return value;
}

int main()
{
	int arr[7] = { 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	float value = 0.0;

	int i = 0;
	for (i = 0; i<7; i++){
		scanf("%d", &arr[i]);
	}

	int arr_max = Max(arr, sz);
	int arr_min = Min(arr, sz);
	float arr_value = Value(arr, sz, arr_max, arr_min);
	printf("%.2lf\n",arr_value);



	return 0;
}
*/

