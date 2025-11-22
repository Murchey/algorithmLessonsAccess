//
// Created by OYSmur on 2025/11/6.
//
#include <stdio.h>
int main() {
    int round;
    scanf("%d",&round);
    int res[round];//结果
    for (int i=0;i<round;i++) {
        int flag=-1;
        int arr[4];
        scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
        if (arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3] && arr[0]==arr[3]) {
            flag=1;//没乱飞
        }else{
            flag=0;//乱飞了
        }
        res[i]=flag;
    }
    for (int i=0;i<round;i++) {
        printf("%s\n",res[i]==0?"YES":"NO");
    }
}