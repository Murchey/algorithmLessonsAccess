//
// Created by OYSmur on 2025/10/29.
//
#include <stdio.h>
int main() {
    int flowerCnt=0,n;
    scanf("%d",&n);
        //特别说明，如果输入的是0 1 0 1这种，用数组没问题
        //但是题目要求的是01字串，也就是说中间是连续的，不含空格给
        char a[n];
        scanf("%s",a);
        for (int j=0;j<n;j++) {
            if (a[j]=='0') flowerCnt++;
        }
    printf("%d\n",flowerCnt);
}