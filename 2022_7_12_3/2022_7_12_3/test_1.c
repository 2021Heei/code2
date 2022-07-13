#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{/*
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));*/
//
//	char a[20] = "abcdef";
//	char b[20] = "0";
//	b = "adsad";
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char* left, char* right) {
//    assert(left && right);
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main() {
//    int m = 0;
//    scanf("%d", &m);
//    char str[100000] = { 0 };
//    int i = 0;
//    //m * m * m != sum
//    
//    for (int k = 1; k < m * m * m; k += 2) {
//        int count = 0;
//        int sum = 0;
//        int j = 0;
//        char* left = str;
//        char* right = 0;
//        for (int i = k; count < m && sum < m*m*m; i += 2) {
//            count++;
//            sum += i;
//
//            int tmp = i;
//            int cnt = 0;
//
//            while (tmp) {
//                str[j++] = tmp % 10 + '0';
//                cnt++;
//                tmp /= 10;
//            }
//            right = left + cnt - 1 ;
//            reverse(left, right);
//            left = right + 2;
//            str[j++] = '+';
//        }
//        j--;
//        str[j] = '\0';
//        if (m * m * m == sum) {
//            printf("%s", str);
//            break;
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int m = 0;
//    while (scanf("%d", &m)  == 1) {
//        int a = m * m - m + 1;
//        int cnt = 0;
//        for (; cnt < m - 1; a += 2, cnt++) {
//            printf("%d+", a);
//        }
//        printf("%d\n", a);
//    }
//    return 0;
//}
//#include <stdio.h>
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}
//#include <stdio.h>
//
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//
//int main() {
//	printf("%d", f(1));
//	return 0;
//}

#include <stdio.h>

int main() {
	int M, a;
	int t = (M) ? (a++) : (a--);
	return 0;
}