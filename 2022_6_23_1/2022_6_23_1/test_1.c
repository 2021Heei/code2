#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	printf("Hello World!\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		arr[i] = i;
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for(i=0; i<=12; i++){
		arr[i] = 0;
		printf("heei\n");
	}
	return 0;
}