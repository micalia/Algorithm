﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int r,g,b;
	int c = 0;
	scanf("%d %d %d", &r, &g, &b);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < g; j++)
		{
			for (int k = 0; k < b; k++)
			{
				printf("%d %d %d\n", i,j,k);
				c++;
			}
		}
	}
	printf("%d", c);
	
	return 0;
}

