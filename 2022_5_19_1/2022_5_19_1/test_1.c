#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	//钱数
	int x = 0;
	scanf("%d", &x);
	//当前汽水数
	int m = x;
	//当前汽水瓶数
	int n = x;
	int i = 0;
	//总汽水数
	int num = 0;
	while (m > 0) {
		num += m;
		//更新当前汽水数
		m = n / 2;
		//更新当前汽水瓶数
		n = n - n / 2;
	}
	printf("%d\n", num);
	return 0;
}