//
// Created by OYSmur on 2025/11/1.
//
#include <stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    //偶数构造正整数的对数为n/2
    //8=(1,7)(2,6)(3,5)(4,4)
    //奇数构造正整数的对数为(n-1)/2
    //7=(1,6)(2,5)(3,4)
    if (n%2==0) {
        if (k<=n-1) {
            printf("YES");
        }else {
            printf("NO");
        }
    }else {
        if (k<=n-1) {
            printf("YES");
        }else {
            printf("NO");
        }
    }
}