#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	long long int a, b, c, sum;
	float avg;
	scanf("%lld %lld %lld", &a, &b, &c);
	sum = a + b + c;	
	avg = sum / 3.0f;
	printf("%lld\n", sum);
	printf("%.1f", avg);
	return 0;
}

