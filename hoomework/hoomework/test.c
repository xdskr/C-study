#include "test.h"

//打印菜单
void Menu()
{
	printf("***************************************\n");
	printf("***********     1、play     ***********\n");
	printf("***********     0、exit     ***********\n");
	printf("***************************************\n");
}

//打印棋盘
void Print_Table(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//原始方式：灵活度不高
	/*
	//打印行
	for (i = 0; i < row; i++)
	{
		//打印数据
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);

		//打印分割行的符号
		//因为最后一行不需要打印这个分割行的符号
		if (i < row - 1){
			printf("---|---|---\n");
		}
	}
	*/

	for (i = 0; i < row; i++)
	{
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//打印分割行的符号
		if (i < row - 1){
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

	}

}

//数组初始化
void Init(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0; 

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}

}

//玩家走棋
void Player_Move(char arr[ROW][COL])
{
	int m = 0;
	int n = 0;
	while (1)
	{
		printf("请玩家输入坐标，进行走棋：> \n");
		scanf("%d %d", &m, &n);

		if (m >= 1 && m <= 3 && n >= 1 && n <= 3)
		{
			if (arr[m - 1][n - 1] == ' ')
			{
				arr[m - 1][n - 1] = '*';
				break;
			}
			else{
				printf("您输入的坐标被占用，请重新选择坐标：>\n");
			}
		}
		else{
			printf("您输入的坐标无效，请重新选择坐标：>\n");
		}

	}
}

//电脑走
void Computer_Move(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		int m = rand() % row;
		int n = rand() % col;

		if (arr[m][n] == ' '){
			arr[m][n] = '#';
			printf("电脑走：%d %d\n", m + 1, n + 1);
			break;
		}
		
		
	}


}


//判断是否棋满
int IsFull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j< col; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}

	}
	return 1;
}


//判断输赢
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

//游戏程序
void Game()
{
	//定义一个数组用来存储数据
	char arr[ROW][COL];
	int result = 0;

	//数组初始化
	Init(arr, ROW, COL);

	//打印棋盘
	Print_Table(arr, ROW, COL);

	while (1)
	{
		//进入游戏-玩家走
		Player_Move(arr);

		//判断是否棋满
		result = CheckWin(arr, ROW, COL);
		if (result != 'C'){
			break;
		}

		Print_Table(arr, ROW, COL);

		//玩家走玩-电脑走
		Computer_Move(arr, ROW, COL);

		//判断是否棋满
		result = CheckWin(arr, ROW, COL);
		if (result != 'C'){
			break;
		}

		Print_Table(arr, ROW, COL);

	}

	//判断输赢
	if (result == '*')
		printf("恭喜你赢了！\n");
	else if (result == '#')
		printf("对不起，你输了，电脑赢了！\n");
	else if (result == 'Q')
		printf("平局，让我们继续战斗！\n");
	Print_Table(arr, ROW, COL);


}