#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) {
			printf("X ");
		}
		else {
			printf("%d ", i);
		}
	}
	
	return 0;
}

