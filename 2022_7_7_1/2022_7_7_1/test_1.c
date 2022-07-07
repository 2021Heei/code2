#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//
//////计数法
////size_t my_strlen1(const char* str) {
////	assert(str);
////	size_t count = 0;
////	while (*str) {
////		str++;
////		count++;
////	}
////	return count;
////}
////
//////指针相减法
////size_t my_strlen2(const char* str){
////	assert(str);
////	const char* start = str;
////	while (*str != '\0') {
////		str++;
////	}
////	return str - start;
////}
//
////递归法
//size_t my_strlen3(const char* str) {
//	assert(str);
//	if (*str) {
//		return my_strlen3(str + 1) + 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char str[] = "abcdef";
//	//int ret1 = my_strlen1(str);
//	//int ret2 = my_strlen2(str);
//	int ret3 = my_strlen3(str);
//	//printf("%d\n", ret1);
//	//printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	return 0;
//}

////模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* destination, const char* source) {
//	assert(destination && source);
//	char* start = destination;
//
//	while (*destination++ = *source++) {
//		;
//	}
//	return start;
//}
//int main() {
//	char* str1 = "Hello world!";
//	char str2[20] = { 0 };
//	
//	puts(strcpy(str2, str1));
//
//	return 0;
//}

////模拟实现strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* destination, const char* source) {
//	//断言
//	assert(destination && source);
//	//记录目标字符串首地址
//	char* start = destination;
//	//找到目标字符串的末尾'\0'
//	while (*destination) {
//		destination++;
//	}
//	//复制
//	while (*destination++ = *source++) {
//		;
//	}
//	return start;
//}
//int main() {
//	char* str1 = " world!";
//	char str2[20] = { "Hello\0********"};
//
//	puts(strcat(str2, str1));
//
//	return 0;
//}

////模拟实现strcmp
//#include <stdio.h>
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp1(const char* str1, const char* str2) {
//	//断言
//	assert(str1 && str2);
//	//循环判断
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
////改进的strcmp
//int my_strcmp2(const char* str1, const char* str2) {
//	//断言
//	assert(str1 && str2);
//	//循环判断
//	while (*str1 != '\0' && *str1++ == *str2++) {
//		/*if (*str1 == '\0') {
//			return 0;
//		}*/
//		/*str1++;
//		str2++;*/
//	}
//	return *str1 - *str2;
//}
//
//
//int main() {
//	char str1[] = "abcdefsad";
//	char str2[] = "abcdef";
//
//	int ret = my_strcmp1(str1, str2);
//	if(ret > 0) {
//		printf("str1 > str2\n");
//	}
//	else if (ret == 0) {
//		printf("str1 == str2\n");
//	}
//	else {
//		printf("str1 < str2\n");
//	}
//	return 0;
//}

////长度受限制的函数
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[] = "hello world!";
//	char str2[] = "hello world!";
//	char* p = strncpy(str1, str2, 5);
//	puts(p);
////
////	/*char* p = strncat(str1, str2, -1);
////	puts(p);*/
////	
////	int ret = strcmp(str1, str2, 20);
//	return 0;
//}

////模拟实现strstr
////一般算法 && kmp算法
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2) {
//	//断言
//	assert(str1 && str2);
//	//s1指向待查找的字符串str1
//	const char* s1 = str1;
//	//s2指向字符串str2
//	const char* s2 = str2;
//	//p指向字符串str1，每次s1与s2移动时保持不变，以便当前查找失败时s1能够找到下次查找的位置
//	const char* p = str1;
//
//	while (*p) {
//		//每次查找开始时，s1指向被p更新
//		s1 = p;
//		//s1与s2都没有指向字符串末尾，且二者所指向字符相等
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		//是否到达str2字符串的末尾，若到达就返回本次查找的起始地址
//		if (*s2 == '\0') {
//			return (char*)p;
//		}
//		//本次查找未找到
//		p++;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "aasfb";
//	char str2[] = "b";
//	char* p = my_strstr(str1, str2);
//	if (p) {
//		printf("找到了: %s", p);
//	}
//	else {
//		printf("%s不存在\n", str2);
//	}
//
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[] = "123456789@qq.com";
//	char str2[20] = { 0 };
//	strcpy(str2, str1);
//	char str3[] = { "@." };
//
//	for (char* p = strtok(str2, str3); p != NULL; p = strtok(NULL, str3)) {
//		printf("%s\n", p);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[] = "123456789@qq.com";
//	char str2[20] = { 0 };
//	strcpy(str2, str1);
//	char str3[] = { "@." };
//
//	printf("%s\n", strtok(str2, str3));
//	printf("%s\n", strtok(NULL, str3));
//	strcpy(str2, str1);
//	printf("%s\n", strtok(str2, str3));
//	printf("%s\n", strtok(NULL, str3));
//	printf("%s\n", strtok(NULL, str3));
//
//	return 0;
//}

///* strtok example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}

//strtok
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[] = "1330359162@qq.com";
//	char c[] = "@.";
//	char str2[100] = { 0 };
//	strcpy(str2, str1);
//	char* ret;
//	for (ret = strtok(str2, c); ret != NULL; ret=strtok(NULL, c)) {
//		printf("%s\n", ret);
//	}
//	return 0;
//}

////模拟实现strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//断言，指针destination与指针source接受的均不是NULL
//	assert(destination && source);
//	//记录目标空间地址
//	char* start = destination;
//	while (num-- && (*destination++ = *source++)) {
//		;
//	}
//	num++;
//	destination--;
//	while (num--) {
//		*destination++ = '\0';
//	}
//	return start;
//}
//int main() {
//	char str1[] = "ab";
//	char str2[20] = "************";
//	char* p = my_strncpy(str2, str1, 2);
//	puts(p);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* destination, const char* source, size_t num) {
//	//断言
//	assert(destination && source);
//	//
//	char* start = destination;
//	//
//	while (*destination) {
//		destination++;
//	}
//	//
//	while (num && (*destination++ = *source++)) {
//		num--;
//	}
//	if (!num) {
//		*destination = '\0';
//	}
//	return start;
//}
//int main() {
//	char str1[] = "word!";
//	char str2[20] = "Hello \0**********";
//	char* p = my_strncat(str2, str1, 3);
//	puts(p);
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int my_strncmp(const char* str1, const char* str2, size_t num) {
//	//断言
//	assert(str1 && str2);
//
//	while (*str1 == *str2 && num) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//		num--;
//	}
//	if (num) {
//		return *str1 - *str2;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char str1[] = "abcdef";
//	char str2[] = "aca";
//	int ret = my_strncmp(str1, str2, 3);
//
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[] = "123456789@qq.com";
//	char str2[] = "12345";
//	char* p = strstr(str1, str2);
//	if (p) {
//		puts(p);
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//必须包含的头文件
//int main() {
//	FILE* pFile;
//	//已知记事本hello.text不存在
//	pFile = fopen("hello,txt", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//	char c = 0;
//	scanf("%c", &c);
//	if (isalnum(c)) {
//		printf("是字母或十进制数字\n");
//	}
//	else {
//		printf("不是字母且不是十进制数字\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//	int c = 0;
//	scanf("%d", &c);
//	if (isxdigit(c)) {
//		printf("是十进制数字\n");
//	}
//	else {
//		printf("不是十进制数字\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <ctype.h>

int main() {
	char c = 0;
	scanf("%c", &c);

	c = toupper(c);
	printf("%c", c);

	return 0;
}