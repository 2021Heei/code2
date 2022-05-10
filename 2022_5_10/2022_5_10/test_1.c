#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int a=1999, b=2299;
//	//scanf("%d%d", &a, &b);
//	char* p1 = (char*)&a;
//	char* p2 = (char*)&b;
//	int i = 0;
//	int cnt = 0;
//	for (i = 0; i < 32; i++) {
//		if ((int)(p1[i]) != (int)(p2[i])) {
//			cnt++;
//		}
//	}
//	printf("%d\n", cnt);
//
//	return 0;
//}

#include <stdio.h>

int main() {
	int a;
	int b;
	scanf("%d%d", &a, &b);
	//���֮��c�д�Ŷ�����������1�ĸ�������a��b��ͬλ�ĸ���
	int c = a ^ b;
	int i = 0;
	int cnt = 0;
	//����(1������)��cÿ�ξ���(1�����ƵĽ��)���а�λ�룬
	//���0���λ����1������Ƿ�0���λ��1
	//����32λ��int����32�αȽ�ѭ��
	for (i = 0; i < 32; i++) {
		if ((c & (1 << i)) != 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}