#define _CRT_SECURE_NO_WARNINGS 1
/*KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
����������
�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
���������
���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
ʾ��1
���룺
2008 2
�����
29
*/
#include <stdio.h>

int isleap(int year);

int main() {
	int month_num_not_leap[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int month_num_leap[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int year, month;
	
	
	while (scanf("%d%d", &year, &month) != EOF) {
		int day = 0;
		if (month == 2) {
			if (isleap(year) == 1) {
				day = month_num_leap[month];
			}
			else {
				day = month_num_not_leap[month];
			}
		}
		else {
			day = month_num_leap[month];
		}
		printf("%d\n", day);
	}
	return 0;
}
//�ж�����
int isleap(int year) {
	if ((year % 4 == 0 && year != 100) || (year % 400 == 0)) {
		return 1;
	}
	return 0;
}