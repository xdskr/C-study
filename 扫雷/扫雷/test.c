#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		Menu();
		printf("请选择：-->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();//扫雷游戏的实现
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}

	} while (input);


	return 0;
}