#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>


//练习1：计算1-n的阶乘：n！
/*
int main(){

	int n = 0;
	scanf("%d",&n);
	//
	int i = 0;
	int result = 1;
	for (i = 1; i <= n; i++){
		result *= i;
	}

	printf("%d\n",result);
	//n不要过大，要不然超出int范围运算器容易出错

	return 0;
}
*/

//练习2：计算1！+2！+...+10！
//以下代码有问题，每次进入第二个for循环的时候，result的值不是从1开始，所以应该做处理
//法一：但会导致大量重复的计算，如果已经得到3!，再*4就是4！
/*
int main(){

	int result = 1;
	int sum = 0;
	int i = 0;
	int j = 0;

	for ( i = 1; i <= 10; i++)
	{
		result = 1;//对result初始化
		for ( j = 1; j <= i; j++)
		{
			result *= j;
		}
		sum += result;
	}

	printf("%d\n",sum);

	return 0;
}
*/

//法二：
/*
int main(){

	int result = 1;
	int sum = 0;
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		result *= i;
		sum += result;
	}

	printf("%d\n", sum);

	return 0;
}
*/

//练习3：
//法一：
/*
int main(){
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10 * 4 = 40个字节
	int k = 7;
	//在有序的数组中查找具体的某个数
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//40 / 4 = 10

	for (i = 0; i < sz; i++){
		if (arr[i] == k){
			printf("找到了，下标是:%d\n",i);
			break;
		}
	}
	if (i == sz){
		printf("没找到\n");
	}

	return 0;
}
*/

//法二：
/*
int main(){

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10 * 4 = 40个字节
	int k = 7;
	//在有序的数组中查找具体的某个数
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//40 / 4 = 10

	int left = 0;
	int right = sz - 1;

	while (left <= right){

		int mid = (left + right) / 2; //这个一定是在循环里面的，因为每次新的循环的中间值肯定是通过新的左右坐标获得的。

		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			printf("找到了，下标是：%d\n", mid);
			break;
		}

	}
	if (left > right){
		printf("找不到了\n");
	}


	return 0;
}
*/




/*
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}
//a=1 a=2 a=3 a=4 5 6 7 8 
//b=4 b=7 b=10 b=13 16 19 22
*/

/*
//打印两个数的最大公约数
int compare(int x, int y){
	return x <= y ? x : y;
}

int main(){
	int i = 0;
	int j = 0;
	int result1 = 0;

	scanf("%d %d",&i,&j);

	result1 = compare(i,j);

	if ((i%result1 == 0) &&(j%result1 == 0)){
		printf("%d和%d的最大公约数是：%d\n",i,j,result1);
	}
	else if (((i % 2 == 0) && (j % 2 != 0)) || ((i % 2 != 0) && (j % 2 == 0))){
		printf("%d和%d的最大公约数是：1", i, j);
	}
	else{
		if (result1 % 2 == 0){
			while (!((i % result1 == 0) && (j % result1 == 0)))
			{
				result1 /= 2;
			}
			printf("%d和%d的最大公约数是：%d\n", i, j, result1);
		}
		else if (resu=lt1 % 2 == 0){
			while (!((i % result1 == 0) && (j % result1 == 0)))
			{
				result1 /= 3;
			}
			printf("%d和%d的最大公约数是：%d\n", i, j, result1);
		}

	}

	return 0;
}
*/

/*
//输出乘法口诀表
int main()
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= 9;i++)
	{
		for (j = 1; j <= i;j++)
		{
			printf("%d * %d = %d ",j,i,j*i);
		}
		printf("\n");
	}

	return 0;
}
*/





/*
 //写3个数，按从大到小输出
int compare_2(int x, int y)
{
	return x >= y ? x : y;
}

void compare_3(int x,int y,int z)
{
	if ((x >= y) && (x >= z))
	{
		int result1 = compare_2(y,z);
		if (result1 == y)
			printf("这三个数按从大到小是：%d %d %d\n", x, y, z);
		else
			printf("这三个数按从大到小是：%d %d %d\n", x, z, y);
	}

	else if ((y >= x) && (y >= z))
	{
		int result2 = compare_2(x, z);
		if (result2 == x)
			printf("这三个数按从大到小是：%d %d %d\n", y, x, z);
		else
			printf("这三个数按从大到小是：%d %d %d\n", y, z, x);
	}

	else if ((z >= x) && (z >= y))
	{
		int result3 = compare_2(x, y);
		if (result3 == x)
			printf("这三个数按从大到小是：%d %d %d\n", z, x, y);
		else
			printf("这三个数按从大到小是：%d %d %d\n", z, y, x);
	}
}

int main()
{
	int m = 0;
	int n = 0;
	int k = 0;

	scanf("%d %d %d",&m,&n,&k);

	compare_3(m, n, k);


	return 0;
}
*/


//接收固定范围内的字符
/*
int main(){
	while ((ch = getchar()) != EOF){
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}

	return 0;
}
*/





