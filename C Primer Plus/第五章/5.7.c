#include<stdio.h>
double haha(double a){
    return a*a*a;
}
int main(){
    double x;
    scanf("%lf",&x);
    double y=haha(x);
    printf("%lf",y);
    return 0;
}