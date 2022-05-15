#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//    int n = 5;
//    int m = n << 5;
//    printf("n = %d\n", n);
//    printf("m = %d\n", n<<1);
//    printf("m = %d\n", n<<2);
//    printf("m = %d\n", n<<3);
//    printf("m = %d\n", n<<4);
//    printf("m = %d\n", n<<5);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = -1;
//    int m = n >> 1;
//    printf("n = %d\n", n);
//    printf("m = %d\n", m);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n = 1 ^ 5;
//    printf("n = %d\n", n);
//
//    return 0;
//}
#include <stdio.h>

//int main() {
//    int a = 5;
//    int b = 10;
//    //借助临时变量t
//    int t = 0;
//    t = a;
//    a = b;
//    b = t;
//    printf("a=%d,b=%d", a, b);
//
//    return 0;
//}

#include <stdio.h>

//int main() {
//    int a = 5;
//    int b = 10;
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 5;
//    int b = 10;
//    printf("a=%d,b=%d\n", a, b);
//    //a与b异或的结果存放在a中
//    a = a ^ b;
//    //相当于a^b^b,得到a，赋值给b
//    b = a ^ b;
//    //相当于a^b^a,得到b，赋值给a
//    a = a ^ b;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int t1 = 10;
//    int t2 = -10;
//
//    int i = 0;
//    int cnt1 = 0;
//    int cnt2 = 0;
//    for (i = 0; i < 32; i++) {
//        if (t1 & (1 << i)) {
//            cnt1++;
//        }
//        if (t2 & (1 << i)) {
//            cnt2++;
//        }
//    }
//    printf("cnt1 = %d, cnt2 = %d\n", cnt1, cnt2);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int num = -1;
//    int i = 0;
//    int cnt = 0;//计数
//    while (num) {
//        cnt++;
//        num = num & (num - 1);
//    }
//    printf("cnt = %d\n", cnt);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 10;
//    a = +a;//a == 10
//    printf("+a = %d\n", a);
//    a = -a;//a == -10
//    printf("-a = %d\n", a);
//    int b;
//    b = -a;//b == 10
//    printf("b = %d\n", b);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//  /*  int a = 0;
//    printf("!a = %d\n", !a);
//    int b = 10;
//    printf("!b = %d\n", !b);*/
//    int a = 10;
//    int b = ~a;
//    printf("b = %d\n", b);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 10;
//    //创建一个指针变量p存放变量a的地址
//    int* p = &a;
//    printf("&a = %p\n", &a);
//    printf(" p = %p\n", p);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 10;
//    int* p = &a;
//    char* s = "hello";
//    printf("*p = %d\n", *p);
//    *p = -10;
//    printf("*p = %d\n", *p);
//
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int a = 10;
//    printf("sizeof(a) = %d\n", sizeof(a));
//    printf("sizeof(int) = %d\n", sizeof(int));
//    //sizeof操作符的括号可以省略，但在计算类型时是不能省略的
//    printf("sizeof a = %d\n", sizeof a);
//    //printf("sizeof(int) = %d", sizeof int);
//    return 0;
//}
//#include <stdio.h>
//
//void test(char s[]);
//
//int main() {
//    char str[10] = { 0 };
//    printf("sizeof(str) = %d\n", sizeof(str));
//    test(str);
//
//    return 0;
//}
////这是个测试
//void test(char s[]) {
//    printf("sizeof(s) = %d\n", sizeof(s));
//}
//#include <stdio.h>
//
//int main() {
//    //这种情况会产生警告信息，3.14被默认为浮点型数据，被赋值给int型变量a时会丢失精度，是隐式类	  //型转换
//    int a = 3.14;
//    printf("a = %d\n", a);
//    //强制类型转化,明确把浮点型数据转换为int型数据
//    int b = (int)3.14;
//    printf("b = %d\n", b);
//    
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main() {
    double a = 3.14;
    float b = 3.14;
    printf("a = %lf,b = %f\n", a, b);

    if (fabs(a - b) < 1e-5) {
        printf("a==b\n");
    }
    else if (a - b > 1e-5) {
        printf("a > b\n");
    }
    else {
        printf("a < b\n");
    }
    return 0;
}
