#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//½üËÆ¼ÆËã
int main() {
	int t=1,fm=1,i = 1;
	double sum = 0,n;
	
	do {
		n = 1.0 / fm * t;
		sum += n;
		fm = 2 * i + 1;
		fm = 2 * i + 1;
		i++;
		t = -1 * t;
	} while (n > 1e-6);
	printf("%.6f\n", sum);
	return 0;
}