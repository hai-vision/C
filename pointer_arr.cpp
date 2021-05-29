//#include <stdio.h>
//
///* 指针数组*/
//int main() {
//
//	int nums[5] = { 0 };	// 整型数组
//	char ch[] = "Hello world";	// 字符数组
//
//	// 整型指针数组：指针数组。即数组中存放的数据是指针类型
//	int a = 12;
//	int b = 13;
//	int c = 14;
//
//	int*  pa[3] = { &a, &b, &c };
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", *pa[i]);
//	}
//	return 0;
//}
//
//int main() {
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int arr3[] = { 11,12,13,14,15 };
//	int* arr[] = { arr1, arr2, arr3 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d\t", *(arr[i]+j));	// 通过arr[i]找到每个数组的首元素地址，通过指针的+1操作可以找到每个数的内存地址, 
//			//printf("%d\t", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
///*数组指针*/
//void Print(int(*p)[5], int x, int y) {	// 得到的是第一个数组的地址
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			/*
//				p+i得到每个数组的地址，进行解引用得到改行的数组名（即数组首元素地址）
//				*(p+i)+j，找到第i行第j列的地址 
//				*((p+i)+j)，找到第i行第j列的地址对应的元素值
//			*/
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = {
//		{1,2,3,4,5},
//		{2,3,4,5,6},
//		{3,4,5,6,7}
//	};
//
//	//Print(arr, 3, 5);
//	int a[5] = { 0 };
//	int* pa = a;
//	for (int i = 0; i < 5; i++) {
//		*(pa + i) = i;
//		printf("%d ", *(pa + i));
//	}
//
//	return 0;
//}
//
//int main() {
//
//	int arr[5] = { 1,2,3,4,5 };
//	/*int(*pa)[5] = &arr;
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *(*pa + i));
//	}*/
//	int* pa = arr;
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", pa[i]);
//	}
//	return 0;
//}