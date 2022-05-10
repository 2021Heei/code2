#define _CRT_SECURE_NO_WARNINGS 1
/*链接
输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
数据范围：- 2^{31} <= n <= 2^{31}-1−2 31 <=n<=2 31 −1
即范围为:-2147483648<= n <= 2147483647−2147483648<=n<=2147483647
示例1输入
10
输出
2
说明十进制中10的32位二进制表示为0000 0000 0000 0000 0000 0000 0000 1010，其中有两个1。       
示例2
输入
-1
输出
32
说明负数使用补码表示 ，-1的32位二进制表示为1111 1111 1111 1111 1111 1111 1111 1111，其中32个1    */
#include<stdio.h>

int binary_bit(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	int ret = binary_bit(n);
	printf("%d\n", ret);
	return 0;
}

int binary_bit(int n) {
	int sz = sizeof(int) * 8;
	int i = 0;
	int cnt = 0;
	for (i = 0; i < sz; i++) {
		if ((n & (1 << i)) != 0) {
			cnt++;
		}
	}
	return cnt;
}