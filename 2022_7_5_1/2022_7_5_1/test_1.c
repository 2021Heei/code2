#define _CRT_SECURE_NO_WARNINGS 1
/*写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

例如：给定s1 =AABCD和s2 = BCDAA，返回1

给定s1=abcd和s2=ACBD，返回0.

AABCD左旋一个字符得到ABCDA

AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void reverse(char* p, int left, int right) {
//	while (left < right) {
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	
//	int flag = 0;//假设开始是相等的
//	if (len1 == len2) {
//		if (strcmp(str1, str2)==1) {
//			flag = 1;
//		}
//		char* p = (char*)malloc(sizeof(char) * (len2+1));
//		int i = 0;//旋转变量
//		
//		for (i = 0; i < len2; i++) {
//			strcpy(p, str2);
//			reverse(p, 0, i-1);
//			reverse(p, i, len2-1);
//			reverse(p, 0, len2-1);
//			//比较
//			if (strcmp(str1, p) == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		free(p);
//		p = NULL;
//	}
//	if (flag == 1) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	return 0;
//}

//#include <stdio.h>
////整型
//int cmp_int(const void* e1, const void* e2) {
//	//升序
//	return *(int*)e1 - *(int*)e2;
//}
//void test_int() {
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////字符
//int cmp_ch(const void* e1, const void* e2) {
//	return *(char*)e1 - *(char*)e2;
//}
//void test_ch() {
//	char ch[10] = { 'd','f','f','g','t','y','i','o','q','s' };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	qsort(ch, sz, sizeof(ch[0]), cmp_ch);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%c ", ch[i]);
//	}
//	printf("\n");
//}
////结构体
//typedef struct student {
//	char name[20];
//	int num;
//}STU;
//int cmp_struct_name(const void* e1, const void* e2) {
//	return strcmp(((STU*)e1)->name, ((STU*)e2)->name);
//}
//void test_struct_name() {
//	STU s[] = { {"sunwukong", 2},{"shasheng", 4},{"zhubajie",3}, {"tangsheng", 1} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s %d\n", s[i].name, s[i].num);
//	}
//}
//int cmp_struct_num(const void* e1, const void* e2) {
//	return ((STU*)e1)->num - ((STU*)e2)->num;
//}
//void test_struct_num() {
//	STU s[] = { {"sunwukong", 2},{"shasheng", 4},{"zhubajie",3}, {"tangsheng", 1} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_num);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s %d\n", s[i].name, s[i].num);
//	}
//}
//int main() {
//	test_int();
//	test_ch();
//	test_struct_name();
//	test_struct_num();
//	return 0;
//}

//#include <stdio.h>
//void Swap(char* buf1, char* buf2, int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2)) {
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		//比较次数
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (cmp((char*)base + j * width, (char*)base+(j+1)*width) > 0) {
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//void test_int() {
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	test_int();
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y) {
//    return x + y;
//}
//
//int main() {
//    printf("&Add == %p\n", &Add);
//    printf("Add  == %p\n", Add);
//
//    return 0;
//}

#include <stdio.h>

int Add(int x, int y) {
    return x + y;
}

int main() {
    int (*p)(int, int) = &Add;//int (*P)(int, int) = Add
    int x = 3;
    int y = 4;

    //直接函数调用
    int ret1 = Add(x, y);
    //通过函数指针的函数调用
    int ret2 = (*p)(x, y);
    int ret3 = p(x, y);//由函数直接调用知，其直接使用的是函数名-也就是函数的地址，而p中存放的就是函数的地址，故p与函数名等价
    //由此,*在此处函数调用下不起作用,可以没有，也可以有多个。
    int ret4 = (*****p)(x, y);

    int ret5 = (*Add)(x, y);

    printf("ret1 == %d\n", ret1);
    printf("ret2 == %d\n", ret2);
    printf("ret3 == %d\n", ret3);
    printf("ret4 == %d\n", ret4);
    printf("ret5 == %d\n", ret5);
    return 0;
}