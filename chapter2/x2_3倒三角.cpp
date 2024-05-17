#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int space_len = i - 1;
		int label_len = 2*(n - i) + 1;
		while (space_len--) 
			printf(" ");

		while (label_len--)
			printf("#");
		printf("\n\n");
	}
	return 0;
}