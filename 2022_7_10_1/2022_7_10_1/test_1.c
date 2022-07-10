#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
根据输入的日期，计算是这一年的第几天。
保证年份为4位数且日期合法。
进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(1)\O(1)
输入描述：
输入一行，每行空格分割，分别是年，月，日

输出描述：
输出是这一年的第几天
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
描述
输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
1. 用返回一个整数列表来代替打印
2. n 为正整数，0 < n <= 5
示例1
输入：
1
复制
返回值：
[1,2,3,4,5,6,7,8,9]

*/
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型 最大位数
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 *
 * C语言声明定义全局变量请加上static，防止重复定义
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