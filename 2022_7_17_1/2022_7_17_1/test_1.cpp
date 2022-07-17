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
//	//大小端
//	int ret = check_system();
//	if (ret == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
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
//    p = &c;//此处会发生隐式类型转换
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//    char name[20];//姓名
//    int num;//学号
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
//#pragma pack(4)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//int main()
//{
//	//输出的结果是什么？
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
//}c;//联合变量c的定义
//
//int main() {
//	c.a = 10;
//	union un d;//联合变量d的定义。不能在定义联合变量的同时的其初始化。
//
//	return 0;
//}

#include <stdio.h>

union Un1 {
	char c[5];
	int i;
//char c[5]所占大小是5个字节，单个元素是char，大小是1，默认对齐数是8，故其对齐数就是1。
	//i所占大小是4个字节，默认对齐数是8，故对齐数是4。
	//最大成员大小是5个字节，最大对齐数是4，故联合的大小是8字节
};
union Un2 {
	short c[7];
	int i;
//short c[7]所占大小是14个字节，单个元素是short，大小是2，默认对齐数是8，故其对齐数就是2。
	//i所占大小是4个字节，默认对齐数是8，故对齐数是4。
	//最大成员大小是14个字节，最大对齐数是4，故联合的大小是16字节。
};

int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}