#include<stdio.h>
#include<string.h>
char*string_in(char*str1,char*str2){
    int i,j;
    int m=strlen(str1);
    int n=strlen(str2);
    for(i=0;i<=m-n;i++){
        for(j=0;j<n;j++){
            if(*(str1+i+j)!=*(str2+j)){
                break;
            }
        }
        if(j==n){
            return str1+i;
        }
    }
    return NULL;
}