#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memcpy(void* destination, const void* source, size_t num) {
//	assert(destination != NULL && source != NULL);
//	void* start = destination;
//	while (num--) {
//		*(char*)destination = *(char*)source;
//		destination = (char*)destination + 1;
//		source = (char*)source + 1;
//	}
//	return start;
//}
//
//int main(){
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//void* my_memmove(void* destination, const void* source, size_t num) {
//	//断言
//	assert(destination != NULL && source != NULL);
//	void* start = destination;
//	if (destination <= source) {
//		//前->后
//		while (num--) {
//			*(char*)destination = *(char*)source;
//			destination = (char*)destination + 1;
//			source = (char*)source + 1;
//		}
//	}
//	else {
//		//后->前
//		while (num--) {
//			*((char*)destination + num) = *((char*)source + num);
//		}
//	}
//	return start;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//int my_memcmp(const void* ptr1, const void* ptr2, size_t num) {
//	//断言
//	assert(ptr1 != NULL && ptr2 != NULL);
//	while (num-- && *(char*)ptr1 == *(char*)ptr2) {
//		ptr1 = (char*)ptr1 + 1;
//		ptr2 = (char*)ptr2 + 1;
//	}
//	return *(char*)ptr1 - *(char*)ptr2;
//}
//
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 2,3,4,5,6 };
//	int ret = my_memcmp(arr1, arr2, 10);
//	if (ret > 0) {
//		printf("arr1 > arr2\n");
//	}
//	else if (ret == 0) {
//		printf("arr1 == arr2\n");
//	}
//	else {
//		printf("arr1 < arr2\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[] = "hell0 world!";
//	memset(str + 3, '@', 5);
//	puts(str);
//
//	return 0;
//}

#include <stdio.h>
#include <assert.h>

void* my_memset(void* ptr, int value, size_t num) {
	//断言
	assert(ptr != NULL);
	while (num--) {
		*((char*)ptr + num) = value;
	}
	
	return ptr;
}
int main() {
	int arr[20] = { 0 };

	my_memset(arr , 5, 20);

	return 0;
}