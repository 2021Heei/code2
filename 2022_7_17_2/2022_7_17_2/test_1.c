#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	while (1) {
//		malloc(1);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main() {
//	int* p1 = (int*)calloc(10, sizeof(int));
//	if (p1 == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p1 + i));
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main() {
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	//
//	int* ptr = (int*)realloc(p, sizeof(int) * INT_MAX);
//	if (ptr != NULL) {
//		p = ptr;
//	}
//	else {
//		printf("%s", strerror(errno));
//	}
//	for (i = 0; i < 20; ++i) {
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//#include <stdio.h>
//get_memory(char* p) {
//	p = (char*)malloc(100);//内存泄漏
//}
//void test() {
//	char* str = NULL;
//	get_memory(str);//传值调用，str仍是NULL
//	strcpy(str, "sadas");//程序崩溃
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

get_memory(char** p) {
	*p = (char*)malloc(100);//内存泄漏
}
void test() {
	char* str = NULL;
	get_memory(&str);//传值调用，str仍是NULL
	strcpy(str, "sadas");//程序崩溃
	printf(str);
	free(str);
	str = NULL;
}
int main() {
	test();
	return 0;
}
