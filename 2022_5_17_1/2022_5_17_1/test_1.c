#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (; p < &arr[sz]; p++) {
//		printf("%d ", *p);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void reverse_str(char* str);
//
//int main() {
//    char str[200] = { 0 };
//    gets(str);
//    reverse_str(str);
//
//    puts(str);
//    return 0;
//}
////
//void reverse_str(char* str) {
//    if (strlen(str) >= 2) {
//        char t = *str;
//        int len = strlen(str);
//        *str = *(str + len - 1);
//        *(str + len - 1) = '\0';
//        reverse_str(str + 1);
//        *(str + len - 1) = t;
//    }
//}

//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int t = 0;
//	for (i = 0; i < 5; i++) {
//		t = t * 10 + n;
//		sum += t;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int isflower(int n);
//
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100000; i++) {
//		if (isflower(i)) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
////
//int isflower(int n) {
//	//记录n
//	int m = n;
//	//记录总和
//	int sum = 0;
//	int t = 0;
//	int cnt = 0;
//	while (m > 0) {
//		m /= 10;
//		cnt++;
//	}
//	m = n;
//	//得到n的每一位
//	while (m > 0) {
//		t = m % 10;
//		m /= 10;
//		sum += (int)pow(t, cnt);
//	}
//	if (sum == n) {
//		return 1;
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int n = 13;
	int i = 0;
	//n行
	for (i = 0; i < n ; i++) {
		int j = 0;
		//n列
		for (j = 0; j < n ; j++) {
			//上半段
			if (i < n / 2) {
				if (j >= n / 2 - i && j <= n / 2 + i) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			//下半段
			else {
				if (j >= i - n / 2 && j <= (n / 2 + i) - 2*(i-n/2)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int n = 13;
//	int i = 0;
//	//n行
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		//n列
//		for (j = 0; j < n; j++) {
//				int t = n / 2 + i;
//				if(t >= n){
//					t = n - 1 - t % (n-1);
//				}
//				if (j >= fabs(n / 2 - i) && j <= t) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}