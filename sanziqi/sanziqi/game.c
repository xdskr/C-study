
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i= 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//下面的代码是需要进行优化的：如果我们将ROW、COL的值改为10 10
//那么输出结果只有列变为10，而行仍为3
//因为我们在下面的for循环打印里，已经将行固定死了：" %c | %c | %c \n"
/*
void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);

		//打印分割行的符号
		//因为最后一行不需要打印这个分割行的符号
		if (i < row - 1){
			printf("---|---|---\n");
		}
	}
}
*/

void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++)
	{

		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
				printf("|");
		}
		printf("\n");
		
		//打印分割行的符号
		if (i < row - 1){
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col - 1)
					printf("|");
			}
		}
		printf("\n");


	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{

	int x = 0;
	int y = 0;

	printf("玩家走：\n");
	
	while (1)
	{
		printf("请输入一个坐标：> ");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x-1][y-1] != ' ')//因为数组的值和我们生活中的值不一样，数组中以0开始
			{
				printf("坐标被占用，请重新输入：\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}


}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;//模3最后生成0 1 2的数字

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


/*
每次电脑走完都要进行判断，判断后的结果无非有以下4种情况：
1、电脑赢了 -- '#'
2、玩家赢了 -- '*'
3、平局  --  'Q'
4、继续	 --  'C'
*/

//加了static关键字，就只能在这个.c文件里使用，出了这个.c文件就无效了
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0;  j< col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}

	}
	return 1;
}

int CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	//三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	//三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//平局
	//这个地方在给IsFull传参的时候，为什么没用大写的ROW，COL
	//因为这个函数的调用是在这个函数的内部，外部函数传进来(传进test.c)的时候，传过来的是row，col
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}

	//游戏继续
	//前面没有赢，没有平局，就是继续。
	return 'C';

}