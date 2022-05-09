#pragma once
//��������
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COLUMN 9

#define ROWS ROW+2
#define COLUMNS COLUMN+2

#define MINE_NUM 10

//�˵�
void menu();

//��ʼ������
void initboard(char mineboard[ROWS][COLUMNS], int row, int column, char ch);

//��ӡ����
void displayboard(char board[ROWS][COLUMNS], int row, int column);

//������
void mineset(char mineboard[ROWS][COLUMNS], int row, int column);

//�ж�ʤ����ʧ��
int iswin(char mineshow[ROWS][COLUMNS], int row, int column);

//����
void mine_mov(char mineboard[ROW][COLUMN], char[ROW][COLUMN], int row, int column);

//��ǹ���
void provide_sign(char mineshow[ROWS][COLUMNS], int row, int column);

//չ��һƬ������һ������(���ǵ���ʱ)����ܻᴥ��չ��һƬ
void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column, int x, int y);