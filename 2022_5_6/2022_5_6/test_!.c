#define _CRT_SECURE_NO_WARNINGS 1
/*

为了更好的和客户沟通，某保险公司要给每一个当天过生日的客户发短信问候，保险公司中保存了N（N<10）个人的身份证，在输入一个日期后，请您帮忙找到当天过生日的所有客户的编号（编号从0开始）。



输入 


第一行输入一个整数n表示该公司中的客户的人数；第二行输入当天的日期；以下n行代表n个客户的身份证号。



输出 


当天过生日的所有的客户的编号，若没有当天过生日的客户，则输出-1。



样例输入 Copy 

5
2014-5-20
410203198005200101
410501199011210032
410305198905200043
410703197810250031
410502197205200108
*/
#include <stdio.h>

typedef struct pep {
	char mon[3];
	char day[3];
}pep;

int main() {
	int n = 0;
	scanf("%d", &n);
	int mon = 0;
	int day = 0;
	scanf("%*4d-%d-%d", &mon, &day);
	pep* a = (pep*)malloc(n * sizeof(pep));
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%*10s%2s%2s%*4s", (a+i)->mon, (a+i)->day);
	}
	int flag = 0;
	for (i = 0; i < n; i++) {
		int mon1 = 0;
		int day1 = 0;
		int j = 0;
		for (j = 0; j < 2; j++) {
			mon1 = mon1*10 + a[i].mon[j] - '0';
			day1 = day1*10 + a[i].day[j] - '0';
		}
		if (mon == mon1 && day == day1) {
			printf("%d ", i);
			if(!flag)
				flag = 1;
		}
	}
	if (!flag) {
		printf("-1\n");
	}
	return 0;
}