#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������������洢���⣬0.1���ܱ�׼ȷ��ʾ��ӣ��ʲ���׼ȷ�ӵ�10.0
int main() {
	double i;
	for (i = 0; i != 10; i+=0.1) {
		printf("%.1f\n", i);
	}
	return 0;
}