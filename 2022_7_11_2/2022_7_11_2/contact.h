#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
//��������
#include <stdio.h>
#include <assert.h>
#include <string.h>


#define MAX_PEO 1000
#define MAX_NAME 20
#define MAX_SEX 6
#define MAX_TELE 15
#define MAX_ADDRESS 30

//��ϵ������
typedef struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact {
	PeoInfo peo[MAX_PEO];
	//��ϵ������
	int count;
}Contact;

//��ʼ��
void Init(Contact* Peo);

//�˵�
void menu();

//��
void AddContact(Contact* Peo);

//��ӡ������ϵ�˵���Ϣ
void print_Peo(Contact* Peo, int i);

//��ӡ��ϵ��
void DisplayContact(const Contact* Peo);

//���ֲ���
int CheckContact_by_name(Contact* Peo, char* pname);

//�绰����
int CheckContact_by_tele(Contact* Peo);

//��
void CheckContact(Contact* Peo);

//ɾ
void DelContact(Contact* Peo);

//�޸���ϵ����Ϣ
void ModifyContact(Contact* Peo);

//����
void sort(Contact* Peo);