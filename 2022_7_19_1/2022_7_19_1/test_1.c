#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	//以只写的模式打开文件test.txt
//	FILE* pf = fopen("test.txt", "w");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写（输出）操作
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(pf, "%d ", i);
//	}
//	//关闭文件指针pf指向的文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//以只读的模式打开文件test.txt
//	FILE* pf = fopen("test.txt", "r");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读（输入）操作
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fscanf(pf, "%d", &arr[i]);
//	}
//	//输出数据到屏幕上
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	//关闭文件指针pf指向的文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//打开文件 - 文本文件 - 只读
//	FILE* pf = fopen("test.txt", "r");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读(输入)文件操作
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//打开文件 - 文本文件 - 只读
//	FILE* pf = fopen("test.txt", "w");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读(输入)文件操作
//	int ch = 'a';
//	for (; ch <= 'z'; ch++) {
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读操作
//	char str[20] = { 0 };
//	//读取最多四个字符组成一个字符串
//	fgets(str, 8, pf);
//	if (str != NULL) {
//		printf("%s\n", str);
//
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写操作
//	char str1[20] = "Hello world!";
//	char str2[20] = "Hello world!\n";
//	char str3[20] = "Hello world!\n";
//	fputs(str1, pf);
//	fputs(str2, pf);
//	fputs(str3, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//struct book {
//	char book_name[50];
//	int day;
//	float price;
//};
//
//int main() {
//	struct book a = { 0 };
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", a.book_name, &a.day, &a.price);
//	printf("%s %d %f", a.book_name, a.day, a.price);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//struct book {
//	char book_name[50];
//	int day;
//	float price;
//};
//
//int main() {
//	struct book a = { "Journeytothewest", 10, 60.5};
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", a.book_name, a.day, a.price);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//struct book {
//	char book_name[50];
//	int day;
//	float price;
//};
//
//int main() {
//	struct book a = { 0 };
//	//打开文件 - 二进制 -读
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&a, sizeof(struct book), 1, pf);
//	printf("%s %d %f", a.book_name, a.day, a.price);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//struct book {
//	char book_name[50];
//	int day;
//	float price;
//};
//
//int main() {
//	struct book a = { "Journeytothewest", 10, 60.5 };
//	//打开文件 - 二进制 -写
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(struct book), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char* p = "hello";
//	char c = NULL;
//	char* q = &c;
//	char a = 0;
//	int ret = sscanf(q, "%c", &a);
//	printf("%d\n", ret);
//	if (ret == 1)
//		printf("%d\n", ret);
//	else { 
//		printf("2\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char str[100] = "helloworld! 1024 1024.2";
//	char s[20] = { 0 };
//	int a = 0;
//	float b = 0.0;
//	//读数据,参数别忘了取地址
//	sscanf(str, "%s %d %f", s, &a, &b);
//	printf("%s %d %f", s, a, b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char str[100] = { 0 };
//	char s[] = "hello world!";
//	int a = 1024;
//	float b = 1024.2f;
//	//
//	sprintf(str, "%s %d %f", s, a, b);
//
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char str[20] = { 0 };
//	int a = 0;
//	fscanf(stdin, "%s %d", str, &a);
//
//	fprintf(stdout, "%s %d", str, a);
//	return 0;
//}

#include <stdio.h>
#include <windows.h>

int main() {
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//
	int a = 10000;
	fprintf(pf, "%d", a);
	//文件指针指向文件位置指示器设置为起始位置
	fseek(pf, 0, SEEK_SET);

	//关闭文件
	fclose(pf);
	pf = NULL;
	//睡眠10秒
	Sleep(10000);

	pf = fopen("test.txt", "r");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//从文件读一个字符
	int c = fgetc(pf);
	printf("%c\n", c);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}