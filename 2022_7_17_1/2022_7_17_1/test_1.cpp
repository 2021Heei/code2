#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//struct {
//	int a;
//	char b;
//}s1, *q;
//struct {
//	int a;
//	char b;
//}*p;
//
//int main() {
//	p = &s1;
//	q = &s1;
//	return 0;
//}

//#include <stdio.h>
//#include <stddef.h>
//
//struct stu1 {
//	char c1;
//	int n;
//	char c2;
//};
//
//struct stu2 {
//	char c1;
//	char c2;
//	int n;
//};
//int main() {
//	struct stu1 s1;
//	struct stu2 s2;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", offsetof(struct stu1, c1));
//	printf("%d\n", offsetof(struct stu1, n));
//	printf("%d\n", offsetof(struct stu1, c2));
//	printf("%d\n", offsetof(struct stu2, c1));
//	printf("%d\n", offsetof(struct stu2, c2));
//	printf("%d\n", offsetof(struct stu2, n));
//	return 0;
//}

//#include <stdio.h>
//
////int check_system() {
////	int a = 1;
////	return *(char*)&a;
////}
//
////int check_system() {
////	union Un {
////		int a;
////		char c;
////	}u;
////	u.a = 1;
////	return u.c;
////}
//
//int check_system() {
//	union {
//		int a;
//		char c;
//	}u;
//	u.a = 1;
//	return u.c;
//}
//int main() {
//	//��С��
//	int ret = check_system();
//	if (ret == 1) {
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//struct {
//    int a;
//    char b;
//}c;
//
//struct {
//    int a;
//    char b;
//}*p;
//
//int main() {
//
//    p = &c;//�˴��ᷢ����ʽ����ת��
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//    char name[20];//����
//    int num;//ѧ��
//}s1, s2 = { "sunwukong", 1001 };
//
//int main() {
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main() {
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#include <stdio.h>
//
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	struct S1 s2;
//	double d;
//};
//
//int main() {
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#include <stdio.h>
//#pragma pack(4)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//int main()
//{
//	//����Ľ����ʲô��
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}

//

//#include <stdio.h>
//
//struct S {
//    int a : 2;
//    char b : 4;
//    unsigned int c : 16;
//    signed int d : 4;
//    short int e : 5;
//    long int f : 9;
//};
//
//int main() {
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include <stdio.h>
//
//enum color {
//    RED,//0
//    ORANGE,//1
//    YELLOW,//2
//    GREEN,//3
//    CYAN = 10,//10
//    BLUE,//11
//    PURPLE//12
//}c1;
//
//int main() {
//    c1 = RED;
//    enum color c2 = BLUE;
//    printf("%d\n", c1);
//    printf("%d\n", c2);
//	return 0;
//}

//#include <stdio.h>
//
//enum week {
//	MONDAY = 1,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY,
//	FRIDAY,
//	SATURDAY,
//	SUNDAY
//};
//int main() {
//	enum week a = MONDAY;
//	enum week b = 1;
//
//	return 0;
//}

//#include <stdio.h>
//
//union un {
//	int a;
//	char b;
//}c;//���ϱ���c�Ķ���
//
//int main() {
//	c.a = 10;
//	union un d;//���ϱ���d�Ķ��塣�����ڶ������ϱ�����ͬʱ�����ʼ����
//
//	return 0;
//}

#include <stdio.h>

union Un1 {
	char c[5];
	int i;
//char c[5]��ռ��С��5���ֽڣ�����Ԫ����char����С��1��Ĭ�϶�������8���������������1��
	//i��ռ��С��4���ֽڣ�Ĭ�϶�������8���ʶ�������4��
	//����Ա��С��5���ֽڣ�����������4�������ϵĴ�С��8�ֽ�
};
union Un2 {
	short c[7];
	int i;
//short c[7]��ռ��С��14���ֽڣ�����Ԫ����short����С��2��Ĭ�϶�������8���������������2��
	//i��ռ��С��4���ֽڣ�Ĭ�϶�������8���ʶ�������4��
	//����Ա��С��14���ֽڣ�����������4�������ϵĴ�С��16�ֽڡ�
};

int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}