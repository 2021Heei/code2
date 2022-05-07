#define _CRT_SECURE_NO_WARNINGS 1
/*

读入一个整数n和n个整数，并求出其中的最大值，注意n是任意的值，请不要直接定义数组。



输入 


第一行输入n 第二行输入n个整数 



输出 


n个整数中的最大值



样例输入 Copy 

5
12 10 43 100 54
*/
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int a = 0;
	int i = 0;
	int max = 0;
	scanf("%d", &max);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a > max) {
			max = a;
		}
	}
	printf("%d\n", max);
	return 0;
}