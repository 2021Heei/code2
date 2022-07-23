#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////第一个数与其余n-1个数依次比较，直到相同或比较完。
////如果相同就都变为0，为了防止与本来的0混淆，用一个变量记录新增的0，
////再用数组总元素减去新增的0的个数就是原来0的个数，若此0只有一个就输出。
////一个循环输出数组中非0的元素
//int main() {
//	int arr[] = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,0,15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//记录变成0的个数
//	int cnt = 0;
//	for (i = 0; i < sz-1; i++) {
//		int j = 0;
//		for (j = i+1; j < sz; j++) {
//			if (arr[i] == 0) {
//				continue;
//			}
//			if (arr[i] == arr[j]) {
//				arr[i] = 0;
//				arr[j] = 0;
//				//只记录新增的0
//				cnt += 2;
//				continue;
//			}
//		}
//	}
//	if (cnt == sz - 2) {
//		printf("0 ");
//	}
//	for (i = 0; i < sz; i++) {
//		if(arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

////模拟实现strncpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//断言
//	assert(destination && source);
//	char* start = destination;
//	while ((num--) && (*destination++ = *source++)) {
//
//	}
//	num++;
//	//说明源字符串没有复制完，而num已经为0，那么需要为目标末尾加上'\0'
//	if (num == 0 && *source != '\0') {
//		*destination = '\0';
//	}
//	//说明num不等于0，而源字符串已经复制完了，在目标字符串尾补'\0'
//	while (num--) {
//		*destination = '\0';
//	}
//	return start;
//}
//int main() {
//	char str1[] = "abcdef";
//	char str2[20] = "************";
//	my_strncpy(str2, str1, 5);
//	printf("%s\n", str2);
//
//	return 0;
//}

////模拟实现strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//断言，指针destination与指针source接受的均不是NULL
//	assert(destination && source);
//	//记录目标空间地址
//	char* start = destination;
//	while (num-- && (*destination++ = *source++)) {
//		;
//	}
//	num++;
//	destination--;
//	while (num--) {
//		*destination++ = '\0';
//	}
//	return start;
//}
//int main() {
//	char str1[] = "abcdef";
//	char str2[20] = "************";
//	char* p = my_strncpy(str2, str1, 5);
//	puts(p);
//	return 0;
//}

////模拟实现strncat
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncat(char* destination, const char* source, size_t num) {
//	assert(destination && source);
//	char* start = destination;
//	//找到目标字符串'\0'
//	while (*destination != '\0') {
//		destination++;
//	}
//	//复制
//	while (num-- && (*destination++ = *source++)) {
//
//	}
//	num++;
//	//如果已经复制了num个字符但是还未到源字符串的结尾就自动在目标字符串补'\0'
//	if (num == 0 && *source != '\0') {
//		
//		*destination = '\0';
//	}
//	return start;
//}
//
//int main() {
//	char str1[] = "abcdef";
//	char str2[50] = "***\0*********";
//	my_strncat(str2, str1, 50);
//	printf("%s\n", str2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int* p = NULL;
//	*p = 10;
//	printf("%d", *p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	char str[] = "    -1091898129379002";
//	int a = atoi(str);
//	double b = atoi(str);
//	printf("%d\n", a);
//	printf("%lf\n", b);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <ctype.h>
//
//int my_atoi(const char* str) {
//	assert(str);
//	//跳过空白字符
//	while (isspace(*str)) {
//		str++;
//	}
//	//读取正负号，如果有的话
//	int symbol = 1;
//	if (*str == '-') {
//		symbol = -1;
//		str++;
//	}
//	//判断数据是否越界，如果越界直接最大值，并退出循环
//	int cnt = 0;
//	while (*str >= '0' && *str <= '9') {
//		int bit = *str - '0';
//		cnt = cnt * 10 + bit;
//		//判断数据是否越界，越界直接最大值，退出循环
//		if (cnt < 0) {
//			cnt = INT_MAX;
//			break;
//		}
//		str++;
//	}
//	cnt *= symbol;
//	//返回
//	return cnt;
//}
//
//int main() {
//	char str[] = "    109. 1898129379002";
//	int a = my_atoi(str);
//	double b = my_atoi(str);
//	printf("%d\n", a);
//	printf("%lf\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//#define M 100
//
//int main() {
//	int a = M;
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stddef.h>
////结构成员相对于结构起始地址的偏移，
////是结构成员起始地址对应数值与结构起始地址对应数值之间的差值
////如果把结构置于0地址(0x00000000)处,结构起始地址就是(0x00000000)，数值就是0.
////结构成员起始地址的数值直接就是所求的偏移量，就不用再减去结构起始地址的数值了。
//#define OFFSETOF(type, member) (&(((type*)0)->member))
//struct s {
//	char a;
//	int b;
//	char c;
//};
//
//int main() {
//	printf("%d\n", offsetof(struct s,a));
//	printf("%d\n", offsetof(struct s, b));
//	printf("%d\n", offsetof(struct s, c));
//	printf("---\n");
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, b));
//	printf("%d\n", OFFSETOF(struct s, c));
//	printf("---\n");
//
//	struct s u = { 0 };
//	printf("%d\n", (int)&u.a - (int)&u);
//	printf("%d\n", (int)&u.b - (int)&u);
//	printf("%d\n", (int)&u.c - (int)&u);
//
//
//	return 0;
//}

//#include <stdio.h>
////01010101 01010101 01010101 01010101
//#define SWAPBIT(a) {(int odd_bit;		\
//					int even_bit;		\
//for(int i = 0; i<32; i++){				\
//	if((i+1)%2==1){						\
//		odd_bit=(a)&((1)<<i);			\
//		(a)=(a)-odd_bit;				\
//	}									\
//}										\
//else{									\
//	even_bit=(a)&(1<<i);				\
//	(a)=(a)-even_bit;					\
//}										\
//if((i+1)%2==0){							\
//	(a)=(a)+odd_bit*2+even/2;})}
//
//void binary_bit(int a);
//
//int main() {
//	int aa = 1431655765;
//	int i = 0;
//	binary_bit(aa);
//	//分别记录奇数、偶数的对应位的二进制数
//	//int odd_bit = -1;
//	//int even_bit = -1;
//	//for (i = 0; i < 32; i++) {
//	//	//奇数判断
//	//	if ((i + 1) % 2 != 0) {
//	//		//奇数操作
//	//		//储存第i+1位且是奇数的二进制数，
//	//		//即除了保留第i+1位的二进制数，其它31位都变为了0
//	//		odd_bit = a & (1 << i);
//	//		//整数减去奇数，把第i+1二进制奇数位就变为了0，不管之前这一位是1还是0。
//	//		a = a - odd_bit;
//	//	}
//	//	else {
//	//		//偶数操作
//	//		//储存第i+1位且是偶数的二进制数，
//	//		//即除了保留第i+1位的二进制数，其它31位都变为了0
//	//		even_bit = a & (1 << i);
//	//		//整数减去偶数，把第i+1二进制偶数位就变为了0，不管之前这一位是1还是0。
//	//		a = a - even_bit;
//	//	}
//
//	//	if ((i+1) % 2 == 0 ) {
//	//		//因为in共有32个bit位，我以低位开始算作第一个二进制位
//	//		//相邻的奇数偶数位都已经为0，采用加法即可完成奇数偶数交换
//	//		//只需要注意，交换之前偶数位在奇数位之前，交换之后就相反了，
//	//		//所以偶数位的对应的二进制数应该向后移动1bit位（除2）
//	//		//奇数位对应的二进制数应该向前移动1bit位（乘2），之后再相加。
//	//		a += odd_bit*2 + even_bit/2;
//	//	}
//	//	//printf("%d ", b);
//	//}
//	SWAPBIT(aa)
//	binary_bit(aa);
//
//	return 0;
//}
//
//void binary_bit(int a) {
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		printf("%d ", 1 & (a >> i));
//	}
//	printf("\n");
//}

//#include <stdio.h>
////把最低位看作偶数位
////分别得到所有奇数位和偶数位，奇数位整体右移1位，偶数位整体左移一位，二者再相加。
//#define SWAPBIT(n) n = (((n&0x55555555)<<1) + ((n&0xaaaaaaaa)>>1))
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	SWAPBIT(n);
//
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void strs(char* str, int len) {
//    char ss[1000] = { 0 };
//    char* s = ss;
//    
//    char tt[] = "%20";
//    char* t = tt;
//    strcpy(s, str);
//    while (*s != '\0') {
//        if (*s != ' ') {
//            *str++ = *s++;
//        }
//        else {
//            t = tt;
//            while (*t != '\0') {
//                *str++ = *t++;
//            }
//            s++;
//        }
//    }
//}
//
//int main() {
//    char str[100] = "are you ok!";
//    strs(str, 12);
//    printf("%s\n", str);
//	return 0;
//}

