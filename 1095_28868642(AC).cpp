#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int n, small;
	int a[10000] = {};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i <n; i++) {
		if (i == 0) {
			small = a[i];
		}
		else {
			if (small > a[i]) {
				small = a[i];
			}
		}
	}
		printf("%d ", small);
	return 0;
}

