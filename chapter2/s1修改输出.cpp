#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i+=2) {
		//printf("%d\n", i);
		printf("%d\n", i);
	}
	return 0;
}