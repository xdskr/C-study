#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

//�򵥵���Ϸ�汾������10����
#define EASY_VISION 10


//��ӡ�˵�
void Menu();

//ɨ�׺���
void Game();

//�����ʼ��
void Init(char board[ROWS][COLS],int rows,int cols,char sign);

//��ӡ����
void Print_Board(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col, int count);

//�Ų���
void FindMine(char mine[ROWS][COLS], 
			  char show[ROWS][COLS], 
			  int row, 
			  int col);

//ͳ��mine������x y������Χ�м�����
int GetMineCont(char mine[ROWS][COLS], int x, int y);