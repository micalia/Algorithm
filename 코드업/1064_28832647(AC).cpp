#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);	
	printf("%d", c<(a<b?a:b)?c: (a < b ? a : b));
	return 0;
}

