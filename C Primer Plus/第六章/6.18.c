#include<stdio.h>
#define F 5
#define M 150
int main(){
    int f=F;
    while(f<=M){
        f--;
        f*=2;
    }
    printf("%d\n",f);
    return 0;
}