#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#define ROW 3
#define COL 3

void Menu();
void Game();
void Print_Table(char arr[ROW][COL], int row, int col);
void Init(char arr[ROW][COL],int row,int col);
void Player_Move(char arr[ROW][COL]);
void Computer_Move(char arr[ROW][COL], int row, int col);
int IsFull(char arr[ROW][COL], int row, int col);
int CheckWin(char board[ROW][COL], int row, int col);