//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d",b+(b-a));
}