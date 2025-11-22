//
// Created by OYSmur on 2025/11/3.
//
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return *(int*)a-*(int*)b;//升序排
}
int main() {
    int n;//窗口总数
    scanf("%d",&n);
    int a[n];//每个窗口前的排队人数
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    int flag = 0;
    for(int i=0;i<n;i++) {
        if (a[i-1]==a[i]) {
            flag = 1;
            break;
        }
    }
    if(flag==0) {printf("YES");}
    else {printf("NO");}
}