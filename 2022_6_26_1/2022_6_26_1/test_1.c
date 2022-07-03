#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <limits.h>
//
//enum color {
//	RED = 100,
//	YELLOW = 200,
//	BLUE
//};
//union data {
//	int a;
//	float b;
//	double c;
//};
//int main() {
//	enum color a = RED;
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int check_ststem();
//
//int main() {
//    if (check_ststem()) {
//        printf("小端\n");
//    }
//    else {
//        printf("大端\n");
//    }
//    return 0;
//}
//int check_ststem() {
//    int a = 1;
//    //00000000 0000000 00000000 00000001 - 二进制序列
//    //0x00 00 00 01 - 16进制序列
//    char* p = (char*)&a;
//    return *p;
//}

//#include <stdio.h>
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i = -20;
//	unsigned  int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//
////i 10000000 00000000 00000000 00010100 - 原码
////  11111111 11111111 11111111 11101011 - 反码
////  11111111 11111111 11111111 11101100 - 补码
////---------------------------------------------
////j 00000000 00000000 00000000 00001010 - 原码、反码、补码
////---------------------------------------------
////11111111 11111111 11111111 11101100 - i - 补码
////00000000 00000000 00000000 00001010 - j - 补码
////11111111 11111111 11111111 11110110 - i + j - 补码
////以%d形式输出
////11111111 11111111 11111111 11110110 - 补码
////10000000 00000000 00000000 00001001 - 反码
////10000000 00000000 00000000 00001010 - 原码 -> -10

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		printf("%d %d\n", strlen(a), a[i]);
//		Sleep(200);
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
// 
//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//
//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	//9 - 00000000 00000000 00000000 00001001 - 原码、反码、补码
	//单精度浮点数视角
	//0 00000000 00000000000000000001001
	//(-1)*0 * 0.00000000000000000001001 * 2^(-126) ->1.001*2^(-146) -> 0.000000
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	//9.0 - (-1)*0 * 1.001 * 2^3
	//S==0, M==1.001, E==3
	//0 10000010 00100000000000000000000
	//有符号整数视角
	//01000001 00010000 00000000 00000000 - 补码、反码、原码 -> 1,091,567,616

	return 0;
}