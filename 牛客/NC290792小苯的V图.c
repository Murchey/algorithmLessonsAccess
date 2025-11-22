//
// Created by OYSmur on 2025/11/1.
//
#include <stdio.h>
int main() {
    int arr[3]={0};
    for(int i=0;i<3;i++) {
        scanf("%d",&arr[i]);
    }
    if (arr[0]>arr[1] && arr[2]>arr[1]) {
        printf("YES");
    }else {
        printf("NO");
    }
}