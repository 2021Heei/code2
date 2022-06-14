#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <string.h>

#define N 10000

typedef struct student {
	char ID[10];
	char name[20];
	char sex;
	double score[5];
	double total;//总成绩
	double avg;//平均成绩
}STU;

//菜单
void menu();

//打印单个人的信息
void printRecord(STU* sptr);

//输出所有信息
void output(STU stu[], int n);

//增
void add(STU stu[], int* nptr);

//增加一个学生的信息,存入STU[i]中
void InputRecord(STU stu[], int i);

//删
void del(STU stu[], int* nptr);

//按学号查找
int FindByNum(STU stu[], int n, char* str);

//查找并输出学生信息
void find(STU stu[], int n);

//改
void edit(STU stu[], int n);

//排序
void sort(STU stu[], int n);

//按成绩升序排列
int ScoreAsc(STU a, STU b);

//按成绩降序排列
int ScoreDes(STU a, STU b);

//按姓名升序排列
int NameAsc(STU a, STU b);

//文件操作--加载
void load(STU stu[], int* nptr);

//文件保存
void save(STU stu[], int n);
