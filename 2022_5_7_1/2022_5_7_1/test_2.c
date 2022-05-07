#define _CRT_SECURE_NO_WARNINGS 1
/*

Little A is one member of ACM team. He had just won the gold in World Final. To celebrate, he decided to invite all to have one meal. As bowl, knife and other tableware is not enough in the kitchen, Little A goes to take backup tableware in warehouse. There are many boxes in warehouse, one box contains only one thing, and each box is marked by the name of things inside it. For example, if "basketball" is written on the box, which means the box contains only basketball. With these marks, Little A wants to find out the tableware easily. So, the problem for you is to help him, find out all the tableware from all boxes in the warehouse.



输入 


There are many test cases. Each case contains one line, and one integer N at the first, N indicates that there are N boxes in the warehouse. Then N strings follow, each string is one name written on the box.



输出 


For each test of the input, output all the name of tableware.



样例输入 Copy 

3 basketball fork chopsticks
2 bowl letter



样例输出 Copy 

fork chopsticks
bowl



提示 


The tableware only contains: bowl, knife, fork and chopsticks
*/
#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	char str[100] = { 0 };
	char s[4][20] = { "bowl","knife","fork","chopsticks" };
	while (scanf("%d", &n) != EOF) {
		getchar();
		int flag[4] = { 0 };
		int i = 0;
		for (i = 0; i < n; i++) {
			scanf("%s", str);
			int j = 0;
			for (j = 0; j < 4; j++) {
				if (strcmp(str, s[j]) == 0 && flag[j] == 0) {
					printf("%s ", str);
					flag[j] = 1;
					continue;
				}
			}
		}
		puts("");
	}
	return 0;
}