#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int is_repeat(int a, int b, int c);

int main() {
	for (int i = 100; i <= 333; i++) {
		int a = i, b = 2 * i, c = 3 * i;
		//printf("panduan:%d", is_repeat(a, b, c));
		if(is_repeat(a, b, c))
			printf("%d %d %d\n", a, b, c);
	}
	return 0;
}

int is_repeat(int a, int b, int c) {
	int t, digit[10] = { 0 };
	while (a) {
		t = a % 10;
		digit[t]++;
		a /= 10;
	}
	while (b) {
		t = b % 10;
		digit[t]++;
		b /= 10;
	}
	while (c) {
		t = c % 10;
		digit[t]++;
		c /= 10;
	}
	for(int i = 1; i < 10; i++) {
		if (digit[i] != 1)
			return 0;
	}
	return 1;
}
