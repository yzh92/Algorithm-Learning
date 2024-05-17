#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	int count = 1;
	while (scanf("%d%d%d", &a, &b, &c)==3) {
		if (a >= 3 && b >= 5 && c >= 7)
			printf("Case%d:No answer\n",count);
		else {
			int i = 10;
			for (; i <= 100; i++) {
				if (i % 3 == a && i % 5 == b && i % 7 == c) {
					printf("Case%d:%d\n", count, i);
					break;
				}
			}
			if (i > 100)
				printf("Case%d:No answer\n",count);
		}

		count++;
	}
	return 0;
}