#define _CRT_SECURE_NO_WARNINGS 1
//ʹvoid (*)(int)������Ϊpf
typedef void (* pf)(int);
//��void (* signal( int , void (*)(int) ) )(int)���л���
pf signal(int, pf);