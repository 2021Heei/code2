#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main() {
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if ((((b == 2) + (a == 3)) == 1) &&
//							(((b == 2) + (e == 4)) == 1) &&
//							(((c == 1) + (d == 2)) == 1) &&
//							(((c == 5) + (d == 3)) == 1) &&
//							(((e == 4) + (a == 1)) == 1)) {
//							if (a * b * c * d * e == 120 && a + b + c + d + e == 15) {
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//			printf("%c", killer);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int t = 1;
//	for (t = 0; t < 4; t++) {
//		if ((t + 'a' != 'a') + (t + 'a' == 'c') + (t + 'a' == 'd') + (t + 'a' != 'd') == 3) {
//						printf("%c", t+'a');
//					}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int find_string(const char* str1, const char* str2) {
//	assert(str1 != NULL && str2 != NULL);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	strncat(str1, str1, len1);
//	if (len1 == len2) {
//		char* p = strstr(str1, str2);
//		if (p != NULL) {
//			return 1;
//		}
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[20] = "abcdef";
//	char arr2[] = "a";
//	int ret = find_string(arr, arr2);
//	if (ret) {
//		printf("找到了\n");
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int find_string(char* str1, const char* str2) {
//	assert(str1 != NULL && str2 != NULL);
//	int len1 = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len1; i++) {
//		char tmp = str1[0];
//		int j = 0;
//		for (j = 0; j < len1-1; j++) {
//			str1[j] = str1[j + 1];
//		}
//		str1[len1 - 1] = tmp;
//		if (strcmp(str1, str2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	char arr[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = find_string(arr, arr2);
//	if (ret) {
//		printf("找到了\n");
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* left, char* right) {
//	assert(left != NULL && right != NULL);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char str[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(str);
//	k %= len;
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//	printf("%s", str);
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
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%3d", arr[i][j]);
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
//	int arr[30][30] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < 2 * n - 1; j++) {
//			if (i + j == n - 1 && j<=n-1) {
//				arr[i][j] = 1;
//			}
//			if (i == j - (n - 1) && j > n-1) {
//				arr[i][j] = 1;
//			}
//			if (j > n - 1 - i && j < n - 1 + i && i>=1) {
//				/*if (i % 2 == j % 2) {
//					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
//				}*/
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < 2 * n - 1; j++) {
//			if (arr[i][j] != 0) {
//				printf("%3d", arr[i][j]);
//			}
//			else {
//				printf("   ");
//			}
//			//printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//struct ret {
//	int x;
//	int y;
//};
//
//struct ret find(int arr[4][4],int r, int c, int n) {
//	struct ret a = { 0,c - 1 };
//	while (a.x < r && a.y >= 0) {
//		if (n < arr[a.x][a.y]) {
//			a.y--;
//		}
//		else if (n > arr[a.x][a.y]) {
//			a.x++;
//		}
//		else {
//			return a;
//		}
//	}
//	a.x = -1;
//	a.y = -1;
//	return a;
//}
//int main() {
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = find(arr, 4, 4, n);
//	if (ret == 1) {
//		printf("找到了\n");
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//struct ret {
//	int x;
//	int y;
//};
//
//struct ret find(int arr[4][4], int r, int c, int n) {
//	struct ret a = { 0,c - 1 };
//	while (a.x < r && a.y >= 0) {
//		if (n < arr[a.x][a.y]) {
//			a.y--;
//		}
//		else if (n > arr[a.x][a.y]) {
//			a.x++;
//		}
//		else {
//			return a;
//		}
//	}
//	a.x = -1;
//	a.y = -1;
//	return a;
//}
//int main() {
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = 0;
//	scanf("%d", &n);
//
//	struct ret b = find(arr, 4, 4, n);
//	if (b.x != -1) {
//		printf("找到了! %d %d\n", b.x,b.y);
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//struct ret {
//	int x;
//	int y;
//};
//
//struct ret find(int arr[4][4], int r, int c, int n) {
//	int x = 0;
//	int y = c - 1;
//	struct ret a = { -1, -1 };
//	while (x < r && y >= 0) {
//		if (n < arr[x][y]) {
//			y--;
//		}
//		else if (n > arr[x][y]) {
//			x++;
//		}
//		else {
//			a.x = x;
//			a.y = y;
//			return a;
//		}
//	}
//
//	return a;
//}
//int main() {
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = 0;
//	scanf("%d", &n);
//	int x = 4;
//	int y = 4;
//	struct ret b = find(arr, x, y, n);
//	if (b.x != -1) {
//		printf("找到了! %d %d\n", b.x,b.y);
//	}
//	else {
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//
//int find(int arr[4][4], int* px, int* py, int n) {
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (n < arr[x][y]) {
//			y--;
//		}
//		else if (n > arr[x][y]) {
//			x++;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main() {
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = 0;
//	while (scanf("%d", &n) == 1) {
//		int x = 4;
//		int y = 4;
//		int ret = find(arr, &x, &y, n);
//		if (ret != -1) {
//			printf("找到了! %d %d\n", x, y);
//		}
//		else {
//			printf("没找到\n");
//		}
//	}
//	return 0;
//}

