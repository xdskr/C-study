#include "game.h"

//��ӡ�˵�
void Menu()
{
	printf("***************************************\n");
	printf("***********     1��play     ***********\n");
	printf("***********     0��exit     ***********\n");
	printf("***************************************\n");
}

//ɨ�׺���
void Game()
{
	//�������̶�Ӧ������
	char mine[ROWS][COLS];//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵���Ϣ

	//�����ʼ��
	Init(mine,ROWS,COLS,'0');//�ѳ�ʼ�������ݴ���ȥ�����Լ��ٺ�������д
	Init(show, ROWS, COLS,'*');

	//��ӡ����
	//Print_Board(mine, ROW, COL);
	Print_Board(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL, EASY_VISION);
	//Print_Board(mine, ROW, COL);

	//�Ų���
	FindMine(mine,show,ROW,COL);
	

}

//�����ʼ��
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

//��ӡ����
void Print_Board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------------ɨ����Ϸ-------------------\n");
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
	printf("-----------------ɨ����Ϸ-------------------\n");
	printf("\n");
}

//������
void SetMine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;//ģrow(9)����0-8�����֣�Ȼ��+1������1-9������
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//����
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int win = 0;//�������ѭ���Ľ���
	while (win < row * col - EASY_VISION)
	{
		printf("������Ҫ�Ų�����꣺>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		//1��������ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//2���������ǲ����ף�����
			if (mine[x][y] == '1')
			{
				printf("���ź�������ը���ˣ�\n");
				Print_Board(mine, row, col);
				break;
			}
			//2���������ǲ����ף������ף�ͳ����Χ�׵ĸ���
			else
			{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count + '0';//��ŵ��������ַ�
				Print_Board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}
	if (win == row * col - EASY_VISION)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		Print_Board(mine, ROW, COL);
	}
	
}

//ͳ��mine������x y������Χ�м�����
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