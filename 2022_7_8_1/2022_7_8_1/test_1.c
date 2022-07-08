#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strcmp
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2) {
//	//断言
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

////模拟实现strstr
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2) {
//	//断言
//	assert(str1 && str2);
//	//指向第一个字符串，参与比较
//	const char* p1 = str1;
//	//指向第二个字符串，参与比较
//	const char* p2 = str2;
//	//指向第一个字符串，记录本次查找的起始地址
//	const char* pp1 = str1;
//	while (pp1) {
//		//本次查找开始，更新p1
//		p1 = pp1;
//		//更新p2
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
//		printf("没找到\n");
//	}
//
//	char* p2 = my_strstr(str1, str2);
//	if (p2) {
//		printf("%s\n", p2);
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

////模拟实现memcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* destination, const void* source, size_t num) {
//	//断言
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

////模拟实现memcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memmove(void* destination, const void* source, size_t num) {
//	//断言
//	assert(destination && source);
//	//指针不动，以字节的形式从后往前依次复制
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


