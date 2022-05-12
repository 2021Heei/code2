#define _CRT_SECURE_NO_WARNINGS 1

/*Given a string containing only 'A' - 'Z', we could encode it using the following method: 

1. Each sub-string containing k same characters should be encoded to "kX" where "X" is the only character in this sub-string.

2. If the length of the sub-string is 1, '1' should be ignored.

输入 

The first line contains an integer N (1 <= N <= 100) which indicates the number of test cases. The next N lines contain N strings. Each string consists of only 'A' - 'Z' and the length is less than 10000.

输出

For each test case, output the encoded string in a line.

样例输入

2
AABBCC
ABCC

样例输出
2A2B2C
AB2C
*/

#include <stdio.h>

int un(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	getchar();
	char str[100][100] = { 0 };
	char s[100][100] = { 0 };

	int i = 0;
	//记录单个字符个数
	int cnt = 0;
	//记录单个字符
	char ch;
	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
		cnt = 0;
		int j = 0;
		ch = str[i][j];
		int k = j;
		int t = 0;
		int m = 0;
		while (1) {
			if (ch != str[i][j]) {
				cnt = un(cnt);
				if (cnt != 1) {
					while (cnt > 0) {
						s[i][m] = cnt % 10 + '0';
						m++;
						cnt = cnt / 10;
						k++;
					}
					s[i][m] = ch;
					m++;
					t = k + 1;

					while (str[i][k] == ch) {
						k++;
					}
					ch = str[i][k];
					j = k;
					j--;
					cnt = -1;
				}
				else {
					cnt = -1;
					k = j;
					s[i][m] = ch;
					m++;
					ch = str[i][k];
					j--;
				}
			}
			if (str[i][k] == '\0') {
				s[i][t] = '\0';
				break;
			}
			j++;
			cnt++;
		}
	}
	i = 0;
	for (i = 0; i < n; i++) {
		puts(s[i]);
	}
	return 0;
}
//逆序
int un(int n) {
	int i = 0;
	int sum = 0;
	while (n > 0) {
		sum = sum * 10 + n % 10;
		n = n / 10;
	}
	return sum;
}



#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	getchar();
	char str[100][100] = { 0 };

	int i = 0;
	//记录单个字符个数
	int cnt = 0;
	//记录单个字符
	char ch;
	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
		cnt = 0;
		int j = 0;
		ch = str[i][j];
		while (1) {
			if (ch != str[i][j]) {
				if (cnt != 1) {
					printf("%d%c", cnt, ch);
				}
				else {
					printf("%c", ch);
				}
				cnt = 0;
				ch = str[i][j];
			}
			else {
				if (str[i][j] == '\0') {
					printf("\n");
					break;
				}
				j++;
				cnt++;
			}
		}
	}

	return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	char str[10005] = { 0 };
	int cnt = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		getchar();
		scanf("%s", str);
		int len = strlen(str);
		int j = 0;
		cnt = 1;
		for (j = 0; j < len; j++) {
			if (str[j] == str[j + 1]) {
				cnt++;
			}
			else {
				if (cnt == 1) {
					printf("%c", str[j]);
				}
				else {
					printf("%d%c", cnt,str[j]);
				}
				cnt = 1;
			}
		}
		printf("\n");
	}
	return 0;
}