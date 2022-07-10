#define _CRT_SECURE_NO_WARNINGS 1

/*
����
������������ڣ���������һ��ĵڼ��졣
��֤���Ϊ4λ�������ںϷ���
���ף�ʱ�临�Ӷȣ�O(n)\O(n) ���ռ临�Ӷȣ�O(1)\O(1)
����������
����һ�У�ÿ�пո�ָ�ֱ����꣬�£���

���������
�������һ��ĵڼ���
*/
#include <stdio.h>

int isleap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}
int main() {
    int arr_m[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
                        {0,31,29,31,30,31,30,31,31,30,31,30,31} };
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    int  x = 0;
    int i = 0;
    int index = isleap(year);
    for (i = 1; i < month; i++) {
        x += arr_m[index][i];
    }
    x += day;

    printf("%d", x);
    return 0;
}



/*
����
�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
1. �÷���һ�������б��������ӡ
2. n Ϊ��������0 < n <= 5
ʾ��1
���룺
1
����
����ֵ��
[1,2,3,4,5,6,7,8,9]

*/
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int���� ���λ��
 * @return int����һά����
 * @return int* returnSize ������������
 *
 * C������������ȫ�ֱ��������static����ֹ�ظ�����
 */
int* printNumbers(int n, int* returnSize) {
    // write code here
    int num = (int)pow(10, n);
    num--;
    int* arr = (int*)malloc(sizeof(int) * num);
    *returnSize = num;
    int i = 0;
    for (i = 0; i < num; i++) {
        arr[i] = i + 1;
    }
    return arr;
}