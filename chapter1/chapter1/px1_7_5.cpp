#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int a =1, b = 1;
    int x = 0, y = 0;
    if (a) {
        if (b)
            x++;
        else
            y++;
    }
    printf("%d\n", x);
    printf("%d", y);
    return 0;
}