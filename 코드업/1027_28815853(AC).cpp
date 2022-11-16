#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int year, month, date;
	scanf("%04d.%02d.%02d", &year, &month, &date);
	printf("%02d-%02d-%04d", date, month, year);
	return 0;
}
