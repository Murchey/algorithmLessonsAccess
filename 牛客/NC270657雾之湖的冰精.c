//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1+num2>9) {
        printf("No");
    }else if(num1+num2<0) {
        printf("No");
    }else {
        printf("Yes");
    }
}