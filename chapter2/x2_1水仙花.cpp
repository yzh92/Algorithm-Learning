#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	for (int i = 100; i < 1000; i++) {
		int u = i % 10;
		int t = (i / 10) % 10;
		int h = i / 100;
//		printf("%d,%d,%d\n", h, t, u);
		if (i == (pow(u, 3) + pow(t, 3) + pow(h, 3)))
			printf("%d\n", i);
	}
	return 0;
}