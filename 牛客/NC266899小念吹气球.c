//
// Created by OYSmur on 2025/11/1.
//
#include <stdio.h>
int main() {
    int n;//提交的题目数量
    int ballonCnt=0;//气球的数量
    int submissionList[26]={0};
    scanf("%d",&n);
    ballonCnt=n;
    for (int i=0;i<n;i++) {
        char thisSubmission[n];
        scanf("%s",thisSubmission);
        if (submissionList[thisSubmission[i]-'A']==0) {
            ballonCnt++;
            submissionList[thisSubmission[i]-'A']=1;
        }
    }
    printf("%d\n",ballonCnt);
}