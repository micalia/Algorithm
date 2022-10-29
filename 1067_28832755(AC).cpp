#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);	
	
	if (a > 0) {
		printf("plus\n");
		if (a % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	else{
		printf("minus\n");
		if (a % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	return 0;
}

