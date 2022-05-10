#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	//得到二进制位数
	int sz = sizeof(int) * 8;
	//打印奇数位
	int i = 0;
	printf("奇数位>");
	for (i = 0; i < sz; i += 2) {
		int a = 0;
		if ((n & (1 << i)) != 0) {
			a = 1;
		}
		else {
			a = 0;
		}
		printf("%d ", a);
	}
	printf("\n");
	printf("偶数位>");
	//打印偶数位
	for (i = 1; i < sz; i += 2) {
		int a = 0;
		if ((n & (1 << i)) != 0) {
			a = 1;
		}
		else {
			a = 0;
		}
		printf("%d ", a);
	}

	return 0;
}