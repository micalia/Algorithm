#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a, b;
	int sum, sub, multiply, intQuotient,remainder;
	float quotient;
	scanf("%d %d", &a, &b);
	sum = a + b;
	sub = a - b;
	multiply = a * b;
	intQuotient = a / b;
	quotient = (float)a / b;
	remainder = a % b;
	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", multiply);
	printf("%d\n", intQuotient);
	printf("%d\n", remainder);
	printf("%.2f", quotient);
	return 0;
}
