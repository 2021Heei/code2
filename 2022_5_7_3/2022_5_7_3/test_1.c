#define _CRT_SECURE_NO_WARNINGS 1
//нд╪Ч
#include <stdio.h>

//int main() {
//	//open
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//operataion
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	//close
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>
int main() {
	//open
	FILE* pf = fopen("text.dat", "w");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//opreation
	int ret = fgetc(stdin);
	fputc(ret, pf);
	ret = fgetc(stdin);
	fputc(ret, pf);
	ret = fgetc(stdin);
	fputc(ret, pf);
	//close
	fclose(pf);
	pf = NULL;
	return 0;
}