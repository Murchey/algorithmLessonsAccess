//
// Created by OYSmur on 2025/11/7.
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[6];
    scanf("%s",&str);
    int match[5]={0};
    if (str[0]=='w') {
        match[0]=1;
    }
    if (str[1]=='h') {
        match[1]=1;
    }
    if (str[2]=='i') {
        match[2]=1;
    }
    if (str[3]=='l') {
        match[3]=1;
    }
    if (str[4]=='e') {
        match[4]=1;
    }
    int num=0;
    for(int i=0;i<5;i++) {
        num+=match[i];
    }
    printf("%d",5-num);
}
