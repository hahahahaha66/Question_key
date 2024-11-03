#include<stdio.h>
void Temperatures(double a){
    const float x1=5.0;
    const float x2=9.0;
    const float x3=32.0;
    const float y=273.16;
    printf("摄氏温度 =%.2lf\n",(x1/x2)*(a-x3));
    printf("开式温度 =%.2lf\n",(x1/x2)*(a-x3)+y);
}
int main(){
    double a;
    while(scanf("%lf",&a)==1){
        Temperatures(a);
    }
    return 0;
}