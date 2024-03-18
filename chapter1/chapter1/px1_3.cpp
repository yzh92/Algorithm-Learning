#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum = 0, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}