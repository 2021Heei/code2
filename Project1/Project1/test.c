#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int isnum(int a, int b);
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    int ret = isnum(a, b);
//    int cnt = 1.0 * a * b / ret;
//    printf("%d\n", cnt);
//
//    return 0;
//}
////
//int isnum(int a, int b) {
//    int c = 0;
//    while (b != 0) {
//        c = b;
//        b = a % b;
//        a = c;
//    }
//    return a;
//}

#include <stdio.h>

int main() {
	char str[101] = { 0 };
	gets(str);
	char s[101][101] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	int len = strlen(str);
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			s[k][j] = str[i];
			j++;
			i++;
		}
		else {
			k++;
			j = 0;
			i++;
		}
		
	}
	for (i = k; i >= 0; i--) {
		printf("%s ", s[i]);
	}

	return 0;
}