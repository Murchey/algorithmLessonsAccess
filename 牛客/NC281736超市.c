//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int peach,apple,money;
    scanf("%d %d %d",&money,&apple,&peach);
    int weight=money/(apple<peach?apple:peach);
    printf("%d",weight);
}