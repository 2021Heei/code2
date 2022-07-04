//#define _CRT_SECURE_NO_WARNINGS 1
///*调整数组使奇数全部都位于偶数前面。
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//
//*/
//
//#include <stdio.h>
//
//void move_arr(int arr[], int sz);
//
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//	move_arr(arr, sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void move_arr(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right) {
//		//左边找偶数
//		while (left < right && arr[left] % 2 == 1) {
//			left++;//奇数便跳过
//		}
//		//右边找奇数
//		while (left < right && arr[right] % 2 == 0) {
//			right--;//偶数便跳过
//		}
//		//交换奇偶数
//		if (left < right) {
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int j = sz - 1;
//	for (i = 0; i < sz; i++) {
//		//左边找偶数
//		if (arr[i] % 2 == 0) {
//			//右边找奇数
//			while (arr[j] % 2 == 0 && i < j) {
//				j--;
//			}
//			//交换奇偶数
//			int t = arr[i];
//			arr[i] = arr[j];
//			arr[j] = t;
//		}
//	}
//
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


