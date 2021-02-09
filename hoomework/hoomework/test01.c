#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//猜数字游戏
/*
void menu()
{
	printf("***************************************\n");
	printf("***********     1、play     ***********\n");
	printf("***********     0、exit     ***********\n");
	printf("***************************************\n");
}

void game()
{
	printf("欢迎来到猜数字游戏哦\n");

	int guess = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("请输入数字：> ");
		scanf("%d", &guess);

		if (guess > ret)
			printf("您猜的数字偏大，请重新思考：\n");
		else if (guess < ret)
			printf("您猜的数字较小，请重新思考：\n");
		else{
			printf("恭喜您！！猜对啦！！\n");
			break;
		}
	}

}


int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;

	do
	{
		menu();
		printf("请选择（1/0）来决定是否进入游戏：\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("您已退出游戏！\n");
			break;
		default:
			printf("您输入的数字不在规定范围内，请重新输入：> \n");
			break;
		}

	} while (input);

	return 0;
}
*/