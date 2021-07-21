//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<iostream>
//#include<omp.h>
//using namespace std;
//
//int main()
//{
//	int tid;    //表示当前线程号
//	int nthreads;   //表示所有的线程数
//	omp_set_num_threads(8);     //设置启用8个线程
//
//	int a[8] = { 1,2,3,4,5,6,7,8 };
//	int b[8] = { 1,2,3,4,5,6,7,8 };
//	int c[8];					//a、b结果相加存放在c中
//
//	/*并行区域开始*/
//#pragma omp parallel private(tid,nthreads) shared(a,b,c)
//	{
//#pragma omp for
//		for (int i = 0; i < 8; i++)
//		{
//			tid = omp_get_thread_num();   //获取当前的进程号
//			nthreads = omp_get_num_threads();     //获取总进程数
//			c[i] = a[i] + b[i];
//
//			cout << "线程数：" << nthreads << endl;
//			cout << "线程号：" << tid;
//			cout << ",c[" << i << "]=" << c[i] << endl;
//			cout << "\n" << endl;
//			/*printf("线程数：%d\n", nthreads);
//			printf("线程号：%d\t", tid);
//			printf("c[%d]=%d\n", i, c[i]);
//			printf("\n");*/
//
//		}
//	}
//	/*并行区域结束*/
//	return 0;
//}
