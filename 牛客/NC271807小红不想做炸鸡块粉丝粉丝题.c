//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int a[6]={0};
    for(int i=0;i<6;i++) {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<6;i++) {
        sum+=a[i];
    }
    if(a[0]<sum/30) {
        printf("Yes");
    }else {
        printf("No");
    }
}