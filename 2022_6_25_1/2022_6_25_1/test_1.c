#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//int main() {
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main() {
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//		printf("%d %d\n", strlen(a), a[i]);
//		Sleep(100);
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	unsigned char i;
//	for (i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main() {
	if (strlen("abc") - strlen("abcdef") >= 0) {
		printf(">=\n");
	}
	else {
		printf("<\n");
	}
	return 0;
}