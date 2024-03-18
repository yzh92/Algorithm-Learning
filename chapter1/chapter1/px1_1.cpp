#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("average:%.3f", (a + b + c) / 3.0);
	return 0;
}