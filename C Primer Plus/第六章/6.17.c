#include<stdio.h>
#define M 1000000
#define L 0.08
#define S 100000
int main(){
    int a=M;
    int count=0;
    while(a>0){
        count++;
        a+=a*L;
        a-=S;
    }
    printf("%d",count);
    return 0;
}