//
// Created by OYSmur on 2025/11/10.
//
#include <stdio.h>
int main() {
    int maxConstainer=0,eaten=0;
    scanf("%d %d",&maxConstainer,&eaten);
    if (maxConstainer>eaten) {
        printf("%d",maxConstainer-eaten);
    }else {
        printf("quit the competition!");
    }
}