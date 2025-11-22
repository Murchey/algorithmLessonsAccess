//
// Created by OYSmur on 2025/11/14.
//
#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int flagLeft=0,flagRight=0;
    if (a>=c) {
        flagLeft=1;
    }
    if (b<=d) {
        flagRight=1;
    }
    printf("%s",flagLeft==1&&flagRight==1?"A":"B");
}