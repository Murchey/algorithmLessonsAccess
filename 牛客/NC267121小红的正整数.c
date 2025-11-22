//
// Created by OYSmur on 2025/11/4.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a, const void *b) {
    return *(char*)a-*(char*)b;
}
int main() {
    char str[20];
    //scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    if(len>0&&str[len-1]=='\n') {
        str[len-1]='\0';
    }
    len--;//去除换行符
    qsort(str,len,sizeof(str[0]),cmp);
    char tmp;
    for(int i=0;i<len;i++) {
        if(str[i]!='0') {
            //找到第一个不是零的数字，把它放到首位
            tmp=str[i];
            str[i]=str[0];
            str[0]=tmp;
            break;
        }
    }
    printf("%s",str);
}
