#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main() {
	int n;
	scanf("%d", &n);
	printf("%f %f", sin(n*PI/180), cos(n*PI/180));
	return 0;
}