//
// Created by OYSmur on 2025/10/30.
//
#include <stdio.h>
int main() {
    int a,b,c;//伤害，增强倍数，护盾
    scanf("%d %d %d",&a,&b,&c);
    if (a*b<=c) {
        printf("YES");
    }else {
        printf("NO");
    }

}