//
// Created by OYSmur on 2025/11/10.
//
#include <stdio.h>
int main() {
    int arr[3]={0};
    for (int i=0;i<3;i++) {
        scanf("%d",&arr[i]);
    }

    int differ12=0;
    int differ23=0;
    differ12=arr[1]-arr[0];
    differ23=arr[2]-arr[1];
    printf("%s",differ12==differ23&&differ23==1?"Yes":"No");
}