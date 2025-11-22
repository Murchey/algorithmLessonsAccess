//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int num,cnt=0;
    scanf("%d",&num);
    while (num%10!=0) {
        num++;
        cnt++;
    }
    printf("%d",cnt);
}
