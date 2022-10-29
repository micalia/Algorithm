#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a;
	
	top:
	scanf("%d", &a);	
	if (0 == a)goto down;
	printf("%d\n", a);
	if(0!=a)goto top;
	down:
	
	
	return 0;
}

