//
// Created by OYSmur on 2025/11/9.
//
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char res[n+2];
    for(int i=0;i<n;i++) {
        if(i==n/2) {
            res[i]='_';
        }else {
            res[i]='k';
        }
    }
    for(int i=0;i<n;i++) {
        printf("%c",res[i]);//答案不能包含字符串末尾的‘\0’
    }
}