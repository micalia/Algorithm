#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int sum = 0;
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0) sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}

