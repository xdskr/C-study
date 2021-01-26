#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//求10个整数中的最大值
/*
int main(){
	int arr[10] = {123, 15, 7, 2, 4, 0, 89, 11, 66, 100 };
	int sz = sizeof(arr) / sizeof(arr[0]);//10


	int i = 0;
	int max = arr[0];

	for (i = 0; i < sz; i++){

		if (max < arr[i])
			max = arr[i];

	}
	printf("%d\n", max);


	return 0;
}
*/


/*
//打印1000-2000内的闰年
int main(){
	int i = 0;

	for (i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0){
			printf("%d 是世纪闰年\n", i);
		}

		if ((i % 4 == 0) && (i % 100) != 0){
			printf("%d 是普通闰年\n",i);
		}
		
	}

	return 0;
}
*/



/*
//数1-100中所有9出现的个数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i < 90){
			if (i % 10 == 9){
				count ++;
				printf("%d\n",i);
			}
		}
		if (i >= 90){
			if(i / 10 == 9){
				count++;
				printf("%d\n", i);
			}
		}

	}
	count++;//99单独加一次
	printf("1-100内，9出现的次数为：%d\n",count);
	return 0;
}
*/


/*
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0)
			sum -= (1.0 / i);//1/i算出来是整型，始终为0，这个地方要注意
		else
			sum += (1.0 / i);
	}
	printf("以上分式的和为：%lf\n",sum);

	return 0;
}
*/


/*
//写一个代码：打印100-200之间的素数
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int k = 1;//初始化标志位的值，为初始状态1,是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0){
				k = 0;
				break;//到这里说明找到了一个j可以让i整除，所以退出就可以，不需要打印合数
			}
			
		} 

		if (k == 1){
			printf("%d 是素数!\n", i);
		}

	}


	return 0;
}
*/
