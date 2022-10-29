#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int input;
	int sum = 0;
	int n = 0;
	scanf("%d", &input);
	while (true) {
		if (sum < input) {
			n++;
			sum += n;
		}
		else {
		printf("%d", n);
			break;
		}
	}
	
	return 0;
}

