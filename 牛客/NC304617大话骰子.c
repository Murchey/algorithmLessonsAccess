//
// Created by OYSmur on 2025/10/23.
//
#include <stdio.h>
int main() {
    int round=0;
    int flags[10025]={0};
    //符合标准的色子个数
    int countBob=0,countAlice=0;
    scanf("%d",&round);//数据组数
    int roundCopy=round;
    while(round--) {
        int aliceArr[6]={0},bobArr[6]={0};
        for(int i=0;i<6;i++) {
            scanf("%d",&aliceArr[i]);
        }
        for(int i=0;i<6;i++) {
            scanf("%d",&bobArr[i]);
        }
        int x=0,num=0;
        scanf("%d %d",&x,&num);
        for(int i=0;i<6;i++) {
            if(aliceArr[i]==num) {countAlice++;}
            if(bobArr[i]==num) {countBob++;}
        }
        if((countAlice+countBob)<x) {flags[round]=1;}
        else{flags[round]=0;}
        countAlice=0;countBob=0;
    }
    for(int i=roundCopy-1;i>=0;i--) {
        printf("%s\n",flags[i]==1?"win":"lose");
    }
}