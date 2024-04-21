#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
int main() {
	int n, s = 0;
	const int MOD = 1000000;
	scanf("%d", &n);
	// mine
	//int factorial = 1;
	//for (int i = 1; i <= n; i++) {
	//	factorial *= i;
	//	s += factorial;
	//}
	//book 25的阶乘后面有6个0 后面的数不再影响结果
	if (n > 25)
		n = 25;
	for (int i = 1; i <= n; i++) {
		int factorial = 1;
		for (int j = 1; j <= i; j++)
			factorial = (factorial*j)%MOD;
		s = (s + factorial)%MOD;
		//printf("%d\n", s);
	}
	printf("%d\n", s);
	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}