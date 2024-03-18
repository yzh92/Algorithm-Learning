#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int year;
	scanf("%d", &year);
	if (0 == year % 4 && 0 != year % 100 || 0 == year % 400)
		printf("yes");
	else
		printf("no");
	return 0;
}