//
// Created by OYSmur on 2025/10/23.
//
#include<stdio.h>
int main() {
    int arr[3]={0};
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    int posOne=0,posTwo=0,posThree=0;
    for(int i=0;i<3;i++) {
        if(arr[i]==1) {
            posOne=i+1;
        }else if(arr[i]==2) {
            posTwo=i+1;
        }else if(arr[i]==3) {
            posThree=i+1;
        }else{}
    }
    printf("%d %d %d",posOne,posTwo,posThree);
}