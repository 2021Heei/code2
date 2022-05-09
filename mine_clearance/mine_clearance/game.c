#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include "game.h"

//�˵�
void menu() {
	printf("***********************\n");
	printf("*** 1.start  0.exit ***\n");
	printf("***********************\n");
}

//��ʼ������
void initboard(char mineboard[ROWS][COLUMNS], int row, int column, char ch) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < column; j++) {
			mineboard[i][j] = ch;
		}
	}
}

//��ӡ����
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

//������
//�ַ�0Ϊ����
//�ַ�1Ϊ��
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

//��������(x,y)��Χ�ĵ�������
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

//�ж��Ƿ�ʤ��
//����1Ϊʤ����0Ϊ����
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

//��ǹ���
//��#�ű�ǵ�������
//��?���δ֪
void provide_sign(char mineshow[ROWS][COLUMNS], int row, int column) {
	int x, y;
	char sign_kind;
	int input = -1;
	do {
		printf("������Ҫ��ǵ�λ�õ�����>");
		scanf("%d%d", &x, &y);
		//��ȡ�ַ�
		getchar();//��ȡ�ַ����Ż�
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= column) {
				//�����Ѿ���ʾ���޵������겻�����
				if (mineshow[x][y] == '*' ||
					mineshow[x][y] == '#' ||
					mineshow[x][y] == '?') {
					//���������
					do  {
						printf("��������Ҫ��ǵ�����('#'�ǵ��ף�'?'��δ֪��'*'�ǻָ�)>");
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
					printf("����(%d,%d)���%c�ɹ�!\n", x, y, sign_kind);
					displayboard(mineshow, row, column);
				}
				else {
					printf("����(%d,%d)���ܱ����!\n", x, y);
				}
		}
		else {
			printf("����������Ч������������!\n");
		}
		printf("�Ƿ�������λ��?(1Ϊ��,0Ϊ��)>");
		scanf("%d", &input);
	}while (input);
	
}

//ѭ����
void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column, int x, int y) {
	int x_off = 0;
	int y_off = 0;
	int count_mine = 0;
	//�ж�������Ƿ�����Ч��Χ
	if (x >= 1 && x <= row && y >= 1 && y <= column) {
		for (x_off = -1; x_off <= 1; x_off++) {
			for (y_off = -1; y_off <= 1; y_off++) {
				//�Ϸ���Χ
				if (x + x_off >= 1 && x + x_off <= row && y + y_off >= 1 && y + y_off <= column) {
					//�ж��Ƿ�����
					if (mineboard[x + x_off][y + y_off] == '0') {
						//�ж���Χ�Ƿ�����
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

//����
void mine_mov(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column) {
	int x, y;
	int blank = ROW * COLUMN - MINE_NUM;

	while (1) {
		int count_mine = 0;
		printf("����������>");
		scanf("%d%d", &x, &y);
		//�ж��Ƿ�Ϸ�(��Ч��Χ)
		if (x >= 1 && x <= row && y >= 1 && y <= column) {
			//�ж��Ƿ�̽���
			if (mineshow[x][y] == '*') {
				//�ж��Ƿ�����
				if (mineboard[x][y] == '0') {
					//����(x,y)���ǵ���ʱ�����ܴ���չ��һƬ
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
					printf("��ƨ��!\n");
					displayboard(mineboard, row, column);
					break;
				}
			}
			else {
				printf("����(%d,%d)�Ѿ���̽���,����������!\n", x, y);

			}
		}
		else {
			printf("����������Ч������������!\n");
		}
		//�ж��Ƿ�ʤ��
		if (iswin(mineshow, row, column)) {
			printf("ʤ����!\n");
			displayboard(mineboard, row, column);
			break;
		}

		int input;
		printf("�Ƿ���б��?(1Ϊ�ǣ�0Ϊ��)>");
		scanf("%d", &input);
		if (input) {
			provide_sign(mineshow, row, column);
		}
	}
}

////չ��һƬ������һ������(���ǵ���ʱ)����ܻᴥ��չ��һƬ
////����һ������(x,y),��Χ�˸�λ�ö���Ϊ����ʱ���ÿո�' '����
//void unfold(char mineboard[ROWS][COLUMNS], char mineshow[ROWS][COLUMNS], int row, int column,int x, int y) {
//	//������������Ч��Χ
//	if (x >= 0 && x <= row && y >= 0 && y <= column) {
//		//�����ǿո�˵������������Χ�����Ѿ���������չ��һƬ��
//		if (mineshow[x][y] == ' ' ||
//			(mineshow[x][y] >= '0' && mineshow[x][y] <= '9')) {
//			return;
//		}
//		else {
//			//����(x,y)��Χ�����ǵ���
//			if ((mineboard[x - 1][y] == '0') &&
//				(mineboard[x - 1][y - 1] == '0') &&
//				(mineboard[x][y - 1] == '0') &&
//				(mineboard[x + 1][y - 1] == '0') &&
//				(mineboard[x + 1][y] == '0') &&
//				(mineboard[x + 1][y + 1] == '0') &&
//				(mineboard[x][y + 1] == '0') &&
//				(mineboard[x - 1][y + 1] == '0')) {
//				
//				//����(x,y)��Ϊ�ո����
//				mineshow[x][y] = ' ';
//				printf("(%d,%d)\n", x, y);
//
//				//�ڴ˵ݹ� - ֻ������ �ض������ſ�ʼ
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
//			//������Χ��1��λ���ǵ��׾ͽ���չ���������м��ŵ���
//			else {
//				mineshow[x][y] = caculate_mine(mineboard, x, y) + '0';
//				return;
//			}
//		}
//	}
//	//������Ч����ֱ�ӷ���
//	else {
//		return;
//	}
//}