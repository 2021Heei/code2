#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceSpace(char* str, int length);
void replaceSpace2(char* str, int length);

int main() {
    char str[100] = "are you ok!";
    replaceSpace2(str, strlen(str));
    puts(str);
	return 0;
}

void replaceSpace(char* str, int length) {
    //�ҿո���
    int cnt = 0;
    char* start = str;
    while (*start) {
        if (*start == ' ') {
            cnt++;
        }
        start++;
    }
    //�Ӻ���ǰ�ƣ������ո�
    //ǰ���±�
    int end1 = length - 1;
    int end2 = length - 1 + 2 * cnt;
    while (end1 != end2) {
        if (str[end1] != ' ') {
            str[end2--] = str[end1--];
        }
        else {
            str[end2--] = '0';
            str[end2--] = '2';
            str[end2--] = '%';
            end1--;
        }
    }
}

void replaceSpace2(char* str, int length) {
    //�ҿո�����
    char* start = str;
    int cnt = 0;
    while (*start) {
        if (*start == ' ') {
            cnt++;
        }
        start++;
    }
    int len1 = length;
    int len2 = length + 2 * cnt;
    //�������������ַ���
    char* s = (char*)malloc(sizeof(char) * (len2+1));
    start = str;
    char* ps = s;
    while (*start) {
        if (*start != ' ') {
            *ps++ = *start++;
        }
        else {
            start++;
            *ps++ = '%';
            *ps++ = '2';
            *ps++ = '0';
        }
    }
    *ps = '\0';
    strcpy(str, s);
    free(s);
    s = NULL;
}