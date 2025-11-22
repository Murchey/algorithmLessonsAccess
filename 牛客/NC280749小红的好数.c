//
// Created by OYSmur on 2025/10/27.
//
#include <stdio.h>
// 小红定义一个正整数是“好数”，当且仅当该数满足以下两个性质：
// 1. 数位恰好为2。
// 2. 个位数和十位数相同。
int main() {
    long long num=0;
    scanf("%lld",&num);
    if (num<100&&num/10==num%10) {
        printf("Yes");
    }else {
        printf("No");
    }
}