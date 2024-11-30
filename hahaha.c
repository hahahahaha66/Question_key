#include<stdio.h>
int main(){
    char a;
    while((a=getchar())!=EOF){
        if(a<='9'&&a>='0'){
            printf("number");
        }
        else{
            printf("%c",a);
        }
    }
    return 0;
}