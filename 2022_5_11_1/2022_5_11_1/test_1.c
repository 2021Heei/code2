#define _CRT_SECURE_NO_WARNINGS 1
/*����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),������в�ֺ�ĳ˻�֮�͵�������������һ��Lily Number��

���磺

655 = 6 * 55 + 65 * 5

1461 = 1*461 + 14*61 + 146*1

��� 5λ���е����� Lily Number��

����������
��
���������
һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�*/
//�����λ����д����Ҫע��˼·��
#include <stdio.h>

int main() {
    int i = 0;
    for (i = 10000; i < 99999; i++) {
        int j = 0;
        int sum = 0;
        for (j = 1; j <= 4; j++) {
            int k = pow(10, j);
            sum += (i / k) * (i % k);
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}