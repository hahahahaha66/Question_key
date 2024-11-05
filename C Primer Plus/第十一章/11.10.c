#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[]){
    for(int i=1;i<argc;i++){
        int m=strlen(argv[i]);
        for(int j=m-1;j>=0;j++){
            printf("%c",*(argv[i]+j));
        }
        printf(" ");
    }
    return 0;
}