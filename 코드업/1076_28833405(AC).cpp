#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	char a, first;
	first = 'a';
	scanf("%c", &a);
	do
	{
		printf("%c ", first);
		first++;
	} while (first<=a);

	return 0;
}

