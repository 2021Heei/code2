#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	//��ֻд��ģʽ���ļ�test.txt
//	FILE* pf = fopen("test.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д�����������
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(pf, "%d ", i);
//	}
//	//�ر��ļ�ָ��pfָ����ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//��ֻ����ģʽ���ļ�test.txt
//	FILE* pf = fopen("test.txt", "r");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//�������룩����
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fscanf(pf, "%d", &arr[i]);
//	}
//	//������ݵ���Ļ��
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	//�ر��ļ�ָ��pfָ����ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//���ļ� - �ı��ļ� - ֻ��
//	FILE* pf = fopen("test.txt", "r");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//��(����)�ļ�����
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	//���ļ� - �ı��ļ� - ֻ��
//	FILE* pf = fopen("test.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//��(����)�ļ�����
//	int ch = 'a';
//	for (; ch <= 'z'; ch++) {
//		fputc(ch, pf);
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
//	FILE* pf = fopen("test.txt", "r");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//������
//	char str[20] = { 0 };
//	//��ȡ����ĸ��ַ����һ���ַ���
//	fgets(str, 8, pf);
//	if (str != NULL) {
//		printf("%s\n", str);
//
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
//	FILE* pf = fopen("test.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д����
//	char str1[20] = "Hello world!";
//	char str2[20] = "Hello world!\n";
//	char str3[20] = "Hello world!\n";
//	fputs(str1, pf);
//	fputs(str2, pf);
//	fputs(str3, pf);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%s %d %f", a.book_name, &a.day, &a.price);
//	printf("%s %d %f", a.book_name, a.day, a.price);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %f", a.book_name, a.day, a.price);
//
//	//�ر��ļ�
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
//	//���ļ� - ������ -��
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&a, sizeof(struct book), 1, pf);
//	printf("%s %d %f", a.book_name, a.day, a.price);
//
//	//�ر��ļ�
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
//	//���ļ� - ������ -д
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(struct book), 1, pf);
//
//	//�ر��ļ�
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
//	//������,����������ȡ��ַ
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
	//�ļ�ָ��ָ���ļ�λ��ָʾ������Ϊ��ʼλ��
	fseek(pf, 0, SEEK_SET);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	//˯��10��
	Sleep(10000);

	pf = fopen("test.txt", "r");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//���ļ���һ���ַ�
	int c = fgetc(pf);
	printf("%c\n", c);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}