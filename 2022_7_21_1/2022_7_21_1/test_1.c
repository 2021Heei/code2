#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��һ����������n-1�������αȽϣ�ֱ����ͬ��Ƚ��ꡣ
////�����ͬ�Ͷ���Ϊ0��Ϊ�˷�ֹ�뱾����0��������һ��������¼������0��
////����������Ԫ�ؼ�ȥ������0�ĸ�������ԭ��0�ĸ���������0ֻ��һ���������
////һ��ѭ����������з�0��Ԫ��
//int main() {
//	int arr[] = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,0,15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//��¼���0�ĸ���
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
//				//ֻ��¼������0
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

////ģ��ʵ��strncpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//����
//	assert(destination && source);
//	char* start = destination;
//	while ((num--) && (*destination++ = *source++)) {
//
//	}
//	num++;
//	//˵��Դ�ַ���û�и����꣬��num�Ѿ�Ϊ0����ô��ҪΪĿ��ĩβ����'\0'
//	if (num == 0 && *source != '\0') {
//		*destination = '\0';
//	}
//	//˵��num������0����Դ�ַ����Ѿ��������ˣ���Ŀ���ַ���β��'\0'
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

////ģ��ʵ��strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	//���ԣ�ָ��destination��ָ��source���ܵľ�����NULL
//	assert(destination && source);
//	//��¼Ŀ��ռ��ַ
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

////ģ��ʵ��strncat
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncat(char* destination, const char* source, size_t num) {
//	assert(destination && source);
//	char* start = destination;
//	//�ҵ�Ŀ���ַ���'\0'
//	while (*destination != '\0') {
//		destination++;
//	}
//	//����
//	while (num-- && (*destination++ = *source++)) {
//
//	}
//	num++;
//	//����Ѿ�������num���ַ����ǻ�δ��Դ�ַ����Ľ�β���Զ���Ŀ���ַ�����'\0'
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
//	//�����հ��ַ�
//	while (isspace(*str)) {
//		str++;
//	}
//	//��ȡ�����ţ�����еĻ�
//	int symbol = 1;
//	if (*str == '-') {
//		symbol = -1;
//		str++;
//	}
//	//�ж������Ƿ�Խ�磬���Խ��ֱ�����ֵ�����˳�ѭ��
//	int cnt = 0;
//	while (*str >= '0' && *str <= '9') {
//		int bit = *str - '0';
//		cnt = cnt * 10 + bit;
//		//�ж������Ƿ�Խ�磬Խ��ֱ�����ֵ���˳�ѭ��
//		if (cnt < 0) {
//			cnt = INT_MAX;
//			break;
//		}
//		str++;
//	}
//	cnt *= symbol;
//	//����
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
////�ṹ��Ա����ڽṹ��ʼ��ַ��ƫ�ƣ�
////�ǽṹ��Ա��ʼ��ַ��Ӧ��ֵ��ṹ��ʼ��ַ��Ӧ��ֵ֮��Ĳ�ֵ
////����ѽṹ����0��ַ(0x00000000)��,�ṹ��ʼ��ַ����(0x00000000)����ֵ����0.
////�ṹ��Ա��ʼ��ַ����ֱֵ�Ӿ��������ƫ�������Ͳ����ټ�ȥ�ṹ��ʼ��ַ����ֵ�ˡ�
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
//	//�ֱ��¼������ż���Ķ�Ӧλ�Ķ�������
//	//int odd_bit = -1;
//	//int even_bit = -1;
//	//for (i = 0; i < 32; i++) {
//	//	//�����ж�
//	//	if ((i + 1) % 2 != 0) {
//	//		//��������
//	//		//�����i+1λ���������Ķ���������
//	//		//�����˱�����i+1λ�Ķ�������������31λ����Ϊ��0
//	//		odd_bit = a & (1 << i);
//	//		//������ȥ�������ѵ�i+1����������λ�ͱ�Ϊ��0������֮ǰ��һλ��1����0��
//	//		a = a - odd_bit;
//	//	}
//	//	else {
//	//		//ż������
//	//		//�����i+1λ����ż���Ķ���������
//	//		//�����˱�����i+1λ�Ķ�������������31λ����Ϊ��0
//	//		even_bit = a & (1 << i);
//	//		//������ȥż�����ѵ�i+1������ż��λ�ͱ�Ϊ��0������֮ǰ��һλ��1����0��
//	//		a = a - even_bit;
//	//	}
//
//	//	if ((i+1) % 2 == 0 ) {
//	//		//��Ϊin����32��bitλ�����Ե�λ��ʼ������һ��������λ
//	//		//���ڵ�����ż��λ���Ѿ�Ϊ0�����üӷ������������ż������
//	//		//ֻ��Ҫע�⣬����֮ǰż��λ������λ֮ǰ������֮����෴�ˣ�
//	//		//����ż��λ�Ķ�Ӧ�Ķ�������Ӧ������ƶ�1bitλ����2��
//	//		//����λ��Ӧ�Ķ�������Ӧ����ǰ�ƶ�1bitλ����2����֮������ӡ�
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
////�����λ����ż��λ
////�ֱ�õ���������λ��ż��λ������λ��������1λ��ż��λ��������һλ����������ӡ�
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

