#define _CRT_SECURE_NO_WARNINGS 1

////ģ��ʵ��strcmp
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2) {
//	//����
//	assert(str1 && str2);
//	while (*str1 != '\0' && *str1++ == *str2++) {
//		;
//	}
//	return *str1 - *str2;
//}
//int main() {
//	char str1[] = "abcdef";
//	char str2[] = "abc";
//
//	int ret = my_strcmp(str1, str2);
//	if (ret > 0) {
//		printf(">\n");
//	}
//	else if (ret == 0) {
//		printf("=\n");
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}

////ģ��ʵ��strstr
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2) {
//	//����
//	assert(str1 && str2);
//	//ָ���һ���ַ���������Ƚ�
//	const char* p1 = str1;
//	//ָ��ڶ����ַ���������Ƚ�
//	const char* p2 = str2;
//	//ָ���һ���ַ�������¼���β��ҵ���ʼ��ַ
//	const char* pp1 = str1;
//	while (pp1) {
//		//���β��ҿ�ʼ������p1
//		p1 = pp1;
//		//����p2
//		p2 = str2;
//		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0') {
//			return pp1;
//		}
//		pp1++;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "acccdef";
//	char str2[] = "ccde";
//	char* p1 = strstr(str1, str2);
//	if (p1) {
//		printf("%s\n", p1);
//	}
//	else {
//		printf("û�ҵ�\n");
//	}
//
//	char* p2 = my_strstr(str1, str2);
//	if (p2) {
//		printf("%s\n", p2);
//	}
//	else {
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

////ģ��ʵ��memcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* destination, const void* source, size_t num) {
//	//����
//	assert(destination && source);
//	void* start = destination;
//	while (num--) {
//		*(char*)destination = *(char*)source;
//		((char*)destination)++;
//		((char*)source)++;
//	}
//	return start;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 11,11,11,11,11,11,11,11,11,11 };
//	size_t num = 0;
//	scanf("%d", &num);
//	int* p = (int*)my_memcpy(arr2, arr1, num);
//	int i = 0;
//	for (i = 0; i < num/sizeof(int); i++) {
//		printf("%d ", p[i]);
//	}
//
//	return 0;
//}

////ģ��ʵ��memcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memmove(void* destination, const void* source, size_t num) {
//	//����
//	assert(destination && source);
//	//ָ�벻�������ֽڵ���ʽ�Ӻ���ǰ���θ���
//	while (num) {
//		num--;
//		*((char*)destination + num) = *((char*)source + num);
//	}
//	return destination;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 11,11,11,11,11,11,11,11,11,11 };
//	size_t num = 0;
//	scanf("%d", &num);
//	int* p = (int*)memmove(arr1+3, arr1, num);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", p[i]);
//	}
//
//	return 0;
//}

// 


