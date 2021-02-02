#include "game.h"

//打印菜单
void Menu()
{
	printf("***************************************\n");
	printf("***********     1、play     ***********\n");
	printf("***********     0、exit     ***********\n");
	printf("***************************************\n");
}

//扫雷函数
void Game()
{
	//创建棋盘对应的数组
	char mine[ROWS][COLS];//存放布置好的雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息

	//数组初始化
	Init(mine,ROWS,COLS,'0');//把初始化的内容传进去，可以减少函数的书写
	Init(show, ROWS, COLS,'*');

	//打印棋盘
	//Print_Board(mine, ROW, COL);
	Print_Board(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL, EASY_VISION);
	//Print_Board(mine, ROW, COL);

	//排查雷
	FindMine(mine,show,ROW,COL);
	

}

//数组初始化
void Init(char board[ROWS][COLS], int rows, int cols, char sign)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = sign;
		}
	}
}

//打印棋盘
void Print_Board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------------扫雷游戏-------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------扫雷游戏-------------------\n");
	printf("\n");
}

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;//模row(9)产生0-8的数字，然后+1，生成1-9的数字
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//排雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int win = 0;//用来完成循环的结束
	while (win < row * col - EASY_VISION)
	{
		printf("请输入要排查的坐标：>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		//1、该坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//2、该坐标是不是雷？是雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，您被炸死了！\n");
				Print_Board(mine, row, col);
				break;
			}
			//2、该坐标是不是雷？不是雷，统计周围雷的个数
			else
			{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count + '0';//存放的是数字字符
				Print_Board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}
	if (win == row * col - EASY_VISION)
	{
		printf("恭喜你，排雷成功！\n");
		Print_Board(mine, ROW, COL);
	}
	
}

//统计mine数组中x y坐标周围有几个雷
//'1' - '0' = 1
//'0' - '0' = 0
int GetMineCont(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y] +
		mine[x-1][y-1] +
		mine[x][y-1] +
		mine[x+1][y-1] +
		mine[x+1][y] +
		mine[x+1][y+1] +
		mine[x][y+1] +
		mine[x-1][y-1] - 8 * '0';
}