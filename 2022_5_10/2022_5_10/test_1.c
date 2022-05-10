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
	//异或之后c中存放二进制中所有1的个数就是a、b不同位的个数
	int c = a ^ b;
	int i = 0;
	int cnt = 0;
	//借用(1的左移)，c每次均与(1的左移的结果)进行按位与，
	//结果0则该位不是1，结果是非0则该位是1
	//对于32位的int进行32次比较循环
	for (i = 0; i < 32; i++) {
		if ((c & (1 << i)) != 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}