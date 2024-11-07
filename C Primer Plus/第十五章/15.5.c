#include<stdio.h>
int main(){
    unsigned int num,a;
    scanf("%u,%u",&num,&a);
    unsigned int p=num&((1<<a)-1);
    num>>=a;
    num|=(p<<(sizeof(num)*8-a));
    return 0;
}