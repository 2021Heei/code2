#include "statement.h"


int main() {
	int index = 0;
	int n = 0;//����
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
			//ɾ
			del(stu, &n);
			break;
		case 3:
			//��
			find(stu, n);
			break;
		case 4:
			//��
			edit(stu, n);
			break;
		case 5:
			//����
			sort(stu, n);
			break;
		case 6:
			//��ӡ
			output(stu, n);
			break;
		case 0:
			//�˳�
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (index);
	return 0;
}
