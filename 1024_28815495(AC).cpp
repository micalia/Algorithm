#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	char d[20];
	scanf("%s", d);
	for(int i=0;d[i]!='\0';i++)
	{
		printf("\'%c\'\n", d[i]);
	}
	return 0;
}
