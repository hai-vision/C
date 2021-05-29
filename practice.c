#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/* 利用指针交换两个数的值*/
void swap(int* p1, int* p2) {
	if (*p1 < *p2) { //当pa指向的内存地址中的值小于pb指向的内存地址的值时，交换两值

		int tmp = 0;		//定义一个临时变量用来暂存*p1的值
		tmp = *p1;	
		*p1 = *p2;
		*p2 = tmp;
	}
	

}

int main() {
	int a = 2;
	int b = 5;
	int* pa = &a;	// pa指向a的内存地址
	int* pb = &b;	// pb指向b的内存地址
	swap(pa, pb);
	printf("max=%d, min=%d", *pa, *pb);
	return 0;
}