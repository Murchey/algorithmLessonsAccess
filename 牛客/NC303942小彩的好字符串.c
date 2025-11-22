//
// Created by OYSmur on 2025/10/23.
//
#include <stdio.h>
#include <stdlib.h>
//内外字符串循环，从每一段开始都看是不是123数量相等
int main() {
    long long n=0;
    scanf("%d",&n);
    char str[2001];
    scanf("%s",str);
    long long ans=0;
    for(int i=0;i<n;i++) {
        long long oneCount=0,twoCount=0,threeCount=0;
        for(int j=i;j<n;j++) {
            if(str[j]=='1') oneCount++;
            if(str[j]=='2') twoCount++;
            if(str[j]=='3') threeCount++;
            if (oneCount==twoCount && twoCount==threeCount && oneCount==threeCount && oneCount>0) {
                ans++;
            }
        }
    }
    printf("%lld",ans);
}