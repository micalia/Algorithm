#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	
	Apoint:
	scanf("%d", &a);
	printf("%d\n", a);
	if (--n != 0)goto Apoint;

	return 0;
}

