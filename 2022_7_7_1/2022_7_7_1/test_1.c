#define _CRT_SECURE_NO_WARNINGS 1

////ģ��ʵ��strlen
//#include <stdio.h>
//#include <assert.h>
//
//////������
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
//////ָ�������
////size_t my_strlen2(const char* str){
////	assert(str);
////	const char* start = str;
////	while (*str != '\0') {
////		str++;
////	}
////	return str - start;
////}
//
////�ݹ鷨
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

////ģ��ʵ��strcpy
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

////ģ��ʵ��strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* destination, const char* source) {
//	//����
//	assert(destination && source);
//	//��¼Ŀ���ַ����׵�ַ
//	char* start = destination;
//	//�ҵ�Ŀ���ַ�����ĩβ'\0'
//	while (*destination) {
//		destination++;
//	}
//	//����
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

////ģ��ʵ��strcmp
//#include <stdio.h>
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp1(const char* str1, const char* str2) {
//	//����
//	assert(str1 && str2);
//	//ѭ���ж�
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
////�Ľ���strcmp
//int my_strcmp2(const char* str1, const char* str2) {
//	//����
//	assert(str1 && str2);
//	//ѭ���ж�
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

////���������Ƶĺ���
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

////ģ��ʵ��strstr
////һ���㷨 && kmp�㷨
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2) {
//	//����
//	assert(str1 && str2);
//	//s1ָ������ҵ��ַ���str1
//	const char* s1 = str1;
//	//s2ָ���ַ���str2
//	const char* s2 = str2;
//	//pָ���ַ���str1��ÿ��s1��s2�ƶ�ʱ���ֲ��䣬�Ա㵱ǰ����ʧ��ʱs1�ܹ��ҵ��´β��ҵ�λ��
//	const char* p = str1;
//
//	while (*p) {
//		//ÿ�β��ҿ�ʼʱ��s1ָ��p����
//		s1 = p;
//		//s1��s2��û��ָ���ַ���ĩβ���Ҷ�����ָ���ַ����
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		//�Ƿ񵽴�str2�ַ�����ĩβ��������ͷ��ر��β��ҵ���ʼ��ַ
//		if (*s2 == '\0') {
//			return (char*)p;
//		}
//		//���β���δ�ҵ�
//		p++;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "aasfb";
//	char str2[] = "b";
//	char* p = my_strstr(str1, str2);
//	if (p) {
//		printf("�ҵ���: %s", p);
//	}
//	else {
//		printf("%s������\n", str2);
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

////ģ��ʵ��strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//���ԣ�ָ��destination��ָ��source���ܵľ�����NULL
//	assert(destination && source);
//	//��¼Ŀ��ռ��ַ
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
//	//����
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
//	//����
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
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//���������ͷ�ļ�
//int main() {
//	FILE* pFile;
//	//��֪���±�hello.text������
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
//		printf("����ĸ��ʮ��������\n");
//	}
//	else {
//		printf("������ĸ�Ҳ���ʮ��������\n");
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
//		printf("��ʮ��������\n");
//	}
//	else {
//		printf("����ʮ��������\n");
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