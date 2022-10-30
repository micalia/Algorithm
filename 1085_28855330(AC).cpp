#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	long long h, b, c, s;
	double bit;
	double result;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	
	//bit = (h * b * c * s) / 8;
	//result = ;
	
	printf("%.1f MB", (float)(h * b * c * s) / (1024 * 1024 * 8));
	return 0;
}

