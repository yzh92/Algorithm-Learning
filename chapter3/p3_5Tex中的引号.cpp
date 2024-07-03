#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int c, q = 1;
	while ((c = getchar()) != EOF){
		if (c == '"') {
			if (q)
				printf("``");
			else
				printf("%c", c);
			q = !q;
		}
		else {
			printf("%c", c);
		}
	}
	return 0;
}