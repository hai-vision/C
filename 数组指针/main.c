#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	/* ����ָ��*/
	//int* pa = NULL;		//����ָ�룺ָ�����͵�ָ��	- ���Դ�����͵ĵ�ַ
	//char* pc = NULL;		//�ַ�ָ�룺ָ���ַ���ָ��	- ���Դ���ַ��ĵ�ַ

	// ����ָ�룺ָ�������ָ�� - ���Դ������ĵ�ַ
	//int(*pa)[2] = NULL;

	//char* arr[5];		// ָ�����飺arr��һ�����飬�����е�ÿ��Ԫ�����ַ�ָ��ָ��
	//char* (*p)[5] = &arr;
	// ����ָ�룺*p��һ��ָ�룬ָ����������5��Ԫ�أ�paָ��������Ԫ��������char*

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
			//printf("%d\t", (*(p+i))[j]);		//p�ǵ�һ�еĵ�ַ��+1����ڶ��У��������ƣ�*�����õõ���һ����Ԫ�صĵ�ַ
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
}