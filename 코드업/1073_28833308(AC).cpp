#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int a=-1;
	
	while (a!=0) {
		scanf("%d", &a);
		if(a!=0)
			printf("%d\n", a);
	}
	return 0;
}

