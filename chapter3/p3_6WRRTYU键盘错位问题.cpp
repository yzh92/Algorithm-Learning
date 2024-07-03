#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main() {
	int i = 0;
	for (i; i < strlen(s) ; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
	}
	int l, c;
	while ((c = getchar()) != EOF) {
		for (l = 0; l < strlen(s); l++) if (c == s[l]) break;
		if (s[l])
			putchar(s[l - 1]);
		else
			putchar(c);
	}
	return 0;
}