#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("isleap\n");
    }
    else {
        printf("is not leap");
    }
    return 0;
}