//
// Created by OYSmur on 2025/11/9.
//
#include <stdio.h>
int main() {
    int arr[]={0,0,1,1,1,1};
    int x;
    scanf("%d",&x);
    printf("%s",arr[x-1]==1?"NO":"YES");
}