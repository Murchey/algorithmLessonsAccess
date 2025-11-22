//
// Created by OYSmur on 2025/11/4.
//
#include <stdatomic.h>
#include <stdio.h>
int main() {
    long long x=0,y=0,z;
    scanf("%lld",&z);
    if(z==1||z==2) {
        printf("NO");
    }else {
        printf("YES\n");
        printf("%lld 1",z-1);
    }
}