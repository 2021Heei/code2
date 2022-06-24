#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int a = 0;
//int b = 0;
//void test3() {
//	printf("hehe!\n");
//}
//void test2() {
//	test3();
//}
//void test1() {
//	test2();
//}
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	test1();
//	for (i = 0; i < 10; i++) {
//		arr[i] = 0;
//		printf("hello!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str) {
//    assert(str != NULL);
//    int cnt = 0;
//    while (*str != NULL) {
//        str++;
//        cnt++;
//    }
//    return cnt;
//}
//int main() {
//    char str[] = "abcdef";
//    int len = my_strlen(str);
//    printf("%d\n", len);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 10;
//    const int b = 10;
//    int const c = 10;
//    a = 5;
//   /* b = 5;
//    c = 5;*/
//    int* pb = &b;
//    int* pc = &c;
//    *pb = 5;
//    *pc = 5;
//
//    return 0;
//}

#include <stdio.h>

int main() {
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    //无限制的指针变量p1
    int* p1 = &a;
    //指针指向对象受到限制的指针p2
    const int* p2 = &b;//int const *p2 = &a;
    a = 5;//true
    //指针本身受到限制的指针p3
    int* const p3 = &c;
    p3 = &a;//error
    //指针本身和指针指向对象都受到限制的指针p4
    const int* const p4 = &d;
    *p4 = 5;//error
    d = 5;//true
    p4 = &a;//error

    return 0;
}