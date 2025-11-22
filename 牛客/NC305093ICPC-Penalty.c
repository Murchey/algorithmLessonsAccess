//
// Created by OYSmur on 2025/10/27.
//
#include <stdio.h>
#include <string.h>

int main() {
    int n,t;
    char state[100];
    scanf("%s",state);
    scanf("%d %d",&n,&t);
    if (strcmp(state,"Rejected")==0) {
        printf("%d",0);
    }else {
        int timePunish=0;
        timePunish=t+(n-1)*20;
        printf("%d",timePunish);
    }
}
