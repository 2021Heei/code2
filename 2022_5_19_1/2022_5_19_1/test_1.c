#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	//Ǯ��
	int x = 0;
	scanf("%d", &x);
	//��ǰ��ˮ��
	int m = x;
	//��ǰ��ˮƿ��
	int n = x;
	int i = 0;
	//����ˮ��
	int num = 0;
	while (m > 0) {
		num += m;
		//���µ�ǰ��ˮ��
		m = n / 2;
		//���µ�ǰ��ˮƿ��
		n = n - n / 2;
	}
	printf("%d\n", num);
	return 0;
}