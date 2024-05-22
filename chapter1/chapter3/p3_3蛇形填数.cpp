#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define maxn 25

int a[maxn][maxn];

int main() {
	int x, y,n, count = 1;
	memset(a, 0, sizeof(a));
	scanf("%d", &n);
	x = 0;
	y = n - 1;
	a[x][y] = 1;
	while (count < n * n) {
		while (x+1 < n && !a[x+1][y]) a[++x][y] = ++count;
		while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++count;
		while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++count;
		while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++count;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

}