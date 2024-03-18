#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PRICE 95
#define DISCOUNT 0.85
int main() {
	int n;
	scanf("%d", &n);
	float total_price = n * PRICE;
	if (total_price >= 300)
		total_price = DISCOUNT * total_price;
	printf("%.2f", total_price);
	return 0;
}