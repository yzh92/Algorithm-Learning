#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define INF 10000000000
int main() {
	int x, n = 0, min = INF, max = -INF, s = 0, kase = 0;
	while (scanf("%d", &n) == 1 && n) {
		int s = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			s += x;
			if (x > max) max = x;
			if (x < min) min = x;
		}
		if (kase) printf("\n");
		printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
	}
	return 0;
}