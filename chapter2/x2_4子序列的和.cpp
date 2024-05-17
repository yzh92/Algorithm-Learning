#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int n, m;
	int count = 1;
	while (scanf("%d%d", &n, &m) && n) {
		double sum = 0;
		for (int i = n; i <= m; i++) {
			sum += 1.0 / i / i;
		}
		printf("Case %d:%.5f\n", count++, sum);
	}
	return 0;
}