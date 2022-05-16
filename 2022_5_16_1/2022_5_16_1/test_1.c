#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void reverse_string(char* string);
int my_strlen(char* str);

int main() {
	char str[20] = "abcdef";
	reverse_string(str);
	puts(str);

	return 0;
}
//×Ö·û´®ÄæĞò
void reverse_string(char* string) {
	char t = *string;
	int len = my_strlen(string);
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (my_strlen(string+1) >=2) {
		reverse_string(string + 1);
	}
	*(string + len - 1) = t;
}

//
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

//Ñ­»·ÊµÏÖ
//#include <stdio.h>
//#include <stdio.h>
//
//void reverse_str(char* str, int left, int right);
//
//int main() {
//	char str[] = "abcdefg";
//	int left = 0;
//	int right = strlen(str) - 1;
//
//	reverse_str(str, left, right);
//	puts(str);
//
//	return 0;
//}
////
//void reverse_str(char* str, int left, int right) {
//	while (left < right) {
//		char t = str[left];
//		str[left] = str[right];
//		str[right] = t;
//		left++;
//		right--;
//	}
//}

////µİ¹éÊµÏÖ
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