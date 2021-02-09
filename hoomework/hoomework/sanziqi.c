#include "test.h"


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		Menu();
		printf("请选择（1/0）来决定是否进入游戏：");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			Game();
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