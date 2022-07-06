#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int(*p)[10] = (int(*)[10])malloc(sizeof(int) * 10 * n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &p[i][j]);
//        }
//    }
//
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            printf("%d ", p[j][i]);
//        }
//        printf("\n");
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

/*KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�

����������
��һ�а���һ������n����ʾһ���������n��n�У��ÿո�ָ��� (1��n��10)

��2��n+1�У�ÿ������n����������Χ-231~231-1�����ÿո�ָ���������n*n������

���������
һ�У�������뷽���������Ǿ������"YES"�����У��������"NO"������*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int(*p)[n] = (int(*)[n])malloc(sizeof(int) * n * n);
    int i = 0;
    int flag = 1;//����һ��ʼ�������Ǿ���
    for (i = 0; i < n; i++) {
        int j = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &p[i][j]);
            if (i > j && p[i][j] != 0) {
                flag = 0;
            }
        }
    }

    if (flag == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    free(p);
    p = NULL;
    return 0;
}

/*����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��

���ݷ�Χ�� 3 \le n \le 50 \3��n��50  �����е�ֵ������ 1 \le val \le 100 \1��val��100 
����������
��һ������һ������N(3��N��50)��
�ڶ�������N���������ÿո�ָ�N��������
���������
���Ϊһ�У���������������sorted���������unsorted��*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int* p = (int*)malloc(sizeof(int) * n);
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    int flag = 0;//1Ϊ���ڵ��ڣ�-1ΪС�ڵ���,2Ϊ����for(i=0; i<n-1; i++){
        //��ȷ����ƽ�����򡢻��ǽ���if( flag == 0 && p[i] > p[i+1]){
    flag = 1;//����
}
if (flag == 0 && p[i] < p[i + 1]) {
    flag = -1;//����
}
if (flag == 1 && p[i] < p[i + 1]) {
    flag = 2;//�����г�������break;
}
if (flag == -1 && p[i] > p[i + 1]) {
    flag = 2;//�����г��ֽ���break;
}
    }
    if (flag == 2) {
        printf("unsorted\n");
    }
    else {
        printf("sorted\n");
    }
    free(p);
    p = NULL;
    return 0;
}

//��2-��¼ǰ���������Ĳ�ֵ���
#include <stdio.h>

 int main(){
     int n = 0;
     scanf("%d", &n);
     int* p = (int*)malloc(sizeof(int) * n);
     int i = 0;
     for(i=0; i<n; i++){
         scanf("%d", &p[i]);
     }
     int cnt1 = 0;
     int cnt2 = 0;
     for(i=0; i<n-1; i++){
         if(p[i] - p[i+1] >= 0){
             cnt1++;//�������
         }
         if(p[i] - p[i+1] <= 0){
             cnt2++;//�������
         }
     }
     if(cnt1 == n-1 || cnt2 == n-1){
         printf("sorted\n");
     }
     else{
         printf("unsorted\n");
     }
     return 0;
 }


