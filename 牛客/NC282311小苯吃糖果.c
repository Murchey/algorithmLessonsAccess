//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
int main() {
    int x,y,z,max,mid,min;
    scanf("%d %d %d",&x,&y,&z);
    max=(x>=y&&x>=z)?x:((y>=x&&y>=z)?y:z);
    min=(x<=y&&x<=z)?x:((y<=x&&y<=z)?y:z);
    mid=x+y+z-max-min;
    if(mid+min<=max) {
        printf("%d",max);
    }else {
        printf("%d",mid+min);
    }
}