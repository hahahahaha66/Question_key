#include<stdio.h>
char get_first1(void){
    char ch;
    scanf(" %c",&ch);
    return ch;
}
char get_first2(void){
    char ch;
    while((ch=getchar())==' '){
        ;
    }
    return ch;
}
int main(){
    char a=get_first1();
    printf("%c",a);
    return 0;
}