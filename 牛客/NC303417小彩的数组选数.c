// 贪心算法
// Created by OYSmur on 2025/10/27.
//
#include <stdio.h>
int main() {
    int len=0;
    scanf("%d",&len);
    int arr[200001]={0};
    for(int i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    int dp[200002]={0};
    //前两个元素，然后递推
    dp[0]=arr[0];
    if (dp[0]>arr[1]) {
        dp[1]=arr[0];
    }else {
        dp[1]=arr[1];
    }
    //第三个元素之后
    for (int i =2;i<len;i++) {
        int current=dp[i-2]+arr[i];
        if (current>dp[i-1]) {
            dp[i]=current;
        }else {
            dp[i]=dp[i-1];
        }
    }

    printf("%d",dp[len-1]);
}
