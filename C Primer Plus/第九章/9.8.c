#include<stdio.h>
double my_power(double n,int p){
    double pow=1;
    if(p==0){
        if(n==0){
            printf("未定义\n");
        }
        return 1;
    }
    for(int i=0;i<p;i++){
        pow*=n;
    }
    return pow;
}
int main(){
    double a=my_power(10000,0);
    printf("%lf",a);
    return 0;
}