#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// &&>||
int main() {
    int a = 0, b = 0, c = 1;
    printf("%d\n", a && b || c);
    printf("%d", a && c || b);
    return 0;
}