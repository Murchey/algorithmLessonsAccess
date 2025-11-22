//
// Created by OYSmur on 2025/10/25.
//
#include <stdio.h>
#include <string.h>

//得到是否存在1 2 3，不存在返回不同的字符的个数
int isExistsAll(char * str) {
    int one=0;
    int two=0;
    int three=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] =='1') {
            one++;
        }if (str[i] =='2') {
            two++;
        }if (str[i] =='3') {
            three++;
        }
    }
    int differentNum=0;
    for (int i = 0; i<strlen(str)-1; i++) {
        if (str[i] != str[i+1]) {
            differentNum++;
        }
    }
    if (one!=0&&two!=0&&three!=0) {
        return 1;
    }else {
        return -1;
    }
}
int leastOperation(char* str,int len) {
    int minOperation=2;
    for (int i = 2; i<len; i++) {
        char pos1=str[i];
        char pos2=str[i-1];
        char pos3=str[i-2];
        int has1=0,has2=0,has3=0;

        if (pos1=='1') has1=1;
        else if (pos1=='2') has2=1;
        else if (pos1=='3') has3=1;

        if (pos2=='1') has1=1;
        else if (pos2=='2') has2=1;
        else if (pos2=='3') has3=1;

        if (pos3=='1') has1=1;
        else if (pos3=='2') has2=1;
        else if (pos3=='3') has3=1;

        int count=has1+has2+has3;
        int ops=3-count;
        if (ops<minOperation) {
            minOperation=ops;
            if (minOperation==0) {
                return 0;
            }
        }
    }
    return minOperation;
}

int main() {
    int round=0,roundCopy=0;
    char arr[200001]="";
    int n=0;
    scanf("%d",&round);
    roundCopy=round;
    int res[10]={0};
    int count=0;
    while(round--) {
        scanf("%d",&n);
        scanf("%s",arr);
        res[count]=isExistsAll(arr);//找出了不能够组合成功的。用-1表示
        if (res[count]==1) {
            res[count]=leastOperation(arr,n);
        }
        count++;
    }
    for (int i = 0; i < roundCopy; i++) {
        printf("%d\n",res[i]);
    }
}
