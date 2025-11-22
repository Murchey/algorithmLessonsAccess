//
// Created by OYSmur on 2025/11/2.
//
#include <stdio.h>
int main() {
    int len=0;
    scanf("%d",&len);
    char str[len];
    scanf("%s",str);
    char newStr[len];
    if (len%2==0) {
        for (int i=0;i<len/2;i++) {
            newStr[i]=str[i];
        }
        printf("%s",newStr);
    }else {
        for (int i=0;i<len/2+1;i++) {
            newStr[i]=str[i];
        }
        printf("%s",newStr);
    }

}