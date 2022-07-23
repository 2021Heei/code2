#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//		//判断是什么原因结束的
//		if (ferror(fp))
//			puts("I/O error when reading");
//		else if (feof(fp))
//			puts("End of file reached successfully");
//	fclose(fp);
//}


//#include <stdio.h>
//
//int main() {
//    //打开文件
//    FILE* pf = fopen("test.txt", "r");
//    if (!pf) {
//        perror("fopen");
//        return 1;
//    }
//    //读取字符
//    int c = 0;
//    while ((c = fgetc(pf)) != EOF) {
//        printf("%c ", c);
//    }
//    //文件读取结束，判断原因
//    if (feof(pf)) {
//        printf("遇到文件末尾而结束!\n");
//    }
//    else if (ferror(pf)) {
//        printf("读取错误而结束!\n");
//    }
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//
//int main() {
//	
//	FILE* pf = fopen("test.txt", "wb");
//	if (!pf) {
//		perror("fopen");
//		return 1;
//	}
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	fwrite(arr1, sizeof(arr1[0]), 10, pf);
//	printf("先把数据送到缓冲区,休眠10s\n");
//	Sleep(10000);
//	printf("强制刷新缓冲区,休眠10s，因为关闭文件也会强制刷新缓冲区\n");
//	fflush(pf);
//	Sleep(10000);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}