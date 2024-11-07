#include<stdio.h>
typedef struct hehe{
    char a1[10];
    char a2[10];
    char a3[10];
}hehe;
typedef struct haha
{
    int arr[10];
    hehe str;
}haha;
int main(){
    haha str[5];
    for(int i=0;i<5;i++){
        char*s1=str[i].str.a1;
        char*s2=str[i].str.a2;
        char*s3=str[i].str.a3;
        printf("%s%s%s",s1,s2,s3);
    }
    for(int i=0;i<5;i++){
        int*a=str[i].arr;
        for(int j=0;j<10;j++){
        printf("%d",*(a+j));
        }
        printf("\n");
    }
    return 0;
}