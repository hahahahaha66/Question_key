#include<stdio.h>
int main(){
    unsigned int a;
    int i,j;
    scanf("%u",&a);
    for( i=2;i<=a;i++){
        int count=1;
        for( j=2;j*j<=i;j++){
            if(i%j==0){
                count=0;
                break;
            }
        }
        if(count){
            printf("%d ",i);
        }
    }
    return 0;
}