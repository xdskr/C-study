#include "test.h"

//��ӡ�˵�
void Menu()
{
	printf("***************************************\n");
	printf("***********     1��play     ***********\n");
	printf("***********     0��exit     ***********\n");
	printf("***************************************\n");
}

//��ӡ����
void Print_Table(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//ԭʼ��ʽ�����Ȳ���
	/*
	//��ӡ��
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);

		//��ӡ�ָ��еķ���
		//��Ϊ���һ�в���Ҫ��ӡ����ָ��еķ���
		if (i < row - 1){
			printf("---|---|---\n");
		}
	}
	*/

	for (i = 0; i < row; i++)
	{
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//��ӡ�ָ��еķ���
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

//�����ʼ��
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

//�������
void Player_Move(char arr[ROW][COL])
{
	int m = 0;
	int n = 0;
	while (1)
	{
		printf("������������꣬�������壺> \n");
		scanf("%d %d", &m, &n);

		if (m >= 1 && m <= 3 && n >= 1 && n <= 3)
		{
			if (arr[m - 1][n - 1] == ' ')
			{
				arr[m - 1][n - 1] = '*';
				break;
			}
			else{
				printf("����������걻ռ�ã�������ѡ�����꣺>\n");
			}
		}
		else{
			printf("�������������Ч��������ѡ�����꣺>\n");
		}

	}
}

//������
void Computer_Move(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		int m = rand() % row;
		int n = rand() % col;

		if (arr[m][n] == ' '){
			arr[m][n] = '#';
			printf("�����ߣ�%d %d\n", m + 1, n + 1);
			break;
		}
		
		
	}


}


//�ж��Ƿ�����
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


//�ж���Ӯ
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

//��Ϸ����
void Game()
{
	//����һ�����������洢����
	char arr[ROW][COL];
	int result = 0;

	//�����ʼ��
	Init(arr, ROW, COL);

	//��ӡ����
	Print_Table(arr, ROW, COL);

	while (1)
	{
		//������Ϸ-�����
		Player_Move(arr);

		//�ж��Ƿ�����
		result = CheckWin(arr, ROW, COL);
		if (result != 'C'){
			break;
		}

		Print_Table(arr, ROW, COL);

		//�������-������
		Computer_Move(arr, ROW, COL);

		//�ж��Ƿ�����
		result = CheckWin(arr, ROW, COL);
		if (result != 'C'){
			break;
		}

		Print_Table(arr, ROW, COL);

	}

	//�ж���Ӯ
	if (result == '*')
		printf("��ϲ��Ӯ�ˣ�\n");
	else if (result == '#')
		printf("�Բ��������ˣ�����Ӯ�ˣ�\n");
	else if (result == 'Q')
		printf("ƽ�֣������Ǽ���ս����\n");
	Print_Table(arr, ROW, COL);


}