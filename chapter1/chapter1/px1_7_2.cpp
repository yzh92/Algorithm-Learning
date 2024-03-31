#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
// 最大浮点小数位数五十位
int main() {
    double pi = 0.0, n = 1.0,t=1.0;
    while (1.0 / n >= 1e-6) {
        pi += 1.0/n*t;
        t = -1.0 * t;
        n = n + 2;
    }
    pi = 4 * pi;
    printf("%.100lf", pi); 
    return 0;
}