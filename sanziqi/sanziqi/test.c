#include "game.h"

void menu()
{
	printf("***************************************\n");
	printf("***********     1、play     ***********\n");
	printf("***********     0、exit     ***********\n");
	printf("***************************************\n");
}

void game()
{
	char ret = 0;

	//数据的存储是一个二维数组
	//char board[3][3];//这里如果写成33，将来再需要扩展的时候，所有涉及33的地方都要进行修改，不是很完美.
	char board[ROW][COL];
	//我们在头文件里定义一个全局变量

	//初始化为空格---数组初始化
	InitBoard(board, ROW, COL);

	//打印棋盘--显示棋盘
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);

		//电脑下棋
		ComputerMove(board, ROW, COL);//随机下棋
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("恭喜你赢了！\n");
	else if (ret == '#')
		printf("对不起，你输了，电脑赢了！\n");
	else if (ret == 'Q')
		printf("平局，让我们继续战斗！\n");
	DisplayBoard(board, ROW, COL);


}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请选择：-->");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
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