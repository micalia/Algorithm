﻿#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;;i++){
        if(sum>=n){
            printf("%d",sum);
            break;
        }
        sum+=i;
    }
    
    return 0;
}
