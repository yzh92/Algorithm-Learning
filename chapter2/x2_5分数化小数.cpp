#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	int count = 1;
	while (scanf("%d%d%d", &a, &b, &c) == 3 && a && b && c) {
		printf("Case %d:%.*lf\n", count++, c, double(a) / double(b));
	}
	return 0;
}