#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////��������һ����Ľṹ������
//struct book {
//    char name[20];//����
//    char author[20];//����
//    int price;//�۸�
//    char press[20];//������
//};
//
//
//int main() {
//    struct book b1 = { "shanhaijing", "yiming", "40", "dianzigongye" };
//    printf("%s %s %d %s\n", b1.name, b1.author, b1.price, b1.press);
//
//    return 0;
//}

//#include <stdio.h>
//
////��������һ����Ľṹ������
//struct book {
//    char name[20];//����
//    char author[20];//����
//    int price;//�۸�
//    char press[20];//������
//};
//
//
//int main() {
//    struct book b1 = { 0 };
//    struct book* p = &b1;
//    scanf("%s %s %d %s", p->name, p->author, &p->price, p->press);
//    printf("%s %s %d %s\n", (*p).name, (*p).author, (*p).price, (*p).press);
//    printf("%s %s %d %s\n", p->name, p->author, p->price, p->press);
//
//    return 0;
//}

#include <stdio.h>

void scanf1(struct book *p);
void printf1(struct book b);

struct book {
    char name[20];//����
    char author[20];//����
    int price;//�۸�
    char press[20];//������
};


int main() {
    struct book b1 = {0};
    //������������ṹ��
    scanf1(&b1);
    //������ǽṹ��ĵ�ַ
    printf1(b1);

    return 0;
}
//
void scanf1(struct book *p) {
    scanf("%s %s %d %s", p->name, p->author, &p->price, p->press);
}
//
void printf1(struct book b) {
    printf("%s %s %d %s\n", b.name, b.author, b.price, b.press);
}