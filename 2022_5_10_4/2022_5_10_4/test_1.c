#define _CRT_SECURE_NO_WARNINGS 1
/*不允许创建临时变量，交换两个整数的内容*/
//1
#include <stdio.h>

int main(){
	int a = 5;
	int b = 10;
	//scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

//2
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}