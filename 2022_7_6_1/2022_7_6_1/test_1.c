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

/*KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

输入描述：
第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (1≤n≤10)

从2到n+1行，每行输入n个整数（范围-231~231-1），用空格分隔，共输入n*n个数。

输出描述：
一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int(*p)[n] = (int(*)[n])malloc(sizeof(int) * n * n);
    int i = 0;
    int flag = 1;//假设一开始是上三角矩阵
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

/*输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。

数据范围： 3 \le n \le 50 \3≤n≤50  序列中的值都满足 1 \le val \le 100 \1≤val≤100 
输入描述：
第一行输入一个整数N(3≤N≤50)。
第二行输入N个整数，用空格分隔N个整数。
输出描述：
输出为一行，如果序列有序输出sorted，否则输出unsorted。*/

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
    int flag = 0;//1为大于等于，-1为小于等于,2为乱序for(i=0; i<n-1; i++){
        //先确定是平序、升序、还是降序if( flag == 0 && p[i] > p[i+1]){
    flag = 1;//降序
}
if (flag == 0 && p[i] < p[i + 1]) {
    flag = -1;//升序
}
if (flag == 1 && p[i] < p[i + 1]) {
    flag = 2;//降序中出现升序break;
}
if (flag == -1 && p[i] > p[i + 1]) {
    flag = 2;//升序中出现降序break;
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

//法2-记录前后两个数的差值情况
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
             cnt1++;//降序计数
         }
         if(p[i] - p[i+1] <= 0){
             cnt2++;//升序计数
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


