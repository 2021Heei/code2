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
//	//���ļ�
//	//FILE* pf = fopen("text.txt", "r");
//	FILE* pf = fopen("C:\\Users\\δ��\\Desktop\\text.txt", "r");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//���ļ�
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
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//��д�ļ�
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('a', pf);
//	int i = 0;
//	for (i = 'a'; i < 'z'; i++) {
//		fputc(i, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	//���ļ�
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//���ļ�
//	FILE* pf = fopen("text.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//дһ�У�һ���ַ���
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//	fputs("hello world!\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("pf");
//		return 1;
//	}
//	//��һ�У����ַ���
//	char arr[20];
//	while (fgets(arr, 5, pf) != NULL) {
//		printf("%s", arr);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
////�ṹ��
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
//	//д��ʽ��������
//	fprintf(pf, "%s %d %f", a.name, a.num, a.score);
//	/*fprintf(stdout, "%s %d %f", a.name, a.num, a.score);*/
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	struct S c = { 0 };
//	pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//����ʽ��������
//	fscanf(pf, "%s %d %f", c.name, &c.num, &c.score);
//	/*fscanf(stdin, "%s %d %f", c.name, &c.num, &c.score);*/
//	printf("%s %d %f", c.name, c.num, c.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//FILE* stdin ��׼������(����)
//FILE* stdout ��׼�����(��Ļ)
//FILE* stderr ��׼������(��Ļ)
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
//	//�����Ƶķ�ʽд�����
//	fwrite(&a, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	pf = fopen("text.txt", "rb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//�����Ƶķ�ʽ��������
//	struct S b = { 0 };
//	fread(&b, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", b.name, b.num, b.score);
//	//�ر��ļ�
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
//	//�Ѹ�ʽ������ת��Ϊ��д�룩�ַ���
//	sprintf(str, "%s %d %f", a.name, a.num, a.score);
//	printf("%s\n", str);
//
//	//���ַ����е�����ת��Ϊ��ʽ�������ݣ����ַ����ж�ȡ��ʽ�������ݣ�
//	struct S b = { 0 };
//	sscanf(str, "%s %d %f", b.name, &b.num, &b.score);
//	printf("%s %d %f\n", b.name, b.num, b.score);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
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
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
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
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}
//ģ��ʵ�ֺ�offsetoff
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
