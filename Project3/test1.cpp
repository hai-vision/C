//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<iostream>
//#include<omp.h>
//using namespace std;
//
//int main()
//{
//	int tid;    //��ʾ��ǰ�̺߳�
//	int nthreads;   //��ʾ���е��߳���
//	omp_set_num_threads(8);     //��������8���߳�
//
//	int a[8] = { 1,2,3,4,5,6,7,8 };
//	int b[8] = { 1,2,3,4,5,6,7,8 };
//	int c[8];					//a��b�����Ӵ����c��
//
//	/*��������ʼ*/
//#pragma omp parallel private(tid,nthreads) shared(a,b,c)
//	{
//#pragma omp for
//		for (int i = 0; i < 8; i++)
//		{
//			tid = omp_get_thread_num();   //��ȡ��ǰ�Ľ��̺�
//			nthreads = omp_get_num_threads();     //��ȡ�ܽ�����
//			c[i] = a[i] + b[i];
//
//			cout << "�߳�����" << nthreads << endl;
//			cout << "�̺߳ţ�" << tid;
//			cout << ",c[" << i << "]=" << c[i] << endl;
//			cout << "\n" << endl;
//			/*printf("�߳�����%d\n", nthreads);
//			printf("�̺߳ţ�%d\t", tid);
//			printf("c[%d]=%d\n", i, c[i]);
//			printf("\n");*/
//
//		}
//	}
//	/*�����������*/
//	return 0;
//}
