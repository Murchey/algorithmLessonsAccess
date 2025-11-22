//
// Created by OYSmur on 2025/10/26.
//
#include <stdio.h>
int main() {
    int grades[6]={0};
    for (int i=0;i<6;i++) {
        scanf("%d",&grades[i]);
    }
    int sum=0;
    for (int i=0;i<6;i++) {
        sum+=grades[i];
    }
    printf("%d",sum);
}