#define _CRT_SECURE_NO_WARNINGS 1
//�����߼�
/*
1.�����ײ������������������
2.��ʼ������
3.���õײ����̵���
3.��ӡ����
4.����������֮꣬����ײ����̲������������ʾ
5.��Ϸ�����жϣ���Ϸ���������ʤ�������ʧ��
6.��չ����ʵ�֣���ǹ��ܡ�չ��һƬ(�ݹ�)��
*/
#include "game.h"

void game() {
	char mineboard[ROWS][COLUMNS];
	char mineshow[ROWS][COLUMNS];
	//��ʼ���ײ�����
	initboard(mineboard, ROWS, COLUMNS, '0');
	//�����������
	initboard(mineshow, ROWS, COLUMNS, '*');
	//printboard(mineboard, ROW, COLUMN);
	//������
	mineset(mineboard, ROW, COLUMN);
	displayboard(mineboard, ROW, COLUMN);
	displayboard(mineshow, ROW, COLUMN);
	//����
	mine_mov(mineboard, mineshow, ROW, COLUMN);
}
enum M {
	_EXIT,
	_START
};
int main() {
	int input = -1;
	//�������������
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("������ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case _START:
			//��ʼ��Ϸ
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case _EXIT:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
