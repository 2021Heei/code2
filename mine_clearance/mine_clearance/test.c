#define _CRT_SECURE_NO_WARNINGS 1
//程序逻辑
/*
1.创建底层棋盘棋盘与玩家棋盘
2.初始化棋盘
3.设置底层棋盘地雷
3.打印棋盘
4.玩家输入坐标，之后检查底层棋盘并在玩家棋盘显示
5.游戏结束判断：游戏继续、玩家胜利、玩家失败
6.拓展功能实现：标记功能、展开一片(递归)、
*/
#include "game.h"

void game() {
	char mineboard[ROWS][COLUMNS];
	char mineshow[ROWS][COLUMNS];
	//初始化底层棋盘
	initboard(mineboard, ROWS, COLUMNS, '0');
	//玩家所见棋盘
	initboard(mineshow, ROWS, COLUMNS, '*');
	//printboard(mineboard, ROW, COLUMN);
	//安放雷
	mineset(mineboard, ROW, COLUMN);
	displayboard(mineboard, ROW, COLUMN);
	displayboard(mineshow, ROW, COLUMN);
	//排雷
	mine_mov(mineboard, mineshow, ROW, COLUMN);
}
enum M {
	_EXIT,
	_START
};
int main() {
	int input = -1;
	//设置随机数种子
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请输入选项>");
		scanf("%d", &input);
		switch (input) {
		case _START:
			//开始游戏
			printf("开始游戏\n");
			game();
			break;
		case _EXIT:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
