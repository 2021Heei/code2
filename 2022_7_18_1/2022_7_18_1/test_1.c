#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    //����4*n���ֽڵĿռ�
//    int* p = (int*)malloc(sizeof(int) * n);
//    //���p�Ƿ��ǿ�ָ�룬��������������Ϣ������
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
//    //�ͷ�����ָ��pָ��Ķ�̬�ڴ濪��(����)�Ŀռ�
//    free(p);
//    //ָ��pָ����Ϊ��(NULL)
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
//	//���·����ڴ���С
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
//        //i����10��ʱ��Խ�����
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
//    //����ͷ�p��ָ����ڴ�ռ�
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
//    //�����������Ա�Ľṹ��ʹ��malloc()���ж�̬�ڴ�ķ���
//    //����Ĵ�С�����ṹ�屾��Ĵ�С + ��������Ĵ�С
//    struct S* p = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 10);
//    //���p�Ƿ��ǿ�ָ��
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //ʹ����������
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        p->arr[i] = i;
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ", p->arr[i]);
//    }
//    //�ͷ�pָ��Ķ�̬���ٵ��ڴ�ռ䲢��p��Ϊ��ָ��
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
//    //�ȶ�̬�ڴ����һ���ṹ���С�Ŀռ�
//    struct S* p = (struct S*)malloc(sizeof(struct S));
//    //���p�Ƿ��ǿ�ָ��
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //�ٶ�̬����ṹ��������ָ��ָ����ڴ�ռ�
//    p->arr = (int*)malloc(sizeof(int) * 10);
//    //���p�Ƿ��ǿ�ָ��
//    if (p->arr == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //ʹ��
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        *(p->arr + i) = i;
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ", p->arr[i]);
//    }
//    //�ͷ�pָ��Ķ�̬���ٵ��ڴ�ռ䲢��p��Ϊ��ָ��
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
