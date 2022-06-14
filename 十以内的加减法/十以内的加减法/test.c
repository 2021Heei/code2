#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 50

typedef struct exam {
	int front;
	int symbol;
	int symbol_num;
	int after;
	int end;
	int answer;
	int judge;//�ж϶Դ�
	int grade;//�ܷ���
}exam;

//��ϰģʽ
void practice();

//����ģʽ
void test();

void menu(){
	system("cls");
	printf("********************\n");
	printf("**** 1.��ϰģʽ ****\n");
	printf("**** 2.����ģʽ ****\n");
	printf("**** 0.�˳����� ****\n");
	printf("********************\n");
}
int main() {
	int select = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("������ѡ��>");
		scanf("%d", &select);
		
		switch (select) {
		case 1:
			printf("��ϰģʽ\n");
			practice();
			break;
		case 2:
			printf("����ģʽ\n");
			test();
			break;
		case 0:
			printf("�������˳�\n");
			break;
		default:
			printf("�����������������\n");
			system("sleep");
			break;
		}
	} while (select);
	return 0;
}

//��ϰģʽ
void practice() {
	int n = 0;//�ܹ�����
	int cnt = 0;//��¼��ǰ�ڼ���
	printf("��������ϰ������>");
	scanf("%d", &n);
	system("cls");

	while (n) {
		int front = 0, after = 0;
		int end = 0;
		char symbol;
		int symbol_num;
		int answer = -1;
		front = rand() % 10;
		after = rand() % 10;
		//�Ӽ����
		symbol_num = rand() % 2;
		if (symbol_num == 0) {
			symbol = '+';
			end = front + after;
		}
		else {
			symbol = '-';
			end = front - after;
		}
		if (end <= 10 && end >= 0) {
			printf("��%d��,ʣ��%d��\n", ++cnt, n - 1);
			printf("%d %c %d =\n", front, symbol, after);
		}
		else {
			continue;
		}

		
		printf("��������Ĵ�>");
		while (scanf("%d", &answer), answer != end) {
			printf("�ش��������������>");
			getchar();//��ֹ�����ַ�������ѭ��
		}
		printf("�ش���ȷ!\n");
		n--;
	}
	printf("������ϰ����!\n");
	system("pause");
}

//����ģʽ
void test() {
	exam stu[N];
	int n = N;
	int i = 0;
	int sum = 0;
	while (n) {
		system("cls");
		stu[i].front = rand() % 10;
		stu[i].after = rand() % 10;
		stu[i].symbol_num = rand() % 2;
		if (stu[i].symbol_num == 0) {
			stu[i].symbol = '+';
			stu[i].end = stu[i].front + stu[i].after;
		}
		else {
			stu[i].symbol = '-';
			stu[i].end = stu[i].front - stu[i].after;
		}
		if (stu[i].end <= 10 && stu[i].end >=0) {
			printf("��%d��,ʣ��%d��\n", N - n + 1, n - 1);
			printf("%d %c %d =\n", stu[i].front, stu[i].symbol, stu[i].after);
		}
		else {
			continue;
		}
		printf("��������Ĵ�>");
		scanf("%d", &stu[i].answer);
		if (stu[i].end == stu[i].answer) {
			stu[i].judge = 1;
			sum += 2;
		}
		else {
			stu[i].judge = 0;
		}
		n--;
		i++;
	}
	printf("���ο�������Ϊ%d,��ĳɼ�>%d\n",N*2 ,sum);
	printf("���ο��Դ�������\n");
	for (i = 0; i < N; i++) {
		if (stu[i].judge == 0) {
			printf("%d %c %d =\n", stu[i].front, stu[i].symbol, stu[i].after);
		}
	}
	printf("���ο��Խ���!\n");
	system("pause");
}