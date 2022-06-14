#include "statement.h"

void menu() {
	system("cls");
	printf("***************************\n");
	printf("****  1.�� 2.ɾ 3. ��  ****\n");
	printf("*** 4.�� 5.���� 6.��ӡ  ***\n");
	printf("***        0.�˳�       ***\n");
	printf("������Ҫ���еĲ���>");
}

//��ӡ�����˵���Ϣ
void printRecord(STU* sptr) {
	int i = 0;
	printf("%8s%8s%4c", sptr->ID, sptr->name, sptr->sex);
	for (i = 0; i < 5; i++) {
		printf("%8.2lf", sptr->score[i]);
	}
	printf("%8.2lf%8.2lf\n", sptr->total, sptr->avg);
}
//���������Ϣ
void output(STU stu[], int n) {
	printf("%8s%8s%4s%8s%8s%8s%8s%8s%8s%8s\n",
		"ID", "NAME", "SEX", "SCORE1", "SCORE2", "SCORE3", "SCORE4", "SCORE5",
		"total", "avg");
	int i = 0;
	for (i = 0; i < n; i++) {
		printRecord(&stu[i]);
	}
	system("pause");
}

//��
void add(STU stu[], int* nptr) {
	int i = 0;
	char sel = 'y';

	while (sel == 'y') {
		InputRecord(stu, (*nptr)++);
		printf("�Ƿ�������(yes--y,no--n)>");
		scanf(" %c", &sel);
	}
	save(stu, *nptr);
}

//����һ��ѧ������Ϣ,����STU[i]��
void InputRecord(STU stu[], int i) {
	printf("�������%d��ѧ������Ϣ\n", i + 1);

	printf("������ѧ��ѧ��>");
	scanf("%s", stu[i].ID);

	printf("������ѧ��������>");
	scanf("%s", stu[i].name);

	printf("������ѧ�����Ա�>");
	scanf(" %c", &stu[i].sex);

	printf("���������ſεĳɼ�>");
	stu[i].total = 0;
	int j = 0;
	for (j = 0; j < 5; j++) {
		scanf("%lf", &stu[i].score[j]);
		stu[i].total += stu[i].score[j];
	}

	stu[i].avg = stu[i].total / 5;
}

//ɾ
void del(STU stu[], int* nptr) {
	int i;
	int index;
	char str[20];
	printf("������Ҫɾ����ѧ��>");
	scanf("%s", str);
	index = FindByNum(stu, *nptr, str);

	if (index < 0) {
		printf("��ѧ����Ϣ������\n");
		return;
	}
	for (i = index; i < *nptr - 1; i++) {
		stu[i] = stu[i + 1];
	}
	(*nptr)--;
	printf("ɾ���ɹ�\n");
	save(stu, *nptr);
}

//��ѧ�Ų���
int FindByNum(STU stu[], int n, char* str) {
	int i = 0;
	for (i = 0; i < n; i++) {
		if (strcmp(stu[i].ID, str) == 0) {
			return i;
		}
	}
	return -1;
}

//���Ҳ����ѧ����Ϣ
void find(STU stu[], int n) {
	int index;
	char str[20];
	printf("������ѧ��>");
	scanf("%s", str);
	index = FindByNum(stu, n, str);
	
	if (index >= 0) {
		//printf("���ҳɹ�\n");
		printRecord(&stu[index]);
	}
	else {
		printf("��ѧ����Ϣ������\n");
	}
	system("pause");
}

//��
void edit(STU stu[], int n){
	int i;
	int index;
	char sel;
	char str[20];
	printf("������ѧ��>");
	scanf("%s", str);
	index = FindByNum(stu, n, str);
	if (index < 0) {
		printf("��ѧ����Ϣ������\n");
		return;
	}

	printf("�޸�ǰ��ԭ��¼����\n");
	printRecord(&stu[index]);

	printf("�Ƿ��޸�����?������y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		printf("����������>");
		scanf("%s", stu[index].name);
	}

	printf("�Ƿ��޸��Ա�?������y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		printf("������f or m>");
		scanf(" %c", &stu[index].sex);
	}

	printf("�Ƿ��޸ĳɼ�?������y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		stu[index].total = 0;
		printf("���������ſεĳɼ�>");
		for (i = 0; i < 5; i++) {
			scanf("%lf", &stu[index].score[i]);
			stu[index].total += stu[index].score[i];
		}
		stu[index].avg = stu[index].total / 5;
	}
	save(stu, n);
}

//����
void sort(STU stu[], int n) {
	int select, i, j;
	int (*cmp)(STU a, STU b) = NULL;

	int ScoreAsc(STU a, STU b);
	int ScoreDes(STU a, STU b);
	int NameAsc(STU a, STU b);

	printf("1 ���ܷ���������\n");
	printf("2 ���ֽܷ�������\n");
	printf("3 ��������������\n");

	scanf("%d", &select);
	switch (select) {
	case 1:
		cmp = ScoreAsc;
		break;
	case 2:
		cmp = ScoreDes;
		break;
	case 3:
		cmp = NameAsc;
		break;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if ((*cmp)(stu[i], stu[j]) > 0) {
				STU temp;
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	output(stu, n);
}

//���ɼ���������
int ScoreAsc(STU a, STU b) {
	return a.total > b.total ? 1 : -1;
}

//���ɼ���������
int ScoreDes(STU a, STU b) {
	return a.total < b.total ? 1 : -1;
}

//��������������
int NameAsc(STU a, STU b) {
	return a.name > b.name ? 1 : -1;
}

//�ļ�����--����
void load(STU stu[], int* nptr) {
	FILE* fp;
	int i;
	if ((fp = fopen("C:\\Users\\δ��\\source\\repos\\ѧ����Ϣ����ϵͳ\\ѧ����Ϣ����ϵͳ\\stu.txt", "r")) == NULL) {
		*nptr == 0;
		return;
	}
	//�ļ���Ϣ����ṹ��������
	for (i = 0; fread(&stu[i], sizeof(STU), 1, fp) != 0; i++) {
		;
	}
	//��¼ѧ������
	*nptr = i;
	fclose(fp);
}

//�ļ�����
void save(STU stu[], int n) {
	FILE* fp;
	if ((fp = fopen("C:\\Users\\δ��\\source\\repos\\ѧ����Ϣ����ϵͳ\\ѧ����Ϣ����ϵͳ\\stu.txt", "w")) == NULL) {
		printf("���ļ�ʧ��\n");
		exit(0);
	}

	fwrite(stu, n * sizeof(stu[0]), 1, fp);
	fclose(fp);
}