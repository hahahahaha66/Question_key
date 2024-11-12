#include<stdio.h>
double my_power(double n,int p){
    if(p==0){
        if(n==0){
            printf("未定义\n");
        }
        return 1;
    }
    if(p==1){
        return n;
    }
    return n*=my_power(n,p-1);;
}
int main(){
    double a=my_power(2,3);
    printf("%lf",a);
    return 0;
}