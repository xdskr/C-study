#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		//打印菜单
		menu();
		printf("请选择：-->");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("您输入的数字不在规定范围内，请重新输入：\n");
			break;
		}
	} while (input);

	return 0;
}