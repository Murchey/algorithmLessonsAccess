//
// Created by OYSmur on 2025/10/29.
//
#include <stdio.h>

int main() {
    char str[5];
    scanf("%s",str);
    char second=str[1];
        str[1]=str[0];
    str[0]=second;
    printf("%s",str);
}
