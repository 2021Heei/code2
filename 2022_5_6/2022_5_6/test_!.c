#define _CRT_SECURE_NO_WARNINGS 1
/*

Ϊ�˸��õĺͿͻ���ͨ��ĳ���չ�˾Ҫ��ÿһ����������յĿͻ��������ʺ򣬱��չ�˾�б�����N��N<10�����˵����֤��������һ�����ں�������æ�ҵ���������յ����пͻ��ı�ţ���Ŵ�0��ʼ����



���� 


��һ������һ������n��ʾ�ù�˾�еĿͻ����������ڶ������뵱������ڣ�����n�д���n���ͻ������֤�š�



��� 


��������յ����еĿͻ��ı�ţ���û�е�������յĿͻ��������-1��



�������� Copy 

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