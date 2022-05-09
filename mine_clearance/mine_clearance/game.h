#pragma once
//函数声明
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COLUMN 9

#define ROWS ROW+2
#define COLUMNS COLUMN+2

#define MINE_NUM 10

//菜单
void menu();

//初始化棋盘
void initboard(char mineboard[ROWS][COLUMNS], int row, int column, char ch);

//打印棋盘
void displayboard(char board[ROWS][COLUMNS], int row, int column);

//安放雷
void mineset(char mineboard[ROWS][COLUMNS], int row, int column);

//判断胜利或失败
int iswin(char mineshow[ROWS][COLUMNS], int row, int column);

//排雷
void mine_mov(char mineboard[ROW][COLUMN], char[ROW][COLUMN], int row, int column);

//标记功能
void provide_sign(char mineshow[ROWS][COLUMNS], int row, int column);

//展开一片，输入一个坐标(不是地雷时)后可能会触发展开一片
void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column, int x, int y);