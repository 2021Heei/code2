#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int max = a > b ? a : b;
//    printf("max = %d", max);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, c, d;
//    int t1 = (a = 5, b = 3, c = 1, d = 10);
//    int t2 = (a = 5, b = 3, c = 1, d = a + b + c);
//
//    printf("t1 = %d\n", t1);
//    printf("t2 = %d\n", t2);
//    return 0;
//}
//#include <stdio.h>
//
//int test1(int a, int b);
//void test2();
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int max = test1(a, b);
//    printf("max = %d\n", max);
//
//    test2();
//
//    return 0;
//}
////测试1
//int test1(int a, int b) {
//    return a > b ? a : b;
//}
////测试2
//void test2() {
//    printf("test2\n");
//    return;
//}

#include <stdio.h>

//定义一个学生的结构体类型并用typedef重命名为STU
typedef struct student {
    char name[20];
    char id[15];//学号
    int score;
}STU;

//int main() {
//    STU stu;
//    scanf("%s %s %d", stu.name, stu.id, &stu.score);
//
//    printf("%s %s %d\n", stu.name, stu.id, stu.score);
//
//    STU* p = &stu;
//    scanf("%s %s %d", stu.name, stu.id, &stu.score);
//
//    printf("%s %s %d\n", p->name, p->id, p->score);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    //char、short、int默认为有符号类型，若整型提升则进行的是有符号整数的整形提升
//    char a = 0xf6;
//    //11110110
//    short b = 0xf600;
//    //11110110 00000000
//    int c = 0xf6000000;
//    //11110110 00000000 00000000 00000000
//
//    //参与运算之前先对char、short进行整形提升为int
//    if (a == 0xf6) {
//        //11111111 11111111 11111111 11110110
//        printf("a == 0xf6\n");
//    }
//    if (b == 0xf600) {
//        //11111111 11111111 11110110 00000000
//        printf("b == 0xf600\n");
//    }
//    if (c == 0xf6000000) {
//        //11110110 00000000 00000000 00000000
//        printf("c == 0xf6000000\n");
//    }
//    printf("%x\n", 0xf6);
//    printf("%x\n", 0xf600);
//    printf("%x\n", 0xf6000000);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char a = 1;
//    printf("sizeof(a) = %u\n", sizeof(a));
//    printf("sizeof(+a) = %u\n", sizeof(+a));
//    printf("sizeof(-a) = %u\n", sizeof(-a));
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[20] = "Hello,World!";
//    printf("sizeof(str) = %d\n", sizeof(str));
//    printf("strlen(str) = %d\n", strlen(str));
//    double a = 3.14;
//    printf("%d\n", sizeof(++a));
//    printf("%lf\n", a);
//    return 0;
//}
