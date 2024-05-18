#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算机浮点数存储问题，0.1不能被准确表示相加，故不能准确加到10.0
int main() {
	double i;
	for (i = 0; i != 10; i+=0.1) {
		printf("%.1f\n", i);
	}
	return 0;
}