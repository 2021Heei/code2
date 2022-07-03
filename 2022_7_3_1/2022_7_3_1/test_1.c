#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	/*char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("%c", ch);*/
//	const char* p = "abcdef";
//	printf("%s", p);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2) {
//		printf("p1 == p2\n");
//	}
//	else {
//		printf("p1 != p2\n");
//	}
//
//	if (arr1 == arr2) {
//		printf("arr1 == arr2\n");
//	}
//	else {
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			/*printf("%d ", *(parr[i] + j));*/
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int (*p1)[10] = &arr;
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//	int* p1 = arr;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", p1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void printf1(int arr[3][5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf2(int (*p)[5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//printf1(arr, 3, 5);
//	printf2(arr, 3, 5);
//	return 0;
//}

#include <stdio.h>

int Add(int x, int y) {
	return x + y;
}

int main() {
	//int (*p)(int, int) = &Add;
	int (*p)(int, int) = Add;
	int ret = (*****************************p)(3, 5);
	//int ret = p(3, 5);
	/*int ret = Add(3, 5);*/
	//int ret = (*Add)(3, 5);

	printf("%d ", ret);
	return 0;
}