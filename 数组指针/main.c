#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	/* 数组指针*/
	//int* pa = NULL;		//整型指针：指向整型的指针	- 可以存放整型的地址
	//char* pc = NULL;		//字符指针：指向字符的指针	- 可以存放字符的地址

	// 数组指针：指向数组的指针 - 可以存放数组的地址
	//int(*pa)[2] = NULL;

	//char* arr[5];		// 指针数组：arr是一个数组，数组中的每个元素是字符指针指针
	//char* (*p)[5] = &arr;
	// 数组指针：*p是一个指针，指向的是数组的5个元素，pa指向的数组的元素类型是char*

	/*int arr2[10] = { 0 };
	int (*p1)[10] = &arr2;*/

	void print(int(*p)[5], int x, int y);
	int a[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	print(a, 2, 5);

	return 0;
}

void print(int(*p)[5], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			//printf("%d\t", (*(p+i))[j]);		//p是第一行的地址，+1到达第二行，依次类推，*解引用得到第一行首元素的地址
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
}