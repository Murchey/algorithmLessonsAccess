//
// Created by OYSmur on 2025/10/29.
//
#include <stdio.h>
int main() {
    char str[3];
    scanf("%c%c%c",&str[0],&str[1],&str[2]);
    if (str[0]==str[2]) {
        printf("YES");
    }else {
        printf("NO");
    }
}