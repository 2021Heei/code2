#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    //申请4*n个字节的空间
//    int* p = (int*)malloc(sizeof(int) * n);
//    //检查p是否是空指针，如果是输出错误信息并返回
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        *(p + i) = i;
//    }
//    for (i = 0; i < n; i++) {
//        printf("%d ", *(p + i));
//    }
//    //释放整型指针p指向的动态内存开辟(申请)的空间
//    free(p);
//    //指针p指向置为空(NULL)
//    p = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//	int n = 10;
//	int* p1 = (int*)malloc(sizeof(int) * n);
//	if (p1 == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int* p2 = (int*)calloc(n, sizeof(int));
//	if (p2 == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(p1 + i));
//	}
//	printf("\n");
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(p2 + i));
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int* ptr = (int*)calloc(n, sizeof(int));
//	if (ptr == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(ptr + i));
//	}
//	printf("\n");
//	//重新分配内存块大小
//	scanf("%d", &n);
//	int* p = (int*)realloc(ptr, sizeof(int) * n);
//	if (p != NULL) {
//		ptr = p;
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(p + i));
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int* p = (int*)malloc(sizeof(int) * 10);
//    *p = 10;
//    free(p);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int* p = (int*)malloc(INT_MAX);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i <= 10; i++) {
//        //i等于10的时候越界访问
//        *(p + i) = i + 1;
//    }
//
//    free(p);
//    p = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int a = 10;
//    int* p = &a;
//
//    free(p);
//    p = NULL;
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//    int* p = (int*)malloc(sizeof(int) * 10);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        *p = i;
//        p++;
//    }
//
//    free(p);
//    p = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//    int* p = (int*)malloc(sizeof(int) * 10);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //多次释放p所指向的内存空间
//    free(p);
//    free(p);
//    free(p);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//void test() {
//    int* p = (int*)malloc(sizeof(int) * 10);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 0;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        *(p + i) = i;
//    }
//    for (i = 0; i < 10 ; i++) {
//        printf("%d ", p[i]);
//    }
//}
//int main() {
//    while (1) {
//        test();
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int GlobalVeriable = 10;
//static int StaticGlobalVeriable = 20;
//
//int main() {
//	static int StaticVeriable = 5;
//	int LocalVeriable = 10;
//	int arr[10] = { 0 };
//	char str1 = "Hello";
//	char* p = "world!";
//	int* p1 = (int*)malloc(sizeof(int) * 10);
//	int* p2 = (int*)calloc(10, sizeof(int));
//	int* p3 = (int*)realloc(NULL, sizeof(int) * 10);
//
//	free(p1);
//	free(p2);
//	free(p3);
//	p1 = NULL;
//	p2 = NULL;
//	p3 = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//    char name[20];
//    int arr[0];
//};
//
//int main() {
//
//	return 0;
//}


//#include <stdio.h>
//
//struct student {
//    char name[20];
//    int arr[];
//};
//
//int main() {
//
//    return 0;
//}
//#include <stdio.h>
//
//struct student {
//    char name[20];
//    int arr[];
//};
//
//int main(){
//    int ret = sizeof(struct student);
//    printf("%d\n", ret);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S {
//    int i;
//    int arr[];
//};
//
//int main() {
//    //含柔性数组成员的结构体使用malloc()进行动态内存的分配
//    //分配的大小包含结构体本身的大小 + 柔性数组的大小
//    struct S* p = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 10);
//    //检查p是否是空指针
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //使用柔性数组
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        p->arr[i] = i;
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ", p->arr[i]);
//    }
//    //释放p指向的动态开辟的内存空间并将p置为空指针
//    free(p);
//    p = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S {
//    int i;
//    int* arr;
//};
//
//int main() {
//    //先动态内存分配一个结构体大小的空间
//    struct S* p = (struct S*)malloc(sizeof(struct S));
//    //检查p是否是空指针
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //再动态分配结构体中整型指针指向的内存空间
//    p->arr = (int*)malloc(sizeof(int) * 10);
//    //检查p是否是空指针
//    if (p->arr == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //使用
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        *(p->arr + i) = i;
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ", p->arr[i]);
//    }
//    //释放p指向的动态开辟的内存空间并将p置为空指针
//    free(p->arr);
//    p->arr = NULL;
//    free(p);
//    p = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//char* GetMemory(void) {
//    char p[] = "hello world";
//    return p;
//}
//void Test(void) {
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//int main() {
//    Test();
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//char* GetMemory(){
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void){
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main() {
//	Test();
//	return 0;
//}

//#include <stdio.h>
//
//void GetMemory(char** p, int num){
//	*p = (char*)malloc(num);
//}
//
//void Test(void){
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void Test(void){
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL){
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main() {
//	Test();
//
//	return 0;
//}

#include <stdio.h>

int* test() {
    int a = 20;
    return &a;
}
int main() {
    int* p = test();
    //printf("%d\n", 10);
    printf("%d\n", *p);

    return 0;
}
