#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	//�õ�������λ��
	int sz = sizeof(int) * 8;
	//��ӡ����λ
	int i = 0;
	printf("����λ>");
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
	printf("ż��λ>");
	//��ӡż��λ
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