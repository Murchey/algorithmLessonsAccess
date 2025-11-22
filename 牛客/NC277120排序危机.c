//
// Created by OYSmur on 2025/10/30.
//
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[n+1];
    char strNew[n+1];
    scanf("%s",str);
    int index=0;
    for(int i=0;i<n;i++) {
        if(str[i]>='a' && str[i]<='z') {
            strNew[index++]=str[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(str[i]>='0' && str[i]<='9') {
            strNew[index++]=str[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(str[i]>='A' && str[i]<='Z') {
            strNew[index++]=str[i];
        }
    }
    printf("%s",strNew);
}