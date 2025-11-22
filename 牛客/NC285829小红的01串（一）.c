//
// Created by OYSmur on 2025/11/7.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    int cnt=0;
    for (int i = 0; i<strlen(str)-1; i++) {
        if (str[i]!=str[i+1]) {
            cnt++;
        }
    }
    printf("%d", cnt);
}
