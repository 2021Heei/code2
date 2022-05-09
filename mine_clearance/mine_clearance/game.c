#define _CRT_SECURE_NO_WARNINGS 1
//函数定义
#include "game.h"

//菜单
void menu() {
	printf("***********************\n");
	printf("*** 1.start  0.exit ***\n");
	printf("***********************\n");
}

//初始化棋盘
void initboard(char mineboard[ROWS][COLUMNS], int row, int column, char ch) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < column; j++) {
			mineboard[i][j] = ch;
		}
	}
}

//打印棋盘
void displayboard(char board[ROWS][COLUMNS], int row, int column) {
	printf("------------------\n");
	int i = 0;
	for (i = 0; i <= row; i++) {
		printf("%2d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++) {
		int j = 0;
		printf("%2d ", i);
		for (j = 1; j <= column; j++) {
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------------\n");
}

//安放雷
//字符0为非雷
//字符1为雷
void mineset(char mineboard[ROWS][COLUMNS], int row, int column) {
	int x;
	int y;
	int num = MINE_NUM;
	while (num) {
		x = rand() % row + 1;
		y = rand() % column + 1;
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9 &&
			mineboard[x][y] == '0') {
			mineboard[x][y] = '1';
			num--;
		}
	}
}

//计算坐标(x,y)周围的地雷数量
int caculate_mine(char mineboard[ROWS][COLUMNS], int x, int y) {
	return (mineboard[x - 1][y] +
		mineboard[x - 1][y - 1] +
		mineboard[x][y - 1] +
		mineboard[x + 1][y - 1] +
		mineboard[x + 1][y] +
		mineboard[x + 1][y + 1] +
		mineboard[x][y + 1] +
		mineboard[x - 1][y + 1]
		- 8 * '0');
}

//判断是否胜利
//返回1为胜利，0为继续
int iswin(char mineshow[ROWS][COLUMNS], int row, int column) {
	int blank = 0;
	int i = 0;
	for (i = 1; i <= row; i++) {
		int j = 0;
		for (j = 1; j <= column; j++) {
			if (mineshow[i][j] == '*' ||
				mineshow[i][j] == '#' ||
				mineshow[i][j] == '?') {
				blank++;
			}
		}
	}
	/*if (blank == MINE_NUM) {
		return 1;
	}
	else {
		return 0;
	}*/
	return (blank == MINE_NUM);
}

//标记功能
//用#号标记地雷所在
//用?标记未知
void provide_sign(char mineshow[ROWS][COLUMNS], int row, int column) {
	int x, y;
	char sign_kind;
	int input = -1;
	do {
		printf("请输入要标记的位置的坐标>");
		scanf("%d%d", &x, &y);
		//读取字符
		getchar();//读取字符需优化
		//判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= column) {
				//保护已经显示的无地雷坐标不被标记
				if (mineshow[x][y] == '*' ||
					mineshow[x][y] == '#' ||
					mineshow[x][y] == '?') {
					//输入标记类别
					do  {
						printf("请输入需要标记的种类('#'是地雷，'?'是未知，'*'是恢复)>");
						scanf("%c", &sign_kind);
						if ((sign_kind == '#' || sign_kind == '?' || sign_kind == '*')) {
							break;
						}
						else {
							char ch = '0';
							while ((ch = getchar()) != '\n') {
								;
							}
							printf("sign_kind error!please enter again!\n");
						}
					} while (1);
					mineshow[x][y] = sign_kind;
					printf("坐标(%d,%d)标记%c成功!\n", x, y, sign_kind);
					displayboard(mineshow, row, column);
				}
				else {
					printf("坐标(%d,%d)不能被标记!\n", x, y);
				}
		}
		else {
			printf("输入坐标无效，请重新输入!\n");
		}
		printf("是否继续标记位置?(1为是,0为否)>");
		scanf("%d", &input);
	}while (input);
	
}

//循环版
void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column, int x, int y) {
	int x_off = 0;
	int y_off = 0;
	int count_mine = 0;
	//判断坐标的是否在有效范围
	if (x >= 1 && x <= row && y >= 1 && y <= column) {
		for (x_off = -1; x_off <= 1; x_off++) {
			for (y_off = -1; y_off <= 1; y_off++) {
				//合法范围
				if (x + x_off >= 1 && x + x_off <= row && y + y_off >= 1 && y + y_off <= column) {
					//判断是否是雷
					if (mineboard[x + x_off][y + y_off] == '0') {
						//判断周围是否有雷
						count_mine = caculate_mine(mineboard, x + x_off, y + y_off);
						if (count_mine == 0) {
							if (mineshow[x + x_off][y + y_off] == '*') {

								//printf("mineshow[%d][%d]==%c, (%d,%d)\n", x + x_off, y + y_off, mineshow[x + x_off][y + y_off], x + x_off, y + y_off);
								mineshow[x + x_off][y + y_off] = ' ';
								unfold(mineboard, mineshow, row, column, x + x_off, y + y_off);
							}
						}
						else {
							mineshow[x + x_off][y + y_off] = count_mine + '0';
							//printf("mineshow[%d][%d]==%c, (%d,%d)\n", x + x_off, y + y_off, mineshow[x + x_off][y + y_off], x + x_off, y + y_off);
						}
					}
				}
				
			}
		}
	}
}

//排雷
void mine_mov(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column) {
	int x, y;
	int blank = ROW * COLUMN - MINE_NUM;

	while (1) {
		int count_mine = 0;
		printf("请输入坐标>");
		scanf("%d%d", &x, &y);
		//判断是否合法(有效范围)
		if (x >= 1 && x <= row && y >= 1 && y <= column) {
			//判断是否被探查过
			if (mineshow[x][y] == '*') {
				//判断是否是雷
				if (mineboard[x][y] == '0') {
					//坐标(x,y)不是地雷时，可能触发展开一片
					count_mine = caculate_mine(mineboard, x, y);
					if (count_mine == 0) {
						mineshow[x][y] = ' ';
						unfold(mineboard, mineshow, row, column, x, y);
					}
					else {
						mineshow[x][y] = count_mine + '0';
					}
					displayboard(mineshow, row, column);
				}
				else {
					printf("嗝屁了!\n");
					displayboard(mineboard, row, column);
					break;
				}
			}
			else {
				printf("坐标(%d,%d)已经被探查过,请重新输入!\n", x, y);

			}
		}
		else {
			printf("输入坐标无效，请重新输入!\n");
		}
		//判断是否胜利
		if (iswin(mineshow, row, column)) {
			printf("胜利了!\n");
			displayboard(mineboard, row, column);
			break;
		}

		int input;
		printf("是否进行标记?(1为是，0为否)>");
		scanf("%d", &input);
		if (input) {
			provide_sign(mineshow, row, column);
		}
	}
}

////展开一片，输入一个坐标(不是地雷时)后可能会触发展开一片
////对于一个坐标(x,y),周围八个位置都不为地雷时便用空格' '代替
//void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column,int x, int y) {
//	//限制坐标在有效范围
//	if (x >= 0 && x <= row && y >= 0 && y <= column) {
//		//坐标是空格说明该坐标与周围坐标已经触发过“展开一片”
//		if (mineshow[x][y] == ' ' ||
//			(mineshow[x][y] >= '0' && mineshow[x][y] <= '9')) {
//			return;
//		}
//		else {
//			//坐标(x,y)周围均不是地雷
//			if ((mineboard[x - 1][y] == '0') &&
//				(mineboard[x - 1][y - 1] == '0') &&
//				(mineboard[x][y - 1] == '0') &&
//				(mineboard[x + 1][y - 1] == '0') &&
//				(mineboard[x + 1][y] == '0') &&
//				(mineboard[x + 1][y + 1] == '0') &&
//				(mineboard[x][y + 1] == '0') &&
//				(mineboard[x - 1][y + 1] == '0')) {
//				
//				//坐标(x,y)赋为空格符号
//				mineshow[x][y] = ' ';
//				printf("(%d,%d)\n", x, y);
//
//				//在此递归 - 只有满足 特定条件才开始
//				if (mineshow[x - 1][y] == '*' ||
//					mineshow[x - 1][y] == '#' ||
//					mineshow[x - 1][y] == '?') {
//					unfold(mineboard, mineshow, row, column, x - 1, y);
//				}
//				if (mineshow[x - 1][y - 1] == '*' ||
//					mineshow[x - 1][y - 1] == '#' ||
//					mineshow[x - 1][y - 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x - 1, y - 1);
//				}
//				if (mineshow[x][y - 1] == '*' ||
//					mineshow[x][y - 1] == '#' ||
//					mineshow[x][y - 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x, y - 1);
//				}
//				if (mineshow[x + 1][y - 1] == '*' ||
//					mineshow[x + 1][y - 1] == '#' ||
//					mineshow[x + 1][y - 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x + 1, y - 1);
//				}
//				if (mineshow[x + 1][y] == '*' ||
//					mineshow[x + 1][y] == '#' ||
//					mineshow[x + 1][y] == '?') {
//					unfold(mineboard, mineshow, row, column, x + 1, y);
//				}
//				if (mineshow[x + 1][y + 1] == '*' ||
//					mineshow[x + 1][y + 1] == '#' ||
//					mineshow[x + 1][y + 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x + 1, y + 1);
//				}
//				if (mineshow[x][y + 1] == '*' ||
//					mineshow[x][y + 1] == '#' ||
//					mineshow[x][y + 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x, y + 1);
//				}
//				if (mineshow[x - 1][y + 1] == '*' ||
//					mineshow[x - 1][y + 1] == '#' ||
//					mineshow[x - 1][y + 1] == '?') {
//					unfold(mineboard, mineshow, row, column, x - 1, y + 1);
//				}
//			}
//			//坐标周围有1个位置是地雷就结束展开并计算有几颗地雷
//			else {
//				mineshow[x][y] = caculate_mine(mineboard, x, y) + '0';
//				return;
//			}
//		}
//	}
//	//不是有效坐标直接返回
//	else {
//		return;
//	}
//}