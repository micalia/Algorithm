#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d.%d.%d", &a,&b, &c);
	printf("%04d.%02d.%02d", a,b,c);
}
