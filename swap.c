#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(){

	void exchange(int* p1, int* p2, int* p3);
	int a = 5; 
	int b = 4; 
	int c = 7;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	exchange(pa, pb, pc);
	printf("%d%d%d", *pa, *pb, *pc);
	
	
	return 0;
}
void change(int* p1, int* p2) {
	
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	
	
}

void exchange(int* p1, int* p2, int* p3) {
	if (*p1 < *p2)
		change(p1, p2);
	if (*p1 < *p3)
		change(p1, p3);
	if (*p2 < *p3)
		change(p2, p3);
}