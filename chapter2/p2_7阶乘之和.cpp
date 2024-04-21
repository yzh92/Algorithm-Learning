#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MOD 1000000
int main() {
	int n, s = 0;
	scanf("%d", &n);
	// mine
	//int factorial = 1;
	//for (int i = 1; i <= n; i++) {
	//	factorial *= i;
	//	s += factorial;
	//}
	//book
	for (int i = 1; i <= n; i++) {
		int factorial = 1;
		for (int j = 1; j <= i; j++)
			factorial *= j;
		s += factorial;
		//printf("%d\n", s);
	}
	printf("%d\n", s%MOD);
	return 0;
}