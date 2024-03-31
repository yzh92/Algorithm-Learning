#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			int m = i * 1100 + j * 11;

			if (sqrt(m) == floor(sqrt(m)+0.5))
				printf("%d\n", m);
		}
	}
	printf("%lf\n", floor(2.0));
	return 0;
}