//���Բ���
//��̬ͨѶ¼
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
		printf("���������ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			//add
			AddContact(&Peo);
			break;
		case DELETE:
			//ɾ
			DelContact(&Peo);
			break;
		case CHECK:
			//��
			CheckContact(&Peo);
			break;
		case MODIFY:
			//��
			ModifyContact(&Peo);
			break;
		case DISPLAY:
			//��ӡ
			DisplayContact(&Peo);
			break;
		case SORT:
			//����
			sort(&Peo);
			break;
		case EXIT:
			//�˳�
			printf("�����˳�!\n");
			break;
		default:
			//����
			printf("�����������������!\n");
			break;
		}
	} while (input);
	return 0;
}