#define _CRT_SECURE_NO_WARNINGS 1
/*дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

���磺����s1 =AABCD��s2 = BCDAA������1

����s1=abcd��s2=ACBD������0.

AABCD����һ���ַ��õ�ABCDA

AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC*/

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
//	int flag = 0;//���迪ʼ����ȵ�
//	if (len1 == len2) {
//		if (strcmp(str1, str2)==1) {
//			flag = 1;
//		}
//		char* p = (char*)malloc(sizeof(char) * (len2+1));
//		int i = 0;//��ת����
//		
//		for (i = 0; i < len2; i++) {
//			strcpy(p, str2);
//			reverse(p, 0, i-1);
//			reverse(p, i, len2-1);
//			reverse(p, 0, len2-1);
//			//�Ƚ�
//			if (strcmp(str1, p) == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		free(p);
//		p = NULL;
//	}
//	if (flag == 1) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
////����
//int cmp_int(const void* e1, const void* e2) {
//	//����
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
////�ַ�
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
////�ṹ��
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
//	//����
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		//�Ƚϴ���
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (cmp((char*)base + j * width, (char*)base+(j+1)*width) > 0) {
//				//����
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

    //ֱ�Ӻ�������
    int ret1 = Add(x, y);
    //ͨ������ָ��ĺ�������
    int ret2 = (*p)(x, y);
    int ret3 = p(x, y);//�ɺ���ֱ�ӵ���֪����ֱ��ʹ�õ��Ǻ�����-Ҳ���Ǻ����ĵ�ַ����p�д�ŵľ��Ǻ����ĵ�ַ����p�뺯�����ȼ�
    //�ɴ�,*�ڴ˴����������²�������,����û�У�Ҳ�����ж����
    int ret4 = (*****p)(x, y);

    int ret5 = (*Add)(x, y);

    printf("ret1 == %d\n", ret1);
    printf("ret2 == %d\n", ret2);
    printf("ret3 == %d\n", ret3);
    printf("ret4 == %d\n", ret4);
    printf("ret5 == %d\n", ret5);
    return 0;
}