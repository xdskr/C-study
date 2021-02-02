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

//简单的游戏版本，设置10个雷
#define EASY_VISION 10


//打印菜单
void Menu();

//扫雷函数
void Game();

//数组初始化
void Init(char board[ROWS][COLS],int rows,int cols,char sign);

//打印棋盘
void Print_Board(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col, int count);

//排查雷
void FindMine(char mine[ROWS][COLS], 
			  char show[ROWS][COLS], 
			  int row, 
			  int col);

//统计mine数组中x y坐标周围有几个雷
int GetMineCont(char mine[ROWS][COLS], int x, int y);