#include "statement.h"


int main() {
	int index = 0;
	int n = 0;//人数
	STU stu[N] = { 0 };

	load(stu, &n);

	do {
		menu();

		scanf("%d", &index);
		switch (index) {
		case 1:
			//add
			add(stu, &n);
			break;
		case 2:
			//删
			del(stu, &n);
			break;
		case 3:
			//查
			find(stu, n);
			break;
		case 4:
			//改
			edit(stu, n);
			break;
		case 5:
			//排序
			sort(stu, n);
			break;
		case 6:
			//打印
			output(stu, n);
			break;
		case 0:
			//退出
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (index);
	return 0;
}
