#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str);
//
//int main() {
//	char str[] = "abcdef";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//
//	return 0;
//}
////
//int my_strlen(const char *str) {
//	//断言
//	assert(str != NULL);
//	int cnt = 0;
//	while (*str != '\0') {
//		cnt++;
//		str++;
//	}
//	return cnt;
//}

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* source);

int main() {
	char str1[] = "abcdef";
	char str2[20] = "XXXXXXXXXX";
	printf("%s\n", my_strcpy(str2, str1));

	return 0;
}
//
char* my_strcpy(char* dest, const char* source) {
	//断言
	assert(dest);
	assert(source);
	char* str = dest;
	while (*dest++ = *source++) {
		;
	}
	return str;
}

//#include <stdio.h>
//
//
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int cnt = 0;
//
//
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] % 2 == 0) {
//			cnt++;
//		}
//	}
//	//方法1：开辟两个数组分别记录奇数与偶数，再复制到原来数组中
//	/*int* p = (int*)malloc(sizeof(int) * cnt);
//	int* q = (int*)malloc(sizeof(int) * (sz - cnt));
//	int j = 0, k = 0;
//	for (i = 0 ; i < sz; i++) {
//		if (arr[i] % 2 == 0) {
//			p[j++] = arr[i];
//		}
//		else {
//			q[k++] = arr[i];
//		}
//	}
//	for (i = 0; i < sz-cnt; i++) {
//		arr[i] = q[i];
//	}
//	for (k = 0; k < cnt; k++) {
//		arr[i++] = p[k];
//	}*/
//	//﻿方法2：分别对每一个元素进行判断，若是奇数则跳过，若是偶数则准备倒序与数组奇数元素交换。
//	int j = sz - 1;
//	for (i = 0; i < sz; i++) {
//		if (arr[i] % 2 == 0) {
//			while (arr[j] % 2 == 0 && i < j) {
//				j--;
//			}
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//
//
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
