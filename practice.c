#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/* ����ָ�뽻����������ֵ*/
void swap(int* p1, int* p2) {
	if (*p1 < *p2) { //��paָ����ڴ��ַ�е�ֵС��pbָ����ڴ��ַ��ֵʱ��������ֵ

		int tmp = 0;		//����һ����ʱ���������ݴ�*p1��ֵ
		tmp = *p1;	
		*p1 = *p2;
		*p2 = tmp;
	}
	

}

int main() {
	int a = 2;
	int b = 5;
	int* pa = &a;	// paָ��a���ڴ��ַ
	int* pb = &b;	// pbָ��b���ڴ��ַ
	swap(pa, pb);
	printf("max=%d, min=%d", *pa, *pb);
	return 0;
}