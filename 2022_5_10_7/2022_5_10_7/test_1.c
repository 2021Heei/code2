#define _CRT_SECURE_NO_WARNINGS 1
/*����
KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
����������
��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
���������
���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
ʾ��1
���룺
2 3 2
3 3 3
����
�����
Isosceles triangle!
Equilateral triangle!

*/
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if ((abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a)) {
			if (a == b && b == c) {
				printf("Equilateral triangle!\n");
			}
			else if (a != b && b != c && c != a) {
				printf("Ordinary triangle!\n");
			}
			else {
				printf("Isosceles triangle!\n");
			}
		}
		else {
			printf("Not a triangle!\n");
		}
	}
	return 0;
}