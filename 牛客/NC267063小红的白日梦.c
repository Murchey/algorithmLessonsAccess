//
// Created by OYSmur on 2025/11/4.
//
#include <stdio.h>

int getHappiness(int noonY, int nightY,int moveY) {
    return noonY*2+nightY+moveY;
}
int main() {
    int days=0;
    scanf("%d",&days);
    char noonDream[100001];
    char nightDream[100001];
    scanf("%s",noonDream);
    scanf("%s",nightDream);
    int noonYcnt=0,nightYcnt=0,moveDream=0;
    for(int i=0;i<days;i++) {
        if(noonDream[i]=='Y') noonYcnt++;
        if(nightDream[i]=='Y') nightYcnt++;
        if(noonDream[i]=='N'&&nightDream[i]=='Y') {moveDream++;}
    }
    printf("%d",getHappiness(noonYcnt,nightYcnt,moveDream));
}