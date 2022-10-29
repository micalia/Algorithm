#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	char val='a';
	while (true) {
		if (val != 'q') {
			scanf("%c", &val);
			if(val!=' ')
			printf("%c\n", val);
		}
		else {
			break;
		}
	}
	return 0;
}

