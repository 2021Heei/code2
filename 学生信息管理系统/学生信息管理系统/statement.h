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
	double total;//�ܳɼ�
	double avg;//ƽ���ɼ�
}STU;

//�˵�
void menu();

//��ӡ�����˵���Ϣ
void printRecord(STU* sptr);

//���������Ϣ
void output(STU stu[], int n);

//��
void add(STU stu[], int* nptr);

//����һ��ѧ������Ϣ,����STU[i]��
void InputRecord(STU stu[], int i);

//ɾ
void del(STU stu[], int* nptr);

//��ѧ�Ų���
int FindByNum(STU stu[], int n, char* str);

//���Ҳ����ѧ����Ϣ
void find(STU stu[], int n);

//��
void edit(STU stu[], int n);

//����
void sort(STU stu[], int n);

//���ɼ���������
int ScoreAsc(STU a, STU b);

//���ɼ���������
int ScoreDes(STU a, STU b);

//��������������
int NameAsc(STU a, STU b);

//�ļ�����--����
void load(STU stu[], int* nptr);

//�ļ�����
void save(STU stu[], int n);
