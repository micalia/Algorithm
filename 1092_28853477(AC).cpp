#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int day = 1;
	int f, s, t;
	scanf("%d %d %d", &f, &s, &t);
	while (true) {
		if (day % f == 0 && day % s == 0 && day % t == 0) break;
		day++;
	}
	printf("%d", day);
	return 0;
}

