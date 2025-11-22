//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int steepDegree=abs(a-b)+abs(b-c);
    printf("%s",steepDegree==0?"Yes":"No");
}
