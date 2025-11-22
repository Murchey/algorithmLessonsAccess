//
// Created by OYSmur on 2025/10/28.
//
#include <stdio.h>
#include <string.h>

int main() {
    char input[3]="";
    scanf("%s",input);
    for(int i=0;input[i]!='\0';i++) {
        if(input[i]>='a' && input[i]<='z') {
            input[i]=input[i]-32;
        }
    }
    if(strcmp(input,"YES")==0) {
        printf("accept");
    }else {
        printf("wrong answer");
    }
}
