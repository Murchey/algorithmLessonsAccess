//
// Created by OYSmur on 2025/10/28.
//
#include <math.h>
#include <stdio.h>
int main() {
    int earnings,target;
    scanf("%d %d",&earnings,&target);
    printf("%.0f",ceil((double)target/(double)earnings));
}