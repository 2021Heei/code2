#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main() {
//	int i = 0;
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf) {
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++) {
//		fprintf(pf, "file= %s,line= %d,date= %s,time= %s,i= %d\n",__FILE__,__LINE__,__DATE__, __TIME__,i);
//	}
//	//printf("%d", __STDC__);
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX 100
//
//int main() {
//	int a = MAX;
//	printf("%d", MAX);
//	return 0;
//}

//#include <stdio.h>
//
//#define ADD(x,y) ((x)+(y))
//
//int main() {
//	int n = ADD(3,6);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//
//#define M 100
//#define ADD(x,y) ((x)+(y)+(M))
//
//int main() {
//	int n = ADD(3,6);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//
////#define PRINT(X) (printf("the value of "#X" is %d", X))
//#define PRINT(X,FORMAT) (printf("the value of "#X" is "FORMAT, X))
//
//int main() {
//	float n = 10;
//	PRINT(n, "%lf\n");
//	return 0;
//}

//#include <stdio.h>
//
//#define CAT(a,b) a##b
//
//int main() {
//	int helloworld = 1024;
//	printf("%d\n", CAT(hello, world));
//	return 0;
//}

//#include <stdio.h>
//
//#define M 100
//
//int main() {
//	printf("%d\n", M);
////#undef M
//	printf("%d\n", M);
//	return 0;
//}

//#include <stdio.h>
//
////#define M
//
//int main() {
//	
//#ifdef M
//	printf("%d\n", 10);
//#endif
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//#if 0
//	printf("%d\n", 100);
//#endif
//		
//	return 0;
//
//}

//#include <stdio.h>
//
//int main() {
//#define M 9
////#if defined(M)
////	printf("%d\n", M);
////#endif
//
////#if !defined(M)
////	printf("%d\n", M);
////#endif
////#ifdef M
////	printf("%d\n", 10);
////#endif
//
////#ifndef M
////	printf("%d\n", M);
////#endif
//
//#if M>10
//	printf("%d\n", 11);
//#elif M==10
//	printf("%d\n", 10);
//#else
//	printf("%d\n", 9);
//#endif
//	return 0;
//}

//#include "test_3.h"
//#include "test_3.h"
//#include "test_3.h"
//#include "test_3.h"
//
//
//
//int main() {
//
//	return 0;
//}

#include <stdio.h>
#include <stddef.h>

#define OFFSETOF(s_type, member) (int)&(((s_type*)0)->member)
struct S {
	char a;
	int b;
	char c;
};
int main() {
	/*printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, b));
	printf("%d\n", offsetof(struct S, c));*/

	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));



	return 0;
}