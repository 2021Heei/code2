#define _CRT_SECURE_NO_WARNINGS 1

////ģ��ʵ��strlen
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//////������
////size_t my_strlen(const char* str){
////	assert(str);
////	size_t count = 0;
////	while (*str != '\0') {
////		str++;
////		count++;
////	}
////	return count;
////}
//
//////ָ�������
////size_t my_strlen(const char* str) {
////	assert(str);
////	const char* p = str;
////	while (*str != '\0') {
////		str++;
////	}
////	return (size_t)(str - p);
////}
//
////�ݹ鷨
//size_t my_strlen(const char* str) {
//	assert(str);
//	if (*str != '\0') {
//		return my_strlen(str + 1) + 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char str[] = "abcdef";
//	int ret1 = strlen(str);
//	int ret2 = my_strlen(str);
//	printf("%d\n%d", ret1, ret2);
//	return 0;
//}

////ģ��ʵ��strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* sour) {
//	assert(dest && sour);
//	char* start = dest;
//	while (*dest++ = *sour++)
//		;
//	return start;
//}
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

////ģ��ʵ��strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* sour) {
//	assert(dest && sour);
//	char* start = dest;
//	while (*dest) {
//		dest++;
//	}
//	while (*dest++ = *sour++) {
//		;
//	}
//	return start;
//}
//int main() {
//	char arr[20] = "hello ";
//	my_strcat(arr, arr);
//	printf("%s", arr);
//
//	return 0;
//}