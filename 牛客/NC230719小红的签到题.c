//
// Created by OYSmur on 2025/10/29.
//
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (c==0) {
        printf("0");
    }else {
        int akPerson=c/a;//总题数/参赛人数=每人达对的题数
        //总ac题数/总题数=ac人数
        printf("%d",akPerson);
    }
}