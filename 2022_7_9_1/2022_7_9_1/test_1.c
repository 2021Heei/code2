#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现memmove
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memmove(void* destination, const void* source, size_t num) {
//	//断言
//	assert(destination && source);
//	void* start = destination;
//	//
//	if (destination < source) {
//		//前->后
//		while (num--) {
//			*(char*)destination = *(char*)source;
//			destination = (char*)destination + 1;
//			source = (char*)source + 1;
//		}
//	}
//	else {
//		//后->前
//		while (num--) {
//			*((char*)destination + num) = *((char*)source + num);
//		}
//	}
//	return start;
//}
//int main() {
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//	int* p = (int*)my_memmove(arr+1, arr + 4, 16);
//	int i = 0;
//	for (i = 0; i < 12; i++) {
//		printf("%d ", p[i]);
//	}
//	for (i = 0; i < 12; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
///*
//    x    y
//
//*/
//long long int gcd(long long int x, long long int y) {
//
//    long long int t = 0;
//    while (y != 0) {
//        t = x;
//        x = y;
//        y = t % y;
//    }
//    return x;
//}
//int main() {
//    int x, y;
//    while (scanf("%d %d", &x, &y) == 2) {
//        long long int great = gcd(x, y);
//        long long int least = (x * y) / great;
//        printf("%lld\n", great + least);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++) {
//        int j = 0;
//        for (j = 1; j <= n; j++) {
//            if (i == 1 || i == n || j == 1 || j == n) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*
2*n+1行 列

      *    7 7
    **      5 6
  ***       345
****        1234
  ***       345
    **      56
      *     7 7
*/

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1) {
//        int t = n;
//        int i = 0;
//        for (i = 1; i <= 2 * n + 1; i++) {
//            int j = 0;
//            if (i <= n + 1) {
//                for (j = 1; j <= 2 * n + 1; j++) {
//                    if (j >= 2 * t + 1 && j <= 2 * n + 1 - i + 1) {
//                        printf("*");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                }
//                t--;
//                printf("\n");
//            }
//            else {
//                if (t == -1) {
//                    t = 1;
//                }
//                for (j = 1; j <= 2 * n + 1; j++) {
//                    if (j >= 2 * t + 1 && j <= i) {
//                        printf("*");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                }
//                t++;
//                printf("\n");
//            }
//        }
//    }
//    
//    return 0;
//}