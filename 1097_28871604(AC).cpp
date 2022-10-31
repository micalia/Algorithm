#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
    int n, i, j, x, y;
    int a[20][20] = {};
    for (i = 1; i <= 19; i++) 
        for (j = 1; j <= 19; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &n); 

    for (i = 1; i <= n; i++) 
    {
        scanf("%d %d", &x, &y);
        for (j = 1; j <= 19; j++) 
        {
            if (a[x][j] == 0) a[x][j] = 1;
            else a[x][j] = 0;
        }
        for (j = 1; j <= 19; j++) 
        {
            if (a[j][y] == 0) a[j][y] = 1;
            else a[j][y] = 0;
        }
    }

    for (int q = 1; q <= 19; q++) {
        for (int w = 1; w <= 19; w++) {
            printf("%d ", a[q][w]);
        }
        printf("\n");
    }
	return 0;
}

