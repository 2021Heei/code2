#define _CRT_SECURE_NO_WARNINGS 1
/*

����һ������n��n����������������е����ֵ��ע��n�������ֵ���벻Ҫֱ�Ӷ������顣



���� 


��һ������n �ڶ�������n������ 



��� 


n�������е����ֵ



�������� Copy 

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