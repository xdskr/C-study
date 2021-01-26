#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

//猜数字游戏：1、电脑应该生成一个随机数（可以指定范围:1-100）2、猜数字，给反馈，直到猜对为止
void menu()
{
	printf("*************************\n");
	printf("********1、play *********\n");
	printf("********0、exit *********\n");
	printf("*************************\n");
}


//RAND_MAX 0x7fff
//所以会生成一个0-32767之间的数
//运行两次，每次随机生成5个，会发现这两次的这5个数是一样的，伪随机（不够那么随机）！！
//

void game()
{
	//1、生成随机数（1-100）
	//只要srand里面的值发生变化，生成的随机数就会变化，所以我们要在里面放一个随机值。
	//电脑上的时间是在发生变化的。
	//时间戳，一个时间戳可以转换为一个时间，一个时间也对应一个时间戳
	//时间戳指的是当前时间和计算机的起始时间之间的差值，单位是秒
	//计算机的起始时间：1970年1月1日 08.00.00
	//time()函数，返回的就是一个时间戳
	//time函数返回的类型是time_t，是自己定义的一个类型，本质上是一个整型
	//这样生成的随机数相邻太近
	//把这段函数放在main里面
	//srand((unsigned int)time(NULL));//time里面是一个指针，我们不想用，就用NULL，time返回的值，本质上是一个整型，直接转为无符号型int


	//%100 得到的余数不会超过100，即1-99
	//我们在此基础上 +1 就会生成1-100的数
	int ret = rand() % 100 + 1;//用来生成伪随机数，返回一个整型，生成一个0-RAND_MAX的随机数


	//2、猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>\n");
		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了。\n");
		}
		else if (guess < ret)
		{
			printf("猜小了。\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}


}
int main()
{
	int input = 0;
	//整个工程设置一次起点
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择(1/0)：> \n");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	

	return 0;
}

*/