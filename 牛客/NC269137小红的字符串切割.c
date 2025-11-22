//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    scanf("%s",str);
    int len=strlen(str);
    char front[50001],behind[50001];
    for(int i=0;i<len/2;i++) {
        front[i]=str[i];
    }
    int index=0;
    for(int i=len/2;i<len;i++) {
        behind[index++]=str[i];
    }
    printf("%s\n",front);
    printf("%s",behind);
}
