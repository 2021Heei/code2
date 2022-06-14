#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};
typedef struct node LNode, * LinkList;
void menu() {
	printf("*************************************\n");
	printf("****   1.��������   2.����Ԫ��   ****\n");
	printf("****        3.�������Ԫ��       ****\n");
	printf("****        0.�˳�����           ****\n");
	printf("*************************************\n");
}
//���������� - β�巨
void CreatList(LinkList head);
//��ӡ������������Ԫ��
void PrintList(LinkList head);
//ͷ�巨����
void reverse(LinkList head);
int main() {
	LinkList head;
	int i, e, select, n;
	head = (LinkList)malloc(sizeof(LNode));
	head->next = NULL;
	while (1) {
		menu();
		scanf("%d", &select);
		
		switch (select) {
		case 1:
			CreatList(head);
			//����
			break;
		case 2:
			//ͷ�巨����
			reverse(head);
			break;
		case 3:
			//��ӡ
			PrintList(head);
			printf("\n");
			break;
		case 0:
			//�˳�
			exit(0);
		default:
			printf("�����������������\n");
			break;
		}
	}
}

//���������� - β�巨
void CreatList(LinkList head) {
	LinkList p, rear = head;
	int num;
	printf("������������������-1��ʾ����\n");
	while (scanf("%d", &num), num != -1) {
		p = (LinkList)malloc(sizeof(LNode));
		p->data = num;
		rear->next = p;
		rear = p;
	}
	rear->next = NULL;
}

//��ӡ������������Ԫ��
void PrintList(LinkList head) {
	LinkList p = head->next;

	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
}

//ͷ�巨����
void reverse(LinkList head) {
	LinkList p, q;
	p = head->next;
	head->next = NULL;

	while (p) {
		q = p;
		p = p->next;
		q->next = head->next;
		head->next = q;
	}
}