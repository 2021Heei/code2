//测试部分
//静态通讯录
#include "contact.h"

enum option {
	EXIT,
	ADD,
	DELETE,
	CHECK,
	MODIFY,
	DISPLAY,
	SORT,
};
int main() {
	Contact Peo = { 0 };
	int input = 0;

	Init(&Peo);

	do {
		menu();
		printf("请输入你的选择>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			//add
			AddContact(&Peo);
			break;
		case DELETE:
			//删
			DelContact(&Peo);
			break;
		case CHECK:
			//查
			CheckContact(&Peo);
			break;
		case MODIFY:
			//改
			ModifyContact(&Peo);
			break;
		case DISPLAY:
			//打印
			DisplayContact(&Peo);
			break;
		case SORT:
			//排序
			sort(&Peo);
			break;
		case EXIT:
			//退出
			printf("程序退出!\n");
			break;
		default:
			//其他
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}