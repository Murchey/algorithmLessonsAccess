//
// Created by OYSmur on 2025/10/27.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]=" ";
    scanf("%s",str);
    char str2[100]=" ";
    for(int i=0;i<strlen(str)-3;i++) {
        str2[i]=str[i];
    }
    printf("%s\n",str2);
}
