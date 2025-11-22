//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int len=0,coins=0,hpcnt=0;
    scanf("%d%d",&len,&coins);
    int arr[len],rest=0;
    rest=coins;
    for(int i=0;i<len;i++) {
        scanf("%d",&arr[i]);
        if (coins>=arr[i]) {
            hpcnt++;
            if (rest>coins-arr[i]) {
                rest=coins-arr[i];
            }
        }
    }

    printf("%d %d",hpcnt,rest);
}