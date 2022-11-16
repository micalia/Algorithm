#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


int main() {
    int a[11][11] = {};
    int x,y;
    int NewY=2;
    int NewX = 2;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (x = NewX; x <= 10; x++)
    { 
        for (y = NewY; y <= 10; y++)
        {
            if (a[x][y] == 1) {
                y--;
                NewY = y;
                x += 1;
                if (a[x][y] == 2|| a[x][y] == 1) {
                    break;
                }
				a[x][y] = 9;
            }
            else {
                if (a[x][y] == 2) {
                    break;
                }
                a[x][y] = 9;
                NewY++;
            }
        }
        if (a[x][y] == 2) {
			a[x][y] = 9;
            break;
        } 
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	return 0;
}
