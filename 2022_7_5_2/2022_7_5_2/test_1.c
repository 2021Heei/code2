#define _CRT_SECURE_NO_WARNINGS 1
//使void (*)(int)重命名为pf
typedef void (* pf)(int);
//对void (* signal( int , void (*)(int) ) )(int)进行化简
pf signal(int, pf);