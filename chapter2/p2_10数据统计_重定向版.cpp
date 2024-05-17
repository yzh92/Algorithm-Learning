#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define INF 10000000000
#define LOCAL
int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // DEBUG
	int x, n = 0, min = INF, max = -INF, s = 0;
	while (scanf("%d", &x) == 1) {
		s += x;
		if (x < min) min = x;
		if (x > max) max = x;
		n++;
	}
	printf("%d %d %.3f\n", min, max, (double)s / n);
	return 0;
}