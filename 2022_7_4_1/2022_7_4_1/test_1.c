#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n = 0;
//    int m = 0;
//    int* p1 = (int*)malloc(sizeof(int) * n);
//    int* p2 = (int*)malloc(sizeof(int) * m);
//    int* p3 = (int*)malloc(sizeof(int) * (n + m));
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &p1[i]);
//    }
//    for (i = 0; i < m; i++) {
//        scanf("%d", &p2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    for (i = 0; i < n + m; i++) {
//        if (j < n && k < m) {
//            if (p1[j] <= p2[k]) {
//                p3[i] = p1[j];
//                j++;
//            }
//            else if (p1[j] > p2[k]) {
//                p3[i] = p2[k];
//                k++;
//            }
//        }
//        else if (j < n && k >= m) {
//            p3[i] = p1[j];
//            j++;
//        }
//        else {
//            p3[i] = p2[k];
//            k++;
//        }
//    }
//    for (i = 0; i < n + m; i++) {
//        printf("%d ", p3[i]);
//    }
//    free(p1);
//    free(p2);
//    free(p3);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n = 0;
//    int m = 0;
//    int* p1 = (int*)malloc(sizeof(int) * n);
//    int* p2 = (int*)malloc(sizeof(int) * m);
//         int* p3 = (int*)malloc(sizeof(int)*(n+m));
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &p1[i]);
//    }
//    for (i = 0; i < m; i++) {
//        scanf("%d", &p2[i]);
//    }
//
//    int j = 0;
//    i = 0;
//    while (i < n && j < m) {
//        if (p1[i] < p2[j]) {
//            printf("%d ", p1[i]);
//            i++;
//        }
//        else {
//            printf("%d ", p2[j]);
//            j++;
//        }
//    }
//    while (i == n && j < m) {
//        printf("%d ", p2[j]);
//        j++;
//    }
//    while (i < n && j == m) {
//        printf("%d ", p1[i]);
//        i++;
//    }
//         int j = 0;
//         int k = 0;
//         for(i=0; i<n+m; i++){
//             if(j<n && k<m){
//                 if(p1[j]<=p2[k]){
//                     p3[i] = p1[j];
//                     j++;
//                 }
//                 else{
//                     p3[i] = p2[k];
//                     k++;
//                 }
//             }
//             else if(j<n && k==m){
//                 p3[i] = p1[j];
//                 j++;
//             }
//             else if(j==n && k<m){
//                 p3[i] = p2[k];
//                 k++;
//             }
//         }
//         for(i=0; i<n+m; i++){
//             printf("%d ", p3[i]);
//         }
//         free(p1);
//         free(p2);
//         free(p3);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;
//    int t = 0;
//    int arr[1000] = { 0 };
//    int i = 0;
//    int cnt = 0;
//    while (n) {
//        t = n % 10;
//        if (t % 2 == 0) {
//            arr[i] = 0;
//        }
//        else {
//            arr[i] = 1;
//        }
//        n /= 10;
//        i++;
//        cnt++;
//    }
//    for (i = cnt - 1; i >= 0; i--) {
//        m = m * 10 + arr[i];
//    }
//    printf("%d", m);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++) {
//        int j = 0;
//        for (j = 1; j <= 2 * n; j++) {
//            if (j % 2 != 0 && j > 2 * n - 2 * i) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("%\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;//记录结果
//    ﻿int t = 0;//记录余数
//    ﻿int arr[1000] = { 0 };
//    int i = 0;
//    int cnt = 0;//记录位数
//    while (n) {
//        t = n % 10;
//        if (t % 2 == 0) {
//            arr[i] = 0;
//        }
//        else {
//            arr[i] = 1;
//        }
//        n /= 10;
//        i++;
//        cnt++;
//    }
//    for (i = cnt - 1; i >= 0; i--) {
//        m = m * 10 + arr[i];
//    }
//    printf("%d", m);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* p1 = (int*)malloc(sizeof(int) * n);
//    int* p2 = (int*)malloc(sizeof(int) * m);
//    int* p3 = (int*)malloc(sizeof(int) * (n + m));
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &p1[i]);
//    }
//    for (i = 0; i < m; i++) {
//        scanf("%d", &p2[i]);
//    }
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m) {
//        if (p1[i] < p2[j]) {
//            p3[k++] = p1[i++];
//        }
//        else {
//            p3[k++] = p2[j++];
//        }
//    }
//    while (i == n && j < m) {
//        p3[k++] = p2[j++];
//    }
//    while (i < n && j == m) {
//        p3[k++] = p1[i++];
//    }
//    for (i = 0; i < n + m; i++) {
//        printf("%d ", p3[i]);
//    }
//    free(p1);
//	  p1 = NULL;
//    free(p2);
//    p2 = NULL;
//    free(p3);
//    p3 = NULL;
//    return 0;
//}
////打印杨辉三角
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < n ; j++) {
//			if (i == j || j == 0) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			if (i >= j) {
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//a b c d a b c d

//#include <stdio.h>
//#include <stdlib.h>
//﻿
//int main() {
//	int k = 0;
//	scanf("%d", &k);
//	char str[] = "abcdef";
//	int sz = sizeof(str) / sizeof(str[0]);
//	char* p = (char*)malloc(sizeof(char) * sz * 2);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		p[i] = str[i];
//		p[i + sz - 1] = str[i];
//	}
//	k %= sz - 1;
//	for (i = k; i < sz - 1 + k; i++) {
//		printf("%c", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////字符串左旋
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* p, int left, int right) {
//	while (left < right) {
//		char ch = p[left];
//		p[left] = p[right];
//		p[right] = ch;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int k = 0;
//	scanf("%d", &k);
//	char str[] = "abcdef";
//	int sz = strlen(str);
//	reverse(str, 0, k - 1);
//	reverse(str, k, sz-1);
//	reverse(str, 0, sz-1);
//	puts(str);
//	return 0;
//}

//杨氏矩阵
#include <stdio.h>

int main() {
	int arr[5][5] = { 1,2,3,4,5,
					  2,3,4,5,6,
					  3,4,5,6,7 };
	int n = 0;
	scanf("%d", &n);

	int x = 0;
	int y = 4;
	int flag = 0;//默认0为不存在，1为存在
	while (x < 5 && y >= 0) {
		if (arr[x][y] < n) {
			//一行中最大的元素小于n，这一行就不考虑了
			x++;
		}
		else if (arr[x][y] > n) {
			//一列中最小的元素大于n，这一列就不考虑了
			y--;
		}
		else {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("存在\n");
	}
	else {
		printf("不存在\n");
	}
	return 0;
}