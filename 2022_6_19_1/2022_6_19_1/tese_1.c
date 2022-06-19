#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	printf("pa:%p\n", pa);
//	pa++;
//	printf("pa:%p\n", pa);
//	pa--;
//	printf("pa:%p\n", pa);
//
//	char c = 'A';
//	char* pc = &c;
//	printf("pc:%p\n", pc);
//	pc++;
//	printf("pc:%p\n", pc);
//	pc--;
//	printf("pc:%p\n", pc);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a = 0x11111111;
//	int b = 0x11111111;
//	int *pa = &a;
//	char* pc = (char*)&b;
//
//	*pa = 0;
//	printf("%x\n", a);
//
//	*pc = 0;
//	printf("%x\n", b);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int* p = arr;
//    arr[10] = 5;
//    printf("%d", arr[10]);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int* p = (int*)malloc(sizeof(int));
//    free(p);
//    *p = 10;
//    printf("%d", *p);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int* pa = &a;
//    if (pa != NULL) {
//        *pa = 10;
//    }
//    printf("%d", *pa);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int* p1 = &arr[0];
//    int* p2 = &arr[5];
//    printf("p2 - p1 = %d\n", p2 - p1);
//    printf("p1 - p2 = %d\n", p1 - p2);
//
//    return 0;

//#include <stdio.h>
//
//int my_strlen(char* str);
//
//int main() {
//    char str[10] = "sunwukong";
//    int len = my_strlen(str);
//    printf("%d\n", len);
//
//    return 0;
//}
//
//int my_strlen(char* str) {
//    char *pc = str;
//    while (*str != '\0') {
//        str++;
//    }
//    return str - pc;
//}
//
//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int* p = NULL;
//    for (p = &arr[10]; p > &arr[0]; ) {
//        *--p = 1;
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int* p = arr;
//    //数组下标法
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++) {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }
//    //指针偏移量法
//    for (i = 0; i < sz; i++) {
//        printf("*(p + %d) = %d\n", i, *(p + i));
//    }
//    for (i = 0; i < sz; i++) {
//        printf("*(arr + %d) = %d\n", i, *(arr + i));
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++) {
//        printf("arr[%d] -> %p-------%p <- (p+%d)\n", i, &arr[i], (p + i), i);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 10;
//    printf("%d\n", a);
//    //pa是一个指针，指向的类型是int
//    int* pa = &a;
//    *pa = 5;
//    printf("%d\n", a);
//    //ppa是一个指针，指向的类型是int*
//    int** ppa = &pa;
//    **ppa = 15;
//    printf("%d\n", a);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 5;
//    int b = 5;
//    int c = 5;
//    int* parr[5] = { &a, &b, &c };
//    int i = 0;
//    for (i = 0; i < 3; i++) {
//        printf("%d\n", *parr[i]);
//    }
//    return 0;
//}

#include <stdio.h>

int main() {
    int a1[4] = { 1,2,3,4 };
    int a2[4] = { 5,6,7,8 };
    int a3[4] = { 9,10,11,12 };
    int* pa[3] = { a1,a2,a3 };
    int i = 0;
    for (i = 0; i < 3; i++) {
        int j = 0;
        for (j = 0; j < 4; j++) {
            printf("%d ", pa[i][j]);//*(pa[i]+j)
        }
        printf("\n");
    }
    return 0;
}

