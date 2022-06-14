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
	printf("****   1.创建链表   2.逆置元素   ****\n");
	printf("****        3.输出所有元素       ****\n");
	printf("****        0.退出程序           ****\n");
	printf("*************************************\n");
}
//创建单链表 - 尾插法
void CreatList(LinkList head);
//打印单链表中所有元素
void PrintList(LinkList head);
//头插法逆置
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
			//创建
			break;
		case 2:
			//头插法逆置
			reverse(head);
			break;
		case 3:
			//打印
			PrintList(head);
			printf("\n");
			break;
		case 0:
			//退出
			exit(0);
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
}

//创建单链表 - 尾插法
void CreatList(LinkList head) {
	LinkList p, rear = head;
	int num;
	printf("输入若干整数，输入-1表示结束\n");
	while (scanf("%d", &num), num != -1) {
		p = (LinkList)malloc(sizeof(LNode));
		p->data = num;
		rear->next = p;
		rear = p;
	}
	rear->next = NULL;
}

//打印单链表中所有元素
void PrintList(LinkList head) {
	LinkList p = head->next;

	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
}

//头插法逆置
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