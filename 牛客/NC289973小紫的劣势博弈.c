//
// Created by OYSmur on 2025/10/26.
//
#include <stdio.h>
#include <stdlib.h>
//学习一下qsort排序
//使用qsort的时候需要写一个比较函数来指定是升序还是降序
int compareLong(const void *a, const void *b) {
    return *(long*)a-*(long*)b;
}
int main() {
    long long round=0,x=0;
    long long arr[100001]={0};
    scanf("%lld",&round);
    for (int i=0;i<round;i++) {
        scanf("%lld",&arr[i]);
    }
    qsort(arr,round,sizeof(arr[0]),compareLong);
    //双方都采取最优策略。小红（+）希望最终x尽可能小，小紫（-）希望最终x尽可能大。
    //那么小红从最小的开始拿，小紫会从最小的开始拿
    for (int i=0;i<round;i+=2) {
        x+=arr[i];
        x-=arr[i+1];
    }
    printf("%lld\n",x);
}
