#include<stdio.h>
int main(){
    int a;
    int count=0;
    scanf("%d",&a);
    for(int i=0;i<16;i++){
        if((a&1)==1){
            count++;
        }
        a>>=1;
    }
    printf("%d",count);
    return 0;
}