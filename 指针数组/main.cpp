#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 指针数组仍是数组，但数组中的元素是指针*/
int main(){
	
	
	int* parr[2];		//存放整型指针的数组：指针数组
	int arr1[] = { 1,2,3,0 };
	int arr2[] = { 4,5,6,7 };
	parr[0] = arr1;
	parr[1] = arr2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", parr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

