#define _CRT_SECURE_NO_WARNINGS 1
///* yh-rt1.c - 时间和空间最优算法 */
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int s = 1, h;                    // 数值和高度
//    int i, j;                        // 循环计数
//    scanf("%d", &h);                 // 输入层数
//    printf("1\n");                   // 输出第一个 1
//    for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
//    {
//        printf("1 ");                // 第一个 1
//        for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
//            //printf("%d ", (s = (i - j) / j * s));
//            printf("%d ", (s = (i - j) * s / j));
//        printf("1\n");               // 最后一个 1，换行
//    }
//    getchar();                       // 暂停等待
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < n; j++) {
//			if (i == j || j == 0) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			if (i >= j) {
//				printf("%3d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < n; j++) {
//			if (i == j || j == 0) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	int j = 0;
//	/*for (i = 0; i < n; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[30][30] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++) {
		int j = 0;
		for (j = 0; j < 2 * n - 1; j++) {
			if (i + j == n - 1 && j <= n - 1) {
				arr[i][j] = 1;
			}
			if (i == j - (n - 1) && j > n - 1) {
				arr[i][j] = 1;
			}
			if (j > n - 1 - i && j < n - 1 + i && i >= 1) {
				/*if (i % 2 == j % 2) {
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
				}*/
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
			}
		}
	}
	for (i = 0; i < n; i++) {
		int j = 0;
		for (j = 0; j < 2 * n - 1; j++) {
			if (arr[i][j] != 0) {
				printf("%4d", arr[i][j]);
			}
			else {
				printf("    ");
			}
			//printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}