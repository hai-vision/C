//#include <stdio.h>
//
///* ָ������*/
//int main() {
//
//	int nums[5] = { 0 };	// ��������
//	char ch[] = "Hello world";	// �ַ�����
//
//	// ����ָ�����飺ָ�����顣�������д�ŵ�������ָ������
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
//			printf("%d\t", *(arr[i]+j));	// ͨ��arr[i]�ҵ�ÿ���������Ԫ�ص�ַ��ͨ��ָ���+1���������ҵ�ÿ�������ڴ��ַ, 
//			//printf("%d\t", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
///*����ָ��*/
//void Print(int(*p)[5], int x, int y) {	// �õ����ǵ�һ������ĵ�ַ
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			/*
//				p+i�õ�ÿ������ĵ�ַ�����н����õõ����е�����������������Ԫ�ص�ַ��
//				*(p+i)+j���ҵ���i�е�j�еĵ�ַ 
//				*((p+i)+j)���ҵ���i�е�j�еĵ�ַ��Ӧ��Ԫ��ֵ
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