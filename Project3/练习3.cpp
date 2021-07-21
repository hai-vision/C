#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(){
//
//	//整型数据与浮点型数据在内存中存储是有区别的
//	int a = 9;
//	float* pf = (float*)&a;
//	printf("%d\n", a);
//	printf("%f\n", *pf);
//
//	*pf = 9.0;
//	printf("%d\n", a);
//	printf("%f\n", *pf);
//	
//	//float a = 5.5;
//	// 5.5 = 101.1 = 1.011*2^2
//	//浮点数的规格化
//	// (-1)^s * M * 2^e
//	// s=0
//	// M=1.011
//	// E=e+127=129
//	//在内存中存储的形式
//	// 0 1000 0001 011 1111 1111 1111 1111 1111
//	// 在内存中对应的0x：40b00000
//	// 小端存储模式下的地址形式
//	// 00 00 b0 40
//	//printf("%f\n", a);
//
//	return 0;
//}

//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* pc1 =(char*) "abcdef";
//	char* pc2 = (char*)"abcdef";
//	if (arr1 == arr2) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	if (pc1 == pc2) {
//		printf("相等\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	return 0;
//}

