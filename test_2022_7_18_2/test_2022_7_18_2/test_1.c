#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//struct str {
//    int len;
//    char s[0];
//};
//
//struct foo {
//    struct str* a;
//};
//
//int main(int argc, char** argv) {
//    struct foo f = { 0 };
//    if (f.a->s) {
//        printf("%x\n", f.a->s);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//struct test {
//    int i;
//    short c;
//    char* p;
//};
//
//int main() {
//    struct test* pt = NULL;
//    pt->i;
//    pt->c;
//    *pt->p;
//
//    printf("%d\n", sizeof(struct test));
//
//    return 0;
//}

//FILE

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main() {
//	//打开文件
//	//FILE* pf = fopen("text.txt", "r");
//	FILE* pf = fopen("C:\\Users\\未禾\\Desktop\\text.txt", "r");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读写文件
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
//	FILE* pf = fopen("text.txt", "r");
//	FILE* pf = fopen("text.txt", "w");
//	FILE* pf = fopen("text.txt", "a");
//	FILE* pf = fopen("text.txt", "r+");
//	FILE* pf = fopen("text.txt", "w+");
//	FILE* pf = fopen("text.txt", "a+");
//	FILE* pf = fopen("text.txt", "rb");
//	FILE* pf = fopen("text.txt", "wb");
//	FILE* pf = fopen("text.txt", "ab");
//	FILE* pf = fopen("text.txt", "rb+");
//	FILE* pf = fopen("text.txt", "wb+");
//	FILE* pf = fopen("text.txt", "ab+");
//	FILE* pf = fopen("text.txt", "r+b");
//	FILE* pf = fopen("text.txt", "w+b");
//	FILE* pf = fopen("text.txt", "a+b");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//读写文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//写文件
//	fputc('a', pf);
//	int i = 0;
//	for (i = 'a'; i < 'z'; i++) {
//		fputc(i, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	//读文件
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
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
//	FILE* pf = fopen("text.txt", "w");
//	//判断文件是否打开成功
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//写一行，一个字符串
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//读一行，度字符串
//	char arr[20];
//	while (fgets(arr, 5, pf) != NULL) {
//		printf("%s", arr);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
////结构体
//struct S {
//	char name[20];
//	int num;
//	float score;
//};
//
//int main() {
//	struct S a = { "sunwukong", 1001, 99.9f };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写格式化的数据
//	fprintf(pf, "%s %d %f", a.name, a.num, a.score);
//	/*fprintf(stdout, "%s %d %f", a.name, a.num, a.score);*/
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	struct S c = { 0 };
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读格式化的数据
//	fscanf(pf, "%s %d %f", c.name, &c.num, &c.score);
//	/*fscanf(stdin, "%s %d %f", c.name, &c.num, &c.score);*/
//	printf("%s %d %f", c.name, c.num, c.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//FILE* stdin 标准输入流(键盘)
//FILE* stdout 标准输出流(屏幕)
//FILE* stderr 标准错误流(屏幕)
// 
//#include <stdio.h>
//
//struct S {
//	char name[20];
//	int num;
//	float score;
//};
//
//int main(){
//	struct S a = { "sunwukong", 1001, 99.8f };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL) {
//		perror("foopen");
//		return 1;
//	}
//	//二进制的方式写、输出
//	fwrite(&a, sizeof(struct S), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	pf = fopen("text.txt", "rb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式读、输入
//	struct S b = { 0 };
//	fread(&b, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", b.name, b.num, b.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//struct S {
//	char name[20];
//	int num;
//	float score;
//};
//
//int main() {
//	struct S a = { "sunwukong", 1001, 99.9f };
//	char str[100] = { 0 };
//	//把格式化数据转换为（写入）字符串
//	sprintf(str, "%s %d %f", a.name, a.num, a.score);
//	printf("%s\n", str);
//
//	//把字符串中的数据转换为格式化的数据（从字符串中读取格式化的数据）
//	struct S b = { 0 };
//	sscanf(str, "%s %d %f", b.name, &b.num, &b.score);
//	printf("%s %d %f\n", b.name, b.num, b.score);
//	return 0;
//}

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
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//#include <stdio.h>
//enum { 
//	SIZE = 5 
//};
//
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}

//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//模拟实现宏offsetoff
#include <stdio.h>
#include <stddef.h>

#define OFFSETOF(type, member) (size_t)(&(((type*)0)->member))

struct S {
	char c1;
	int i;
	char c2;
};


int main() {
	/*printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));*/
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}
