#define _CRT_SECURE_NO_WARNINGS 1

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
//		//�ж���ʲôԭ�������
//		if (ferror(fp))
//			puts("I/O error when reading");
//		else if (feof(fp))
//			puts("End of file reached successfully");
//	fclose(fp);
//}


//#include <stdio.h>
//
//int main() {
//    //���ļ�
//    FILE* pf = fopen("test.txt", "r");
//    if (!pf) {
//        perror("fopen");
//        return 1;
//    }
//    //��ȡ�ַ�
//    int c = 0;
//    while ((c = fgetc(pf)) != EOF) {
//        printf("%c ", c);
//    }
//    //�ļ���ȡ�������ж�ԭ��
//    if (feof(pf)) {
//        printf("�����ļ�ĩβ������!\n");
//    }
//    else if (ferror(pf)) {
//        printf("��ȡ���������!\n");
//    }
//
//    //�ر��ļ�
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
//	printf("�Ȱ������͵�������,����10s\n");
//	Sleep(10000);
//	printf("ǿ��ˢ�»�����,����10s����Ϊ�ر��ļ�Ҳ��ǿ��ˢ�»�����\n");
//	fflush(pf);
//	Sleep(10000);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}