//
// Created by OYSmur on 2025/11/9.
//
#include <math.h>
#include <stdio.h>
int main() {
    int time1=0,time2=0;
    int n;
    scanf("%d",&n);
    time1=(int)pow(2,n);
    time2=(int)pow(n,3);
    printf("%c",time1<time2?'A':'B');
}