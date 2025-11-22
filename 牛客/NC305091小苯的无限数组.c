//
// Created by OYSmur on 2025/10/27.
//
#include <math.h>
#include <stdio.h>
int main() {
    //每次，第一个元素都会被删除
    //4 8 12
    //次数        值       每两个元素之间的公差
    //1         2           2
    //2         4           4
    //3         8           8
    //k         2^k         2^k
    int round,n,k;
    int res[101]={0};
    int index=0;
    scanf("%d",&round);
    while(round--) {
        scanf("%d %d",&n,&k);
        res[index++]=(int)pow(2,k)+(n-1)*(int)pow(2,k);
    }
    for(int i=0;i<index;i++) {
        printf("%d\n",res[i]);
    }
}