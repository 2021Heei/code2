#define _CRT_SECURE_NO_WARNINGS 1

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
					printf("%d%c", cnt, str[j]);
				}
				cnt = 1;
			}
		}
		printf("\n");
	}
	return 0;
}