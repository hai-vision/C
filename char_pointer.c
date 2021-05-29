#include <stdio.h>


/*
	字符指针的进阶

*/

int main() {
	
	//char ch[] = "abcdf";
	//char* pc = ch;		// 字符数组名即是字符数组首元素的地址
	//printf("%s\n", ch);		// 打印字符数组中的字符串
	//printf("%s\n", pc);		// 根据字符数组首元素的地址，打印数组元素的内容

	//char* p = "abcdf";			// "abcdf"是字符串常量，这条语句的含义是将字符串常量的第一个字符‘a’的地址存到字符指针p中

	//printf("%c\n", *p);			// 打印指针p指向的内存地址中的值
	//printf("%s\n", p);			// 通过指针p的地址找到字符串常量的内容

	char* pc = "abcdf";
	*pc = 'W';
	printf("%s\n", pc);

	return 0;
}