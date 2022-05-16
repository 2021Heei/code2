#define _CRT_SECURE_NO_WARNINGS 1
////递归实现
//#include <stdio.h>
//
//void reverse_str(char* str, int left, int right);
//int my_strlen(char* str);
//
//int main() {
//	char str[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	reverse_str(str, left, right);
//
//	printf("%s\n", str);
//	return 0;
//}
//void reverse_str(char* str, int left, int right) {
//	if (left < right) {
//		char t = str[left];
//		str[left] = str[right];
//		str[right] = t;
//		reverse_str(str, left + 1, right - 1);
//	}
//}
////
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str+1);
//	}
//	else {
//		return 0;
//	}
//}

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdef";
    //求字符串的大小，包括'\0'在内
    int sz = strlen(str) + 1;
    //动态内存分配，申请一个大小为sz的字符数组
    char* p = (char*)malloc(sizeof(char) * sz);
    int i = 0;
    int j = 0;
    for (i = 0, j = sz - 2; j >= 0; i++, j--) {
        p[i] = str[j];
    }
    //为申请的字符数组添上字符'\0'
    p[i] = '\0';
    //拷贝回原来字符数组
    strcpy(str, p);

    printf("%s\n", str);
    free(p);
    p = NULL;
    return 0;
}