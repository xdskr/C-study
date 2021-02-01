
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


//����Ĵ�������Ҫ�����Ż��ģ�������ǽ�ROW��COL��ֵ��Ϊ10 10
//��ô������ֻ���б�Ϊ10��������Ϊ3
//��Ϊ�����������forѭ����ӡ��Ѿ����й̶����ˣ�" %c | %c | %c \n"
/*
void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);

		//��ӡ�ָ��еķ���
		//��Ϊ���һ�в���Ҫ��ӡ����ָ��еķ���
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

		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
				printf("|");
		}
		printf("\n");
		
		//��ӡ�ָ��еķ���
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

	printf("����ߣ�\n");
	
	while (1)
	{
		printf("������һ�����꣺> ");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x-1][y-1] != ' ')//��Ϊ�����ֵ�����������е�ֵ��һ������������0��ʼ
			{
				printf("���걻ռ�ã����������룺\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}


}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;//ģ3�������0 1 2������

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


/*
ÿ�ε������궼Ҫ�����жϣ��жϺ�Ľ���޷�������4�������
1������Ӯ�� -- '#'
2�����Ӯ�� -- '*'
3��ƽ��  --  'Q'
4������	 --  'C'
*/

//����static�ؼ��֣���ֻ�������.c�ļ���ʹ�ã��������.c�ļ�����Ч��
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
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//ƽ��
	//����ط��ڸ�IsFull���ε�ʱ��Ϊʲôû�ô�д��ROW��COL
	//��Ϊ��������ĵ�����������������ڲ����ⲿ����������(����test.c)��ʱ�򣬴���������row��col
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}

	//��Ϸ����
	//ǰ��û��Ӯ��û��ƽ�֣����Ǽ�����
	return 'C';

}