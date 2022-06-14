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
	int judge;//判断对错
	int grade;//总分数
}exam;

//练习模式
void practice();

//测试模式
void test();

void menu(){
	system("cls");
	printf("********************\n");
	printf("**** 1.练习模式 ****\n");
	printf("**** 2.考试模式 ****\n");
	printf("**** 0.退出程序 ****\n");
	printf("********************\n");
}
int main() {
	int select = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入选择>");
		scanf("%d", &select);
		
		switch (select) {
		case 1:
			printf("练习模式\n");
			practice();
			break;
		case 2:
			printf("考试模式\n");
			test();
			break;
		case 0:
			printf("程序已退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			system("sleep");
			break;
		}
	} while (select);
	return 0;
}

//练习模式
void practice() {
	int n = 0;//总共几题
	int cnt = 0;//记录当前第几题
	printf("请输入练习的数量>");
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
		//加减随机
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
			printf("第%d道,剩余%d道\n", ++cnt, n - 1);
			printf("%d %c %d =\n", front, symbol, after);
		}
		else {
			continue;
		}

		
		printf("请输入你的答案>");
		while (scanf("%d", &answer), answer != end) {
			printf("回答错误，请重新输入>");
			getchar();//防止输入字符导致死循环
		}
		printf("回答正确!\n");
		n--;
	}
	printf("本次练习结束!\n");
	system("pause");
}

//测试模式
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
			printf("第%d道,剩余%d道\n", N - n + 1, n - 1);
			printf("%d %c %d =\n", stu[i].front, stu[i].symbol, stu[i].after);
		}
		else {
			continue;
		}
		printf("请输入你的答案>");
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
	printf("本次考试满分为%d,你的成绩>%d\n",N*2 ,sum);
	printf("本次考试错题如下\n");
	for (i = 0; i < N; i++) {
		if (stu[i].judge == 0) {
			printf("%d %c %d =\n", stu[i].front, stu[i].symbol, stu[i].after);
		}
	}
	printf("本次考试结束!\n");
	system("pause");
}