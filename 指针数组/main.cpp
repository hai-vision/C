#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ָ�������������飬�������е�Ԫ����ָ��*/
int main(){
	
	
	int* parr[2];		//�������ָ������飺ָ������
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

