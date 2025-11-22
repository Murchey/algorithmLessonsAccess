//
// Created by OYSmur on 2025/11/7.
//
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    int round;
    scanf("%d",&round);
    int res[round];
    int index=0;
    while (round--) {
        char n[30];
        scanf("%s",n);
        int arr[strlen(n)];
        for(int i=0;n[i]!='\0';i++) {
            arr[i]=n[i]-'0';
        }//先把数字分隔开
        int max=0;
        for(int i=1;i<strlen(n);i++) {
            //123 123
            int sum=0,num1=0,num2=0;
            //第一部分的数组
            for (int j = 0; j < i; j++) {
                num1 = num1*10+arr[j];
            }
            //分开数组之后还需要再加权乘10，算出来最后实际的结果
            //第二部分的数组
            for (int j = i; j < strlen(n); j++) {
                num2=num2*10+arr[j];
            }
            sum=num1+num2;
            if(sum>max) {
                max=sum;
            }
        }
        res[index++]=max;
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n", res[i]);
    }
}
