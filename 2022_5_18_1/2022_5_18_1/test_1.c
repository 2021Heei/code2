#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int arr1[4] = { 1,2,3,4, };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 9,10,11,12 };
	int* p[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;
		for (j = 0; j < 4; j++) {
			printf("%-2d ", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}