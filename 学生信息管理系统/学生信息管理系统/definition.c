#include "statement.h"

void menu() {
	system("cls");
	printf("***************************\n");
	printf("****  1.增 2.删 3. 查  ****\n");
	printf("*** 4.改 5.排序 6.打印  ***\n");
	printf("***        0.退出       ***\n");
	printf("请输入要进行的操作>");
}

//打印单个人的信息
void printRecord(STU* sptr) {
	int i = 0;
	printf("%8s%8s%4c", sptr->ID, sptr->name, sptr->sex);
	for (i = 0; i < 5; i++) {
		printf("%8.2lf", sptr->score[i]);
	}
	printf("%8.2lf%8.2lf\n", sptr->total, sptr->avg);
}
//输出所有信息
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

//增
void add(STU stu[], int* nptr) {
	int i = 0;
	char sel = 'y';

	while (sel == 'y') {
		InputRecord(stu, (*nptr)++);
		printf("是否继续添加(yes--y,no--n)>");
		scanf(" %c", &sel);
	}
	save(stu, *nptr);
}

//增加一个学生的信息,存入STU[i]中
void InputRecord(STU stu[], int i) {
	printf("请输入第%d个学生的信息\n", i + 1);

	printf("请输入学生学号>");
	scanf("%s", stu[i].ID);

	printf("请输入学生的姓名>");
	scanf("%s", stu[i].name);

	printf("请输入学生的性别>");
	scanf(" %c", &stu[i].sex);

	printf("请输入五门课的成绩>");
	stu[i].total = 0;
	int j = 0;
	for (j = 0; j < 5; j++) {
		scanf("%lf", &stu[i].score[j]);
		stu[i].total += stu[i].score[j];
	}

	stu[i].avg = stu[i].total / 5;
}

//删
void del(STU stu[], int* nptr) {
	int i;
	int index;
	char str[20];
	printf("请输入要删除的学号>");
	scanf("%s", str);
	index = FindByNum(stu, *nptr, str);

	if (index < 0) {
		printf("该学生信息不存在\n");
		return;
	}
	for (i = index; i < *nptr - 1; i++) {
		stu[i] = stu[i + 1];
	}
	(*nptr)--;
	printf("删除成功\n");
	save(stu, *nptr);
}

//按学号查找
int FindByNum(STU stu[], int n, char* str) {
	int i = 0;
	for (i = 0; i < n; i++) {
		if (strcmp(stu[i].ID, str) == 0) {
			return i;
		}
	}
	return -1;
}

//查找并输出学生信息
void find(STU stu[], int n) {
	int index;
	char str[20];
	printf("请输入学号>");
	scanf("%s", str);
	index = FindByNum(stu, n, str);
	
	if (index >= 0) {
		//printf("查找成功\n");
		printRecord(&stu[index]);
	}
	else {
		printf("该学生信息不存在\n");
	}
	system("pause");
}

//改
void edit(STU stu[], int n){
	int i;
	int index;
	char sel;
	char str[20];
	printf("请输入学号>");
	scanf("%s", str);
	index = FindByNum(stu, n, str);
	if (index < 0) {
		printf("该学生信息不存在\n");
		return;
	}

	printf("修改前的原纪录如下\n");
	printRecord(&stu[index]);

	printf("是否修改姓名?请输入y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		printf("请输入姓名>");
		scanf("%s", stu[index].name);
	}

	printf("是否修改性别?请输入y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		printf("请输入f or m>");
		scanf(" %c", &stu[index].sex);
	}

	printf("是否修改成绩?请输入y or n>");
	scanf(" %c", &sel);
	if (sel == 'y') {
		stu[index].total = 0;
		printf("请输入五门课的成绩>");
		for (i = 0; i < 5; i++) {
			scanf("%lf", &stu[index].score[i]);
			stu[index].total += stu[index].score[i];
		}
		stu[index].avg = stu[index].total / 5;
	}
	save(stu, n);
}

//排序
void sort(STU stu[], int n) {
	int select, i, j;
	int (*cmp)(STU a, STU b) = NULL;

	int ScoreAsc(STU a, STU b);
	int ScoreDes(STU a, STU b);
	int NameAsc(STU a, STU b);

	printf("1 按总分升序排列\n");
	printf("2 按总分降序排列\n");
	printf("3 按姓名升序排列\n");

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

//按成绩升序排列
int ScoreAsc(STU a, STU b) {
	return a.total > b.total ? 1 : -1;
}

//按成绩降序排列
int ScoreDes(STU a, STU b) {
	return a.total < b.total ? 1 : -1;
}

//按姓名升序排列
int NameAsc(STU a, STU b) {
	return a.name > b.name ? 1 : -1;
}

//文件操作--加载
void load(STU stu[], int* nptr) {
	FILE* fp;
	int i;
	if ((fp = fopen("C:\\Users\\未禾\\source\\repos\\学生信息管理系统\\学生信息管理系统\\stu.txt", "r")) == NULL) {
		*nptr == 0;
		return;
	}
	//文件信息读入结构体数组中
	for (i = 0; fread(&stu[i], sizeof(STU), 1, fp) != 0; i++) {
		;
	}
	//记录学生个数
	*nptr = i;
	fclose(fp);
}

//文件保存
void save(STU stu[], int n) {
	FILE* fp;
	if ((fp = fopen("C:\\Users\\未禾\\source\\repos\\学生信息管理系统\\学生信息管理系统\\stu.txt", "w")) == NULL) {
		printf("打开文件失败\n");
		exit(0);
	}

	fwrite(stu, n * sizeof(stu[0]), 1, fp);
	fclose(fp);
}