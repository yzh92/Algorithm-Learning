#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//3n+1����

int main() {
	int n2, count = 0;
	scanf("%d", &n2);
	//ע��������� test:987654321
	long long n = n2;
	while (n>1) {
		if (n % 2 == 0)
			n = n / 2;
		else
			n = 3 * n + 1;
		count++;
	}
	printf("%d", count);
	return 0;
}