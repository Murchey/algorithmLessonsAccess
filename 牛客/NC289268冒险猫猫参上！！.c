//
// Created by OYSmur on 2025/11/1.
//
#include <stdio.h>
int main() {
    int round=0;
    scanf("%d",&round);
    int index=0;
    int res[round];
    int holes=0;
    while (round--) {
        scanf("%d",&holes);
        res[index++]=holes;
    }
    for (int i=0;i<sizeof(res)/sizeof(int);i++) {
        for (int j=0;j<res[i];j++) {
            if (j%2!=0) printf("%d ",1);
            if (j%2==0) printf("%d ",2);
        }
        printf("\n");
    }
}