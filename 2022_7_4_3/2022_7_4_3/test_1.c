#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void (*signal(int, void (*)(int)))(int);
//
//int main() {
//	//(*(void (*)())0)();
//	
//	typedef void (*pf_t)(int) ;
//	pf_t signal(int, pf_t);
//	return 0;
//}

//#include <stdio.h>
//
//void menu() {
//	printf("****************************\n");
//	printf("****   1.Add    2.Sub   ****\n");
//	printf("****   3.Mul    3.Div   ****\n");
//	printf("*******   0.Exit   *********\n");
//	printf("****************************\n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void calc(int (*p)(int, int)) {
//	printf("请输入两个操作数>");
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = p(x, y);//(*p)(x,y)
//	printf("%d\n", ret);
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		printf("请输入选择>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1://Add
//			calc(Add);
//			break;
//		case 2://Sub
//			calc(Sub);
//			break;
//		case 3://Mul
//			calc(Mul);
//			break;
//		case 4://Div
//			calc(Div);
//			break;
//		case 0:
//			printf("程序退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//
//void menu() {
//	printf("****************************\n");
//	printf("****   1.Add    2.Sub   ****\n");
//	printf("****   3.Mul    3.Div   ****\n");
//	printf("*******   0.Exit   *********\n");
//	printf("****************************\n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}

//int main() {
//	int input = 0;
//	int x, y;
//	int ret;
//	//函数指针数组
//	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do {
//		menu();
//		printf("请输入选择>");
//		scanf("%d", &input);
//		if (input == 0) {
//			printf("程序退出\n");
//		}
//		else if (input > 0 && input < 5) {
//			printf("请输入两个操作数>");
//			scanf("%d %d", &x, &y);
//			ret = arr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else {
//			printf("输入错误，请重新输入!\n");
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int main() {
//	//函数指针数组
//	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	//函数指针数组指针
//	int (*(*parr)[5])(int, int) = &arr;
//	return 0;
//}

//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	int flag = 1;//标志变量，假设数组是有序的
//	//趟数
//	for (i = 0; i < sz - 1; i++) {
//		//比较次数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct STU {
//	char name[20];
//	int age;
//};
//int int_cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_by_name(const void* e1, const void* e2) {
//	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
//}
////void test1() {
////	struct STU s[] = { {"lisi",20}, {"zhangsan",40}, {"wangwu", 30} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_by_name);
////}
//int cmp_by_age(const void* e1, const void* e2) {
//	return ((struct STU*)e1)->age - ((struct STU*)e2)->age;
//}
//void test2() {
//	struct STU s[] = { {"lisi",20}, {"zhangsan",40}, {"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//int main(){
//	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);*/
//
//	/*int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}*/
//	//test1();
//	test2();
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//struct STU {
//	char name[20];
//	int age;
//};
//void Swap(char* buf1, char* buf2, int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2)) {
//	int i = 0;
//	int flag = 1;//标志变量，假设数组是有序的
//	//趟数
//	for (i = 0; i < sz - 1; i++) {
//		//比较次数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) {
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0) {
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//int int_cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
////void test1() {
////	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
////	int i = 0;
////	for (i = 0; i < sz; i++) {
////		printf("%d ", arr[i]);
////	}
////}
////
////int cmp_by_name(const void* e1, const void* e2) {
////	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
////}
////void test1() {
////	struct STU s[] = { {"lisi",20}, {"zhangsan",40}, {"wangwu", 30} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
////}
//
//
//int cmp_by_age(const void* e1, const void* e2) {
//	return ((struct STU*)e1)->age - ((struct STU*)e2)->age;
//}
//void test2() {
//	struct STU s[] = { {"lisi",20}, {"zhangsan",40}, {"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//int main() {
//	//test1();
//	test2();
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    const char* p = "abcdef";
//    int len = strlen(p);
//    printf("%s", p);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char* p1 = "abcdef";
//    char* p2 = "abcdef";
//    if (p1 == p2) {
//        printf("p1 == p2\n");
//    }
//    else {
//        printf("p1 != p2\n");
//    }
//
//    char str1[] = "abcdef";
//    char str2[] = "abcdef";
//    if (str1 == str2) {
//        printf("str1 == str2\n");
//    }
//    else {
//        printf("str1 != str2\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr1[5] = { 1,2,3,4,5 };
//    int arr2[5] = { 2,3,4,5,6 };
//    int arr3[5] = { 3,4,5,6,7 };
//    int* arr[3] = { arr1, arr2, arr3 };
//    int i = 0;
//    for (i = 0; i < 3; i++) {
//        int j = 0;
//        for (j = 0; j < 5; j++) {
//            printf("%d ", arr[i][j]);//*(arr[i]+j)
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    printf("sizeof(arr[0]) == %d\n", sizeof(arr[0]));
//    printf("sizeof(arr) == %d\n", sizeof(arr));
//    printf("sizeof(arr+0) == %d\n", sizeof(arr+0));
//
//    //-------------------------------------------------
//    printf("arr         == %p\n", arr);
//    printf("arr + 1     == %p\n", arr + 1);
//    printf("&arr[0]     == %p\n", &arr[0]);
//    printf("&arr[0] + 1 == %p\n", &arr[0] + 1);
//    printf("&arr        == %p\n", &arr);
//    printf("&arr + 1    == %p\n", &arr + 1);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int(*p)[10] = &arr;
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        printf("%d ", *(*p + i));
//    }
//    return 0;
//}

//#include <stdio.h>
//void prints(int arr[3][4], int row, int col) {
//    int i = 0;
//    for (i = 0; i < row; i++) {
//        int j = 0;
//        for (j = 0; j < col; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//    prints(arr, 3, 4);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr1[] = { 1,2,3,4,5 };
//    int arr2[] = { 2,3,4,5,6 };
//    int arr3[] = { 3,4,5,6,7 };
//    int(*arr[3])[5] = { &arr1, &arr2, &arr3 };
//
//    return 0;
//}

//#include <stdio.h>
//
//void prints(int(*p)[4], int row, int col) {
//    int i = 0;
//    for (i = 0; i < row; i++) {
//        int j = 0;
//        for (j = 0; j < col; j++) {
//            printf("%d ", *(*(p + i) + j));//p[i][j]
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//    prints(arr, 3, 4);
//
//    return 0;
//}


//#include <stdio.h>
//void menu() {
//    printf("****************************\n");
//    printf("****   1.Add    2.Sub   ****\n");
//    printf("****   3.Mul    4.Div   ****\n");
//    printf("*******   0.Exit   *********\n");
//    printf("****************************\n");
//}
//int Add(int x, int y) {
//    return x + y;
//}
//
//int Sub(int x, int y) {
//    return x - y;
//}
//
//int Mul(int x, int y) {
//    return x * y;
//}
//
//int Div(int x, int y) {
//    return x / y;
//}
//
//int main() {
//    int input = 0;
//    int x, y;
//    int ret = 0;
//    do {
//        menu();
//        printf("请输入你的选择>");
//        scanf("%d", &input);
//        switch (input) {
//        case 1:
//            printf("请输入两个操作数>");
//            scanf("%d %d", &x, &y);
//            ret = Add(x, y);
//            printf("%d\n", ret);
//            break;
//        case 2:
//            printf("请输入两个操作数>");
//            scanf("%d %d", &x, &y);
//            ret = Sub(x, y);
//            printf("%d\n", ret);
//            break;
//        case 3:
//            printf("请输入两个操作数>");
//            scanf("%d %d", &x, &y);
//            ret = Mul(x, y);
//            printf("%d\n", ret);
//            break;
//        case 4:
//            printf("请输入两个操作数>");
//            scanf("%d %d", &x, &y);
//            ret = Div(x, y);
//            printf("%d\n", ret);
//            break;
//        case 0:
//            printf("程序退出\n");
//            break;
//        default:
//            printf("输入错误，请重新输入!\n");
//                break;
//        }
//    } while (input);
//
//    return 0;
//}

//#include <stdio.h>
//void menu() {
//    printf("****************************\n");
//    printf("****   1.Add    2.Sub   ****\n");
//    printf("****   3.Mul    4.Div   ****\n");
//    printf("*******   0.Exit   *********\n");
//    printf("****************************\n");
//}
//int Add(int x, int y) {
//    return x + y;
//}
//
//int Sub(int x, int y) {
//    return x - y;
//}
//
//int Mul(int x, int y) {
//    return x * y;
//}
//
//int Div(int x, int y) {
//    return x / y;
//}
//void calculate(int (*p)(int, int)) {
//    printf("请输入两个操作数>");
//    int x, y;
//    scanf("%d %d", &x, &y);
//    int ret = p(x, y);
//    printf("%d\n", ret);
//}
//int main() {
//    int input = 0;
//    do {
//        menu();
//        printf("请输入你的选择>");
//        scanf("%d", &input);
//        switch (input) {
//        case 1:
//            calculate(Add);
//            break;
//        case 2:
//            calculate(Sub);
//            break;
//        case 3:
//            calculate(Mul);
//            break;
//        case 4:
//            calculate(Div);
//            break;
//        case 0:
//            printf("程序退出\n");
//            break;
//        default:
//            printf("输入错误，请重新输入!\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}
//#include <stdio.h>
//void menu() {
//    printf("****************************\n");
//    printf("****   1.Add    2.Sub   ****\n");
//    printf("****   3.Mul    4.Div   ****\n");
//    printf("*******   0.Exit   *********\n");
//    printf("****************************\n");
//}
//int Add(int x, int y) {
//    return x + y;//加法
//}
//
//int Sub(int x, int y) {
//    return x - y;//减法
//}
//
//int Mul(int x, int y) {
//    return x * y;//乘法
//}
//
//int Div(int x, int y) {
//    return x / y;//除法
//}
//
//int main() {
//    int input = 0;
//    int (*arr[10])(int, int) = { 0, Add, Sub, Mul, Div };
//    int x, y;
//    int ret = 0;
//    do {
//        menu();
//        printf("请输入你的选择>");
//        scanf("%d", &input);
//
//        if (input > 0 && input < 5) {
//            printf("请输入两个操作数>");
//            scanf("%d %d", &x, &y);
//            ret = arr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0) {
//            printf("程序退出!\n");
//        }
//        else {
//            printf("输入错误，请重新输入!\n");
//        }
//    } while (input);
//
//    return 0;
//}

#include <stdio.h>
void Swap(char* buf1, char* buf2, int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
//
//void bubble_sort(void* base,
//    size_t num,
//    size_t size,
//    int (*cmp)(const void* e1, const void* e2)) {
//    int i = 0;
//    //趟数
//    for (i = 0; i < num - 1; i++) {
//        int j = 0;
//        int flag = 0;//默认数据已经升序排列，不需要交换
//        //比较次数
//        for (j = 0; j < num - 1 - i; j++) {
//            //比较,
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0) {
//                //交换
//                Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//                //交换过，flag要改变
//                flag = 1;
//            }
//        }
//        //如果第一趟为交换，那么之后的几趟也不会交换，直接退出!
//        if (flag == 0) {
//            break;
//        }
//    }
//}
//int cmp_int(const void* e1, const void* e2) {
//    return *(int*)e1 - *(int*)e2;
//}
//void test_int() {
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//    
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main() {
//    test_int();
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct student {
//    char name[20];
//    int num;
//}STU;
////比较结构体中的字符串
//int cmp_name(const void* e1, const void* e2) {
//    return strcmp(((STU*)e1)->name, ((STU*)e2)->name);
//}
//void test_struct_name() {
//    STU s[] = { {"sunwukong", 2}, {"shasheng", 4}, {"tangsheng",1},{"zhubajie",3} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    int i = 0;
//    printf("前\n");
//    for (i = 0; i < sz; i++) {
//        printf("%s %d\n", s[i].name, s[i].num);
//    }
//
//    qsort(s, sz, sizeof(s[0]), cmp_name);
//
//    printf("后\n");
//    for (i = 0; i < sz; i++) {
//        printf("%s %d\n", s[i].name, s[i].num);
//    }
//    return 0;
//}
//
////比较结构体中的整型
//int cmp_num(const void* e1, const void* e2) {
//    return ((STU*)e1)->num - ((STU*)e2)->num;
//}
//void test_struct_num() {
//    STU s[] = { {"sunwukong", 2}, {"shasheng", 4}, {"tangsheng",1},{"zhubajie",3} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    int i = 0;
//    printf("前\n");
//    for (i = 0; i < sz; i++) {
//        printf("%s %d\n", s[i].name, s[i].num);
//    }
//
//    qsort(s, sz, sizeof(s[0]), cmp_num);
//
//    printf("后\n");
//    for (i = 0; i < sz; i++) {
//        printf("%s %d\n", s[i].name, s[i].num);
//    }
//    return 0;
//}
//
//int main() {
//    test_struct_name();
//    printf("----------------\n");
//    test_struct_num();
//    return 0;
//}

//#include <stdio.h>
//void bubble_sort(int arr[], int sz) {
//    int i = 0;
//    //趟数
//    for (i = 0; i < sz - 1; i++) {
//        int j = 0;
//        //比较次数
//        for (j = 0; j < sz - 1 - i; j++) {
//            //比较
//            if (arr[j] > arr[j + 1]) {
//                //交换
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//    }
//}
//}
//int main() {
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    bubble_sort(arr, sz);
//    
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//void bubble_sort(int arr[], int sz) {
//    int i = 0;
//    int flag = 0;//默认数据已经升序排列，不需要交换
//    //趟数
//    for (i = 0; i < sz - 1; i++) {
//        int j = 0;
//        //比较次数
//        for (j = 0; j < sz - 1 - i; j++) {
//            //比较
//            if (arr[j] > arr[j + 1]) {
//                //交换
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                //交换过，flag要改变
//                flag = 1;
//            }
//        }
//        //如果第一趟为交换，那么之后的几趟也不会交换，直接退出!
//        if (flag == 0) {
//            break;
//        }
//    }
//}
//int main() {
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    bubble_sort(arr, sz);
//
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}